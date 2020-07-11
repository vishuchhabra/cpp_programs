#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin>>cases;
	while(cases)
	{
		int m;
		cin>>m;
		int arr1[m];
		for(int i=0;i<m;i++)
		cin>>arr1[i];
		int n;
		cin>>n;
		int arr2[n];
		for(int i=0;i<n;i++)
		cin>>arr2[i];
		
		int diff= INT_MAX;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				int set = abs(arr1[i]-arr2[j]);
				if(set<diff)
				diff = set;
			}
		}
		cout<<diff<<endl;
		cases--;
	}
	return 0;
}