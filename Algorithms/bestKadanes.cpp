#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int cs=0;
    int max_sum=-99999;
    for(int i=0; i<size; i++)
    {
        cs+=arr[i];
        max_sum = max(max_sum,cs);
        if(cs<0)
        {
            cs=0;
        }

    }
    cout<<max_sum;
}