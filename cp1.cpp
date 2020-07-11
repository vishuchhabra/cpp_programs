//reverse the  bits of number
#include<iostream> 
//#include<algorithm>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int main() 
{
    int m;//scan number
    cin>>m;
    int add=0;
    int length = ((int)log2(m))+1;
    for(int i=0;i<length;i++)
    {
        int h = m & 1;
        m=m>>1;
        add=add<<1;
        add =add | h;
        
        
    }
    cout<<add<<endl;;
    return 0;
     

}