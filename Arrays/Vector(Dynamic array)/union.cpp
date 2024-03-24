#include <bits/stdc++.h>
using namespace std;

vector<int> Unionarray(int arr[], int brr[], int n, int m)
{
   set<int> a;
   for(int i = 0 ; i < n; i++)
   {
        a.insert(arr[i]);
   }
   for(int i = 0 ; i < m ; i++)
   {
        a.insert(brr[i]);
   }
   vector<int> ans(a.begin(), a.end());
   return ans;
   
}
int main()
{
    int arr[] = {1,2,2,2,3};
    int brr[] = {2,3,3,4,5,5};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    vector<int> uni = Unionarray(arr,brr,m,n);
    for(auto i : uni)
    {
        cout<<i<<" ";
    }
}