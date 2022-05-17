#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{2 ,3 ,1 ,5 ,4};
    int n=arr.size();
    int max=INT_MIN;
    int min=INT_MAX;
    
    for(int i=0; i<n; i++) {
        if(arr[i]>=max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    
    cout<<"min="<<min<<" max="<<max;
    return 0;
}
