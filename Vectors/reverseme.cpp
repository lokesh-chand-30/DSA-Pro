#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void reverse(vector<int>& vec)
{
    int size=vec.size();
    int start=0;
    int end=size-1;
while(start<end)
{
     swap(vec[start],vec[end]);
        start++;
        end--;
}

}


int main()
{
    vector<int>vec={1,2,3,4};
     reverse(vec);
    for(int i=0; i<4; i++)
    {
cout<<vec[i]<<endl;
    }

}