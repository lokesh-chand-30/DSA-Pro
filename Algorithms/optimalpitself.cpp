#include<iostream>
#include<vector>
using namespace std;

vector<int> productexceptitself(vector<int>vec, int n)
{
    vector<int> ans(n,1);
    for(int i=1; i<n; i++)
{
    ans[i]=ans[i-1]*vec[i-1];

}
int suffix=1;
for(int i=n-2; i>=0; i--)
{
    suffix*=vec[i+1];
    ans[i]*=suffix;
}
return ans;

}

int main()
{
    vector<int>vec={1,2,3,4};
    int n=vec.size();
     vector<int> result = productexceptitself(vec, n);

    for (int val : result)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}