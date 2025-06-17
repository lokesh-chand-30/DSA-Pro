#include<iostream>
#include<vector>
using namespace std;


int single_element(vector<int>vec,int len)
{
    int ans=0;
    for(int i:vec)
    {
        ans= ans^i;
    }
    return ans;
}


int main()
{
   vector<int>vec={1,1,2,3,3};
   int len=vec.size();
   cout<<"Single element is:"<<single_element(vec,len);


}