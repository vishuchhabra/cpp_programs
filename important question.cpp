#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int check(vector<int>y, int k,int n)
{
    for(int i=0;i<n;i++)
    {
        vector <int>h;
        for(int j=0;j<y.size();j++)
        {
            if(y[j])
            {

                h.push_back(1);
                h.push_back(0);
            }
            else
            {

                h.push_back(0);
                h.push_back(1);
            }

        }
        y=h;
    }

    return y[k];
}
void getvector(int m,int k,int n)
{
    vector<int> y;
    while(m)
    {
        int temp= m%2;
        y.insert(y.begin(),temp);
        m/=2;
    }
    cout<<check(y,k,n)<<endl;;
}
int main()
 {
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
	int m,k,n;
    cin>>m>>k>>n;

    getvector(m,k,n);
    }
    return 0;
}
