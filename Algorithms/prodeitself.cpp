#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptMe(vector<int> vec, int size)
{
    vector<int> ans(size, 1);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                ans[i] *= vec[j];
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    int size = vec.size();

    vector<int> result = productExceptMe(vec, size);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
