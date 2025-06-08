#include<iostream>
#include<vector>
using namespace std;

vector<int> check_pair(vector<int> vec,int target)
{
    vector<int>ans;
    int n=vec.size();
    int i=0;
    int j=n-1;
    int PS;
while(i<j){
PS=vec[i]+vec[j];
if(PS>target)
{
    j--;
}
else if(PS<target)
{
    i++;
}
else{
    ans.push_back(i);
    ans.push_back(j);
    break;
}
}
return ans;
}
int main()
{
    vector<int> vec={2,7,11,15};
    int target=26;
    vector<int>pair=check_pair( vec, target);
    cout<<pair[0]<<" "<<pair[1];
}