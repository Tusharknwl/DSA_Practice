#include <bits/stdc++.h>

using namespace std;
int maximumSubarraySum(vector < int > arr) {
  int n = arr.size();
  int maxSum = INT_MIN;
  int currSum=0;
  for (int i = 0; i <= n - 1; i++) {
      if(currSum<0) currSum=0;
      currSum += arr[i];
      if (currSum > maxSum) {
        maxSum = currSum;
      }
    }
  return maxSum;
}
int main() {
    vector<int> a = {-2, 3, 1, -2, 9};
    cout << maximumSubarraySum(a) << endl;
    return 0;
}
