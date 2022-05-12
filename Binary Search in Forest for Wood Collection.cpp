#include <bits/stdc++.h> // all in one headers :)

using namespace std;

// function to calculate the height to the forest
int calculateHeight(vector<int> input, int k)
{
	// sort the input array
	// Reason: When we will collect the wood after cutting the
	// trees at height H, since the trees' heights are sorted we can
	// stop at the tree with height less than H as all the later ones
	// will be smaller in height (again because the array is sorted)
	sort(input.begin(), input.end());

	// size of the input
	int n = input.size();

	int low = 1;
	int high = input[n - 1];

	// start the binary searching
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		int wood_collected = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			// if wood collected is -ive or 0
			if (input[i] - mid <= 0)
				break; // that is why we sorted our input,
				// Now all the remaining trees which are lower in height
				// does not need to be checked.
			wood_collected += (input[i] - mid); // add the wood collected
		}
		// if wood collected is equal to k then we have the result
		if (wood_collected == k)
		{
			return mid;
		}
		else if (wood_collected > k) // if collection is more
		{	// reduce the amount by increasing the height
			low = mid + 1;
		}
		else
		{
			// increase the amount by decreasing the height
			high = mid - 1;
		}
	}
	return -1;
}

// Driver code
int main()
{
	// input
	vector<int> input{7, 4, 9, 2, 1, 8};

	int k = 3;
	cout << "The height at which one should cut the trees is " << calculateHeight(input, k) << endl;

	return 0;
}
