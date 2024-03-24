#include<iostream>
using namespace std;
bool findkey(int arr[][3], int rows, int cols, int key)
{
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols; j++ )
        {
            if(arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
   
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

   
    int key = 5;
    if(findkey(arr,3,3,key ))
    {
        cout<< "true"<<" ";
    }
    else{
        cout<<"fasle"<<" " ;
    }
}