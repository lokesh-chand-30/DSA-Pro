//Reversing an array
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int st=0;
    int end=size-1;
   
while(st<end)
{
    swap(arr[st],arr[end]);
    end--;
    st++;

}

for(int i=0 ;i<size; i++)
{
    cout<<arr[i]<<endl;

}
}