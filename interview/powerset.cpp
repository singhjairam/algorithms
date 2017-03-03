#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i =0 ; i < 5 ; i++)
    {
        v.push_back(i+1);
    }
    
    int n = 5;
    int total = 1<<5;
    for(int i = 0 ; i < total; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if((i >> j ) & 1)
            {
                cout<<v[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}