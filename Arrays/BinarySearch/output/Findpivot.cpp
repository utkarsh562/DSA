// In this we're going to find the peak element.
#include<iostream>
#include<vector>
using namespace std;
int Pivotelement(vector<int> arr)
{
    int s = 0;
    int e = arr.size()-1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid] > arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid-1]> arr[mid])
        {
            return mid - 1;
        }
        else if(arr[s] > arr[mid])
        {
            e = mid -1;
        }
        else if(arr[s] < arr[mid])
        {
            s = mid + 1;
        }
    }
    
}
int main()
{
    vector<int> arr{3,4,5,6,7,1,2};
    int Element = Pivotelement(arr);
    cout<<"The Pivot Element is  "<<arr[Element]<<" ";
}
