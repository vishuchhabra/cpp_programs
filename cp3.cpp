//even odd bits exchange
#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int odd_even(int n)
{
    int even_bits = n & 0xAAAAAAAA;
    int odd_bits = n  & 0x55555555;
    even_bits =even_bits>>1;
    odd_bits =odd_bits<<1;
    return (even_bits | odd_bits);
}
int main()
{
    int n;//scan number
    cin>>n;
    cout<<odd_even(n)<<endl;
    return 0;
}
