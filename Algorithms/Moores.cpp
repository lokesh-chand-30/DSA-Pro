#include<iostream>
#include<vector>
using namespace std;

int moores(vector<int>vec,int size)
{
    int freq=0, ans=0;
for(int i=0; i<size; i++)
{
    if(freq==0)
    {
    ans=vec[i];
    }
    if(ans==vec[i]){
    freq++;
    }else{
    freq--;
    }
}
return ans;
}

int main()
{
    vector<int> vec={2,2,2,1,1};
int size=5;
cout<<"Majority: "<<moores(vec,size);
}
