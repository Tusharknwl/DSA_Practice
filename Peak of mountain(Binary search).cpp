#include <bits/stdc++.h>
using namespace std;


int peakofMountain(int arr[], int n) {
    int l=0;
    int r=n-1;
    while(l<=r) {
        int mid=l+(r-l)/2;
        if(mid==r&&mid==l) return mid; // boundary case
        if(arr[mid]<arr[mid+1]) {
            l=mid+1;
        }
        else if(arr[mid]<arr[mid-1]) 
            r=mid-1;
        else
            return mid;
    }
    return -1;
}

int main() {
    int arr[] ={1111, 113, 22}; // given arry
    
    int n= sizeof(arr) / sizeof(arr[0]);
    cout<<peakofMountain(arr, n);
    return 0;
}
