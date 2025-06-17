//Pair sum
#include<iostream>
#include<vector>
using namespace std;


vector<int> pair_sum(vector<int>vec,int target)
{
    vector<int>result;
int i=0;
int j=vec.size()-1;
while(i<j)
{
    int ps=vec[i]+vec[j];
    if(ps>target)
    j--;
    else if(ps<target)
    i++;
    else{
    result.push_back(i);
    result.push_back(j);
    return result;
    }
    
}


}

int main()
{
vector<int>vec={1,2,3,4,5};
int target=9;
vector<int>sum=pair_sum(vec,target);
cout<<vec[sum[0]]<<"\t"<<vec[sum[1]];

}