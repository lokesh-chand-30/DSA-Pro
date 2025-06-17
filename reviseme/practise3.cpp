//Linear search
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int target=65;
    for(int i=0; i<5; i++)
    {
        if(arr[i]==target)
        {
           
            cout<<"Target found at:"<<i<<endl;
return 0;
        }
       
    }
     
        cout<<"Target not found"<<endl;
        
}