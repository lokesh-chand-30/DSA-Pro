//Single number problem
#include<iostream>
#include<vector>
using namespace std;

int unique(vector<int>& vec,int ans)
{
   for(int i:vec)
    {
        ans=ans^i;

      
 
    }
    return ans;
}

int main()
{
    int i;
    vector<int>vec={1,1,2,1,2};
    int ans=0;
  
    cout<<"Unique element is:"<<unique(vec,ans)<<endl;
 
   
}