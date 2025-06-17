//find smallest and greatest in array

#include<iostream>
using namespace std;




int main()
{
int arr[5]={1,2,3,4,5};
int size=5;
int mini=9999;
int maxi=-999;
for(int i=0; i<size; i++)
{
    mini=min(mini,arr[i]);
    maxi=max(maxi,arr[i]);
}
cout<<mini<<endl;
cout<<maxi;

}