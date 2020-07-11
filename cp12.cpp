#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int i=10;
    int *p =&i;
    int *q =p;
    // cout<<sizeof(i)<<endl<<sizeof(*p)<<endl<<sizeof(*q)<<endl;
    cout<<*q<<endl;
    return 0;

}