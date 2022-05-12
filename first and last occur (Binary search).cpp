// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//for left occur
int binarySearchLeft(int arr[], int x, int n) {
    int l=0;
    int r=n-1;
    int i=-1;
    while(l<=r) {
        int mid=l+(r-l)/2;
        if(arr[mid]==x) {
            r=mid-1;
            i=mid;
        }
        else if(arr[mid]>x) 
            r=mid-1;
        else
            l=mid+1;
    }
    return i;
}

//for right occur
int binarySearchRight(int arr[], int x, int n) {
    int l=0;
    int r=n-1;
    int i=-1;
    while(l<=r) {
        int mid=l+(r-l)/2;
        if(arr[mid]==x) {
            l=mid+1;
            i=mid;
        }
        else if(arr[mid]>x) 
            r=mid-1;
        else
            l=mid+1;
    }
    return i;
}

int main() {
    int arr[] ={5, 7, 7, 8, 8, 8}; // given arry
    int x=9; // target;
    int n= sizeof(arr) / sizeof(arr[0]);
    cout<<binarySearchLeft(arr, x, n);
    cout<<binarySearchRight(arr, x, n);
    return 0;
}
