//test1.cpp
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int a[]={10, 3, 2, 45, 7, 19};
	int k;
	for(auto e: a)
		ivec.push_back(e);
	for(auto &e: ivec)
	{
		for(auto &i: ivec)
		{
			if(i>e)
			{
				k=i;
				i=e;
				e=k;
			};
		};
	};	
	for(auto d: ivec)
		cout<< d<< " ";
	return 0;
}
