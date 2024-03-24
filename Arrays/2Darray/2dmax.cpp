#include<iostream>
using namespace std;
int checkMaxi(int arr[][3], int row,int cols )
{
    int maxi = INT_MIN;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] > maxi )
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
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
            cin>>arr[j][i];
        }
        cout<<endl;
    }

    // cout<<"To print it columnwise"<<endl;

    // for(int i = 0 ; i < 3 ; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
   cout<< checkMaxi(arr,3,3)<<endl;
}