#include<iostream>

using namespace std;

int counter(int arr[] , int size)
{
    int numzero = 0;
    int numone = 0;

    for(int i = 0 ; i< size ; i++)
    {
        //To Check the number of zeroes and ones 

        if(arr[i] == 0)
        {
            numzero = numzero +1; //do the increment
            
        }
        else
        {
            numone = numone + 1; // do the sam increment to count number of ones
          
        }
    }

    cout<< numzero<<endl;

    cout<< numone<<endl;
}
int main()
{
    int arr[] = {0,1,1,1,1,1,0,0,0,0,1,0,1,0,0};

    int size = 15;
    
    cout<<counter(arr, size)<<endl;
}