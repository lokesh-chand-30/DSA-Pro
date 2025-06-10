#include<iostream>
#include<vector>
using namespace std;

int maximum(vector<int>vec,int size)
{
    int max_water=0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            int width=j-i;
            int height=min(vec[i],vec[j]);
            int area=width*height;
            max_water=max(max_water,area);
        }
    }
return max_water;
}

int main()
{
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    int size=vec.size();
    cout<<"Max size of water container is:"<<maximum(vec,size)<<" "<<"sq units";

}