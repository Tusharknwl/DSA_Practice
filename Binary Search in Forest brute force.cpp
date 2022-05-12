#include <bits/stdc++.h> // all in one headers :)

using namespace std;

// function to calculate the height to the forest
int calculateHeight(vector<int> &input, int k)
{

	// find the maximum height of the trees in the forest
	int maximum_height = *max_element(input.begin(), input.end());
	// the for loop to try every height
	for (int height = 1; height <= maximum_height; height++)
	{
		// declare a variable to hold wood collection
		int wood_collected = 0;
		for (int i = 0; i < input.size(); i++)
		{
			// if height of tree is greater than cutting height
			if (input[i] > height)
				wood_collected += (input[i] - height);
		}
		// check if wood collected is equal to k
		if (wood_collected == k)
		{
			return height;
		}
	}
	// return -1 if its not possible to achieve k units of wood
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
