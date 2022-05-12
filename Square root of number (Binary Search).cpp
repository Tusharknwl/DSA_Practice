#include <bits/stdc++.h>
using namespace std;

//for floor value
int floorSqr(int x) {
    
    if(x==0||x==1) return x;
    
    int l=0,r=x/2,ans;
    while(l<=r) {
        int mid = l+(r-l)/2;
        long long int sqr = mid*mid;
        if(sqr==x) return mid;
        else if(sqr<x) {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    return ans;
}

//for float part
double morePrecision(int n, int precision, int tempSol) {
    double ans=tempSol;
    double factor=1;
    for(int i=0; i<precision; i++) {
        factor=factor/10;
        for(double j=ans;j*j<=n;j=j+factor) {
            ans=j;
        }
    }
    return ans;
}

int main() {
    int tempSol=floorSqr(37);
    cout<<morePrecision(37,3,tempSol);
    return 0;
}
