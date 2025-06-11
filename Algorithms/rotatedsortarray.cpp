#include<iostream>
#include<vector>
using namespace std;

int rotatedsort(vector<int>vec, int st, int end, int target)
{
while(st<=end)
{
    int mid=st + (end-st)/2;
    if(vec[mid]==target)
    {
        return mid;
    }
 if(vec[st]<=vec[mid])
    {
        if(vec[st]<=target && target<=vec[mid])
        {
            end=mid-1;

        }
        else{
            st=mid+1;
        }
    }
        else{
           if( vec[mid]<=target && target<=vec[end])
           {
            st=mid+1;
           }
           else{
            end=mid-1;
           }
        }
    }
    return -1;
}





int main()
{
    vector<int>vec={3,4,5,6,7,0,1,2};
    int target=0;
    int st=0; 
    int end=vec.size()-1;
    cout<<rotatedsort(vec,st,end,target);

}