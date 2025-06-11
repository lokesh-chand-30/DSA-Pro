#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>vec, int size, int target)
{
int st=0, end=size-1;
while(st<=end)
{
    int mid= (st +(end-st)/2);
    if(target<vec[mid])
    {
        end=mid-1;
    }
    else if(target>vec[mid]){
        st=mid+1;
    }
    else
    return mid;
}
return -1;




}

int main()
{
    vector<int>vec={-1,0,3,4,5,9,12};
    int size=vec.size();
    int target=9;
    cout<<binarysearch(vec,size,target);
}