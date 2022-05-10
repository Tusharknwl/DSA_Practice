
#include <bits/stdc++.h>
using namespace std;

int pivotIndex(int arr[], int n) {
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

int main() {
    int arr[] ={4,5,1,2,3}; // given arry
    
    int n= sizeof(arr) / sizeof(arr[0]);
    cout<<pivotIndex(arr, n);
    return 0;
}
