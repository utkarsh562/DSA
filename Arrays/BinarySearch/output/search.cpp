//Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> v,  int target)
{
    int s = 0;
    int e = v.size()-1;
    while(s<= e)
    {
        int mid = s + (e - s)/2;
        if(v[mid]== target)
        {
            return mid;
        }
        else if(v[mid] < target)
        {
            s = mid + 1;
        }
        else if(v[mid]> target)
        {
            e = mid -1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v{-1,0,3,5,9,12};
    int target = 2;
    int func = binarySearch(v , target);
    cout<<func;
    
}
