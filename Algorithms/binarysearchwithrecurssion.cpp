#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> vec, int target, int st, int end)
{


    if (st <= end)
    {
        int mid = (st + end) / 2; 

        if (target < vec[mid])
        {
          return binarysearch(vec,target,st,mid-1);
        }
        else if (target > vec[mid])
        {
            return binarysearch(vec,target,mid+1,end);
        }
        else
        {
            return mid;
        }
    }

    return -1; 
}

int main()
{
    vector<int> vec = {-1, 0, 3, 4, 5, 9, 12};
    int size=vec.size();
   int st=0;
   int end=size-1;

    int target = 9;

    cout << binarysearch(vec, target, st, end);
    return 0;
}
