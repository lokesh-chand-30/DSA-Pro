#include<iostream>
#include<vector>
#include<algorithm> // required for reverse()
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};

    // STL way to reverse the vector
    reverse(vec.begin(), vec.end());

    for(int i : vec)
        cout << i << " ";
}
