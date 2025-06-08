#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int>vec,int size)
{
    sort(vec.begin(),vec.end());
int freq=1,ans=vec[0];
for(int i=1; i<size; i++)
{
    if(vec[i]==vec[i-1])
    {
        freq++;

    }
    else{
        freq=1;
        ans=vec[i];
    }
if(freq>size/2)
{
    return ans;
}
return ans;
}
}

int main()
{
    vector<int>vec={1,2,1,1,2};
    int size=5;
    cout<<"Majority element:"<<majority(vec,size);
}