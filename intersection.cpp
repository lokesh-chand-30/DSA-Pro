//Intersection of two arrays

#include<iostream>
using namespace std;

void intersection(int arr1[],int size1,int arr2[],int size2)
{
for(int i=0; i<size1; i++)
{
    int count=0;
     bool alreadyPrinted = false;
      // Check if arr1[i] was already printed
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        // Skip if already printed
        if (alreadyPrinted)
            continue;
    for(int j=0; j<size2; j++)
    {
        if(arr1[i]==arr2[j])
        count++;
    }
if(count>=1)
{
    cout<<arr1[i]<<endl;
}
}
}


int main()
{
    int arr1[] = {3,4,5,3,4};
    int size1=5;
    int arr2[]={3,4,5,6,7,8};
    int size2=6;
    cout<<"Intersection element:"<<endl;
    intersection(arr1,size1,arr2,size2);
    return 0;

}
