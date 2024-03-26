//In this code you've to find the peak element from the gven array
#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> arr )
{
    int s = 0;
    int e = arr.size()-1;
    while(s < e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    } return arr[s];
}
int main()
{
    vector<int> arr{0,1,2,10,3,5,7};
    int func = peak(arr);
    cout<<"The peak element is  "<<func;

}
