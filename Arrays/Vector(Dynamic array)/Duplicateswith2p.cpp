#include<iostream>
#include<vector>
using namespace std;
int Ssmallest (vector<int> &a, int  n){
    int largest = a[0];
    int Slargest = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            Slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > Slargest)
        {
            a[i] = Slargest;
        }
    }
    return Slargest;
        

}
int main()
{
    vector<int> arr{1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    cout<<Ssmallest(arr,n);
}
