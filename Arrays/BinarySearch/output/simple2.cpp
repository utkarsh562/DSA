#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[] , int size , int target)
{
    int start = 0;
    int end = size - 1;
    int mid =  start + (end - size ) / 2;

    while(start <= end)
    {
        int element = arr[mid];
        if(element == target)
        {
            return mid;
        }

        else if(element > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {2,4,6,7,9,11};
    int size = 6;
    int target = 9;
    int func = BinarySearch(arr, size , target);
    if(func == -1)
    {
         cout<<"Target not found";
    }
    else
    {
        cout<< "Found the target at : "<< func <<endl;
    }
    
}