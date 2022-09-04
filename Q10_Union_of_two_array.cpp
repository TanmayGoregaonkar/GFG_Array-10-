// Q.10 Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int>s;int ct=0;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            s.insert(b[i]);
        }
        for (auto it : s)
        {
            ct++;
        }
        return ct;
    }
};
int main(){
int t;
cin>>t;
 
while(t--){

}
 
return 0;
}