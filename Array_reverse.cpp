#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{2 ,3 ,1 ,5 ,4};
    int n=arr.size();
    int low=0;
    int high=arr.size()-1;
    while(low<high) {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
  
    return 0;
}
