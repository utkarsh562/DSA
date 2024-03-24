// We've to find the first occurence of the target element 
//let's begin

#include <bits/stdc++.h>
using namespace std;

int ElementOccur(vector<int> v , int  target)
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
             e = mid - 1;
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

int main()
{
    vector<int> v{1,2,4,4,4,4,6,7,9};
    int target = 4;

    int firstOccur = ElementOccur(v, target);

    cout<<"The first occurence of the element is : "<< firstOccur <<" ";

    return 0;
}