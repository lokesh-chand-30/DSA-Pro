#include<iostream>
#include<vector>
using namespace std;

int maxsubarr(vector<int> &vec)
{
   

    int cs=0;
    int max_sum=-99999;
    for(int i: vec)
    {
        cs+=i;
        max_sum = max(max_sum,cs);
        if(cs<0)
        {
            cs=0;
           

        }

    }
  return max_sum;

}

int main()
{

     vector<int>vec={1,2,3,4,5};
     cout<<"Max sum is"<<maxsubarr(vec);
}