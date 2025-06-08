#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>vec, int size)
{
    
    for(int i=0; i<size; i++)
    {
        int count=0;
        for(int j=0; j<size; j++)
        {
            if(vec[i]==vec[j])
            count++;
        }
if(count>size/2)
return vec[i];

    }
}

int main()
{
    vector<int> vec={1,1,1,2,2};
    int size=5;
    cout<<"Majority element is:"<<majority(vec,size);
}