#include<iostream>

using namespace std;

bool find(int arr[] ,int size , int key )
{
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};

    int size = 8;

    int key;

    cout<<"Enter the value of the key ";

    cin>> key;
    
    if(find(arr,size , key))
    {
        cout<< " It's found";
    }
    else
    {
        cout<< " It's not found";
    }
}