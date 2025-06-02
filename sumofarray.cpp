//Sum of all elements in an array
#include<iostream>
using namespace std;

int Add(int arr[],int size, int sum)
{
for(int i=0; i<size; i++)
{
    sum=sum+arr[i];
}
return sum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int sum=0;
    cout<<"Sum is:"<<Add(arr,size,sum)<<endl;

}