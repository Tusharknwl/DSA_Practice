// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int tempSol) {
    int studentCount = 1;
    int pageSum=0;
    for(int i=0; i<n; i++) {
        if(pageSum+arr[i]<=tempSol) {
            pageSum+=arr[i];
        }
        else {
            studentCount++;
            if(studentCount>m||arr[i]>tempSol)
                return false;
            pageSum=arr[i];
        }
    }
    return true;
}

int main() {
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=2;
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
    }
    int e=sum;
    int ans;
    while(s<=e) {
        int mid=s+(e-s)/2;
        if(isPossible(arr,n,m,mid)) {
            ans=mid;
            e=mid-1;
        }
        else
            s=mid+1;
    }

    cout<<ans;
    return 0;
}
