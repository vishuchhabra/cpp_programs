//for finding the zero last of the factorial of the given number
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int fact(int n)
{
    int check =5,add=0;
    while(check<=n)
    {
        add =add+ (n/check);
        check = check*5;
    }
    return add;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}