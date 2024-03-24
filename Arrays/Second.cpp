#include<iostream>
using namespace std ;
int main()
{
    int arr[5000];
    int n;
    cin>>n;
    for(int index = 0 ; index<n ; index++)
    {
        cin>>arr[index];
    }
    for(int index = 0 ; index < n; index++)
    {
        cout<< 2*arr[index]<<" ";
    }
}