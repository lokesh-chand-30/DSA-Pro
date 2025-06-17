//KADANE'S ALGORITHM
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[]={1,-1,3,4,5};
    int n=5;
    int max_sum=INT_MIN;
     int cs=0;
    for(int i=0; i<n; i++)
    {
       
        cs+=arr[i];
        max_sum=max(max_sum,cs);
        if(cs<0)
        cs=0;
    }
    cout<<max_sum;

}