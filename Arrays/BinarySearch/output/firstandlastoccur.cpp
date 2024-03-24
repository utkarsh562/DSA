// We've to find the first occurence of the target element 
//let's begin

#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> v , int  target, bool findleft)
{
    int s = 0;
    int e = v.size() - 1 ;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e)
    {


        if(v[mid] == target)
        {
             ans =  mid ;
             if(findleft)
             {
                e = mid - 1;
             }
             else
             {
                s = mid + 1;
             }
             
        }
    
        else if(v[mid] > target)
        {
              e = mid - 1;
         }

         else if(v[mid] <  target)
        {
              s = mid + 1;
         }

        mid = s + (e - s) / 2;
       
    }
     return ans;
}
vector<int> searchRange(vector<int>& v, int target) {
    vector<int> result(2, -1);
    int leftIndex = binarysearch(v, target, true);
    if (leftIndex == -1) // If target not found
        return result;
    
    int rightIndex = binarysearch(v, target, false);
    result[0] = leftIndex;
    result[1] = rightIndex;
    return result;
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    cout << "Starting position: " << result[0] << ", Ending position: " << result[1] << endl;

    return 0;
}