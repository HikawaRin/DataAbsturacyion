//test.cpp
#include<iostream>
#include"Bubble.h"
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int a[]={10, 3, 45, 2, 19, 7};
	for(auto b: a)
		ivec.push_back(b);
	for(auto c: Bubble(ivec))
		cout<< c;
	return 0;
}
