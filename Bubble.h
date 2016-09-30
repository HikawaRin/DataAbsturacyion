//Bubble.h
#ifndef Bubble
#define Bubble
#include<vector>
#include<iostream>
using namespace std;

vector<int>::iterator Bubble(template<int> vector)
{
	int a;
	for(auto &d:vector)
	{        for(auto &e:vector)
		{
			if(d>e)
			{
				a=e;
				e=d;
				d=a;
			};
		}
	};
	return vector;
}
#endif
