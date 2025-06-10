#include<iostream>
#include<vector>
using namespace std;

int stock(vector<int>vec,int size)
{
int best_buy=vec[0];
int max_profit=0;
int maxie=0;

for(int i=1; i<size; i++)
{
    if(vec[i]>best_buy)
    {
        max_profit=max(max_profit,vec[i]-best_buy);
    }
    maxie=max(maxie,vec[i]);
    best_buy=min(best_buy,vec[i]);
}
cout<<"Best day to buy stock:"<<best_buy<<endl;
cout<<"Best sell day:"<<maxie<<endl;
return max_profit;
}



int main()
{
    vector<int>vec={7,1,5,3,6,4};
    int size=vec.size();
    cout<<"Max profit will be:"<<stock(vec,size);

}