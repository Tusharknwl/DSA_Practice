
#include <bits/stdc++.h>
using namespace std;

int pivotElement(int arr[], int n) {
    int l=0;
    int r=n-1;
    int mid=l+(r-l)/2; 
    while(l<r) {
        if(arr[mid]>=arr[0]) {   // mid lie on 1st line
            l=mid+1;
        }
        else                    // mid lie on 2nd line
            r=mid;
        mid=l+(r-l)/2;
    }
    return l;
}

int binarySearch(int arr[], int l, int r, int x) {
    while(l<=r) {
        int mid=l+(r-l)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) r=mid-1;
        else l=mid+1;
    }
    return -1;
}

int main() {
    int nums[] ={4,5,1,2,3}; // given arry
    int n= sizeof(nums) / sizeof(nums[0]);
    int target=3;
    int ans;
    int pivot=pivotElement(nums, n);
    if(nums[pivot]<=target&&target<=nums[n-1]) ans=binarySearch(nums,pivot,n-1,target);
    else ans=binarySearch(nums,0,pivot-1,target);
    cout<<ans;
    return 0;
}
