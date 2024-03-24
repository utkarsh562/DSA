#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> arr)
{
    int ans = 0;
    for(int i = 0 ; i <arr.size() ; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Elements : "<<endl;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        cin>>arr[i];
    }
    int uniqueElement = findUnique(arr);
    cout<<"The unique element is to be  "<<uniqueElement<<endl;

    return 0;
}