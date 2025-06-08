#include<iostream>
using namespace std;

int main()
{
    int start,end;
    int n=7;
    int arr[]={3,-4,5,4,-1,7,-8};
     
            int max_sum=-9999;
             int cs=0;
    for(int start=0; start<n; start++ )
    {
         
        for(end=start; end<n; end++)
        {
         
            cs +=arr[end];
            max_sum=max(cs,max_sum);
        }
       
    }
 cout<<"The maximum sum of subarray is"<<max_sum<<endl;
}
