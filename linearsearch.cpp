//Linear Search Algorithm to find a target
#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
             cout<<"target found";
        return i;
       
        break;
    }
}
    return -1;

    }

int main()
{
    int arr[]={0,10,2,3,4,5};
    int size=6;
    int target=10;

    cout<<linearsearch(arr,size,target)<<endl;
    return 0;
}