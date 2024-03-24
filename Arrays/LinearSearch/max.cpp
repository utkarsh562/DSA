#include<iostream>
#include<limits.h>
using namespace std;
int max(int arr[] , int size)
{
    int maxi = arr[0];
    int mini = INT_MAX;
    for(int i = 0 ; i < size ; i++)
    {
        
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
        else if(arr[i] < mini)
        {
            mini = arr[i];
        }
        
    }
     cout <<"The maximum element is : " <<maxi <<endl;
      cout <<"The minimum element is : " <<mini <<endl;

}

int main()
{
   int arr[] = {5,6,8,9,10,12};
   int size =  6;
   max(arr,size);

}