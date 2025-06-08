#include<iostream>
#include<vector>
using namespace std;

vector<int> check_pair(vector<int> vec,int target)
{
    vector<int>ans;
    int n=vec.size();
for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if(vec[i]+vec[j]==target)
        {
            ans.push_back(i);
            ans.push_back(j);
          return ans;
         
        }
    }
}
}
int main()
{
    vector<int> vec={2,7,11,15};
    int target=18;
    vector<int>pair=check_pair( vec, target);
    cout<<pair[0]<<" "<<pair[1];
}