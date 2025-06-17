//Largest and smallest index

#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int mini=9999;
    int index_mini;
    int maxi=-9999;
    int index_maxi;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<mini)
        {
        mini=arr[i];
        index_mini=i;
        }

        if(arr[i]>maxi)
        {
        maxi=arr[i];
        index_maxi=i;
        }

    }
    cout<<"greatest index:"<<index_maxi<<endl;
    cout<<"smallest index:"<<index_mini<<endl;
}