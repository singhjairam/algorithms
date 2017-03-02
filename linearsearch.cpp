#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&v, int element)
{
	for(int i = 0 ; i < v.size() ; i++)
	{
		if(v[i] == element)
		{
			return i;
		}
	}

	return -1;
}

int main(int argc, char const *argv[])
{
	
	vector<int> v;
	for(int i = 0 ; i < 10 ; i++)
	{
		v.push_back(i);
	}

	int result = linearSearch(v , 15);
	cout<<result<<endl;
	return 0;
}