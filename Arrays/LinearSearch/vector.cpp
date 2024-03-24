#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    
    arr.push_back(5);
    arr.push_back(7);
    for(int i = 0 ; i < arr.size() ; i++)
    {
        cout<<arr[i]<<endl;
    }
    arr.pop_back();
    for(int i = 0 ; i < arr.size() ; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

}