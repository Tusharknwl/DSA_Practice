
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int k, int tempSol) {
    int painterCount=1;
	int boardsArea=0;
	for(int i=0; i<n; i++) {
		if(boardsArea+arr[i]<=tempSol) {
			boardsArea+=arr[i];
		}
		else {
			painterCount++;
			if(painterCount>k||arr[i]>tempSol)
				return false;
			boardsArea=arr[i];
		}
	}
	return true;
}

int main() {
    int arr[]={5,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
    }
    int e=sum;
    int ans;
    while(s<=e) {
        int mid=s+(e-s)/2;
        if(isPossible(arr,n,k,mid)) {
            ans=mid;
            e=mid-1;
        }
        else
            s=mid+1;
    }

    cout<<ans;
    return 0;
}
