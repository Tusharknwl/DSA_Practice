#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2 ,3 ,1 ,5 ,4, -1, 500, 200};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++) {
        int minInd=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[minInd]) {
                minInd = j;
            }
        }
        swap(arr[i],arr[minInd]);
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}
