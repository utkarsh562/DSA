#include<iostream>

using namespace std;

int twos(int arr[] , int size)
{
    int two = 0;

    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == 2)
        {
            two = two + 1; // if found number of two's then do the increment  -->
        }
    }

    cout<< two <<endl;
}
int main()
{
   int arr[] = {1,2,3,2,4,6,2,9,9,4,1,2};

   int size = 12;

   cout<<"The no. of Two's in this array will be : "<<endl;

   cout<< twos(arr,size)<<endl;

}