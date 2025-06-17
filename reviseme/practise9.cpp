//STOCK N SELL
#include<iostream>
#include<vector>
using namespace std;
int stocks(vector<int>vec,int size)

{
   
    int max_profit=0;
    int best_buy=vec[0];
    for(int i=1; i<size; i++)
    {
        if(vec[i]>best_buy)
        max_profit=max(max_profit,vec[i]-best_buy);
        best_buy=min(best_buy,vec[i]);
    }
return best_buy;


}

int main()
{
    vector<int>vec={7,0,5,3,6,4};
    int size=vec.size();
    cout<<stocks(vec,size);
    
}