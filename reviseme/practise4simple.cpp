//Reverse an array-->Two pointer approach
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int st=0;
    int end=size-1;
    while(st<end)
    {
        int temp=arr[st];
            arr[st]=arr[end];
            arr[end]=temp;
            st++;
            end--;
        }

        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<endl;
        }

    }
