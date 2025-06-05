#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<char> vec={'a','b','c'};
cout<<"Before push back"<<endl;

for(char i:vec)
{
    cout<<i<<endl;

}

vec.size();
cout<<vec.size()<<endl;
vec.push_back('d');
cout<<"After push back"<<endl;
for(char i:vec)
{
    cout<<i<<endl;

}
cout<<"Capacity:"<<vec.capacity()<<endl;
vec.pop_back();
cout<<"After pop back"<<endl;
for(char i:vec)
{
    cout<<i<<endl;

}
cout<<"\n";
cout<<vec.front()<<endl;
cout<<"\n\n";
cout<<vec[2]<<endl;
cout<<vec.at(2);

}