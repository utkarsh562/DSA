#include <iostream>
using namespace std;
int BinarySearch(int arr[] , int size , int target)
{
    int start = 0;
    int end = size - 1;
    int middle = (start + end )/2;
    while(start <= end)
    {
        int element =  arr[middle];
        if(element == target)
        {
            return middle; 
        }
        else if(element > target)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
        middle = (start + middle) / 2;
    } return -1;


}

int main()
{
    int arr[] = {1,2,4,6,7,8};
    int size = 6;
    int target = 7;

    int Number = BinarySearch(arr , size , target);
    if(Number == -1)
    {
        return -1;
    }
    else{

        cout<< "Number Found : "<<Number << endl;
    }
}