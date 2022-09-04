//Q.8 Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

// In case of multiple subarrays, return the subarray which comes first on moving from left to right.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long sum=0;
        vector<int>v;
        int i=0;int j= 0;
        if(s==0){
            v.push_back(-1);
            return v;
        }
        while(j<n){
            if(sum==s){
                v.push_back(j+1);
                v.push_back(i);
                return v;
            }
            else if(sum>s){
                sum-=arr[j];
                j++;
            }
            else{
                sum+=arr[i];
                i++;
            }
        }
        v.push_back(-1);
        return v;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends