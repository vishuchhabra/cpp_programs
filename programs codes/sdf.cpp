



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int u;
    cin>>u;
    int t[u];
    int p,s;
    for(p=0;p<u;p++)
    {
    cin>>t[p];
    }
    for( s=u-1;s>=0;--s)
    {
        cout<<t[s]<<" ";
    }
    return 0;
}

