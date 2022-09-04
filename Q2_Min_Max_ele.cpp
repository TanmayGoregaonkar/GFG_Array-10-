// Q.2 Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
    
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
   long long mn=a[0];long long mx=a[0];
   for(long long i=0;i<n;i++){
       if(a[i]<mn){
           mn=a[i];
       }
       if(a[i]>mx){
           mx=a[i];
       }
   }
     pair<long,long>p;
       p.first=mn;
       p.second=mx;
       return {p.first,p.second};
}