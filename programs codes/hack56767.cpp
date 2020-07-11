#include<iostream>
using namespace std;
int main()
{

    int i,j,k;
    cin>>i>>j>>k;
    int rev=0,rem=0,p,q;
    int sum=0;
    int count=0;
    for(int m=i;m<=j;m++)
    {
        p=m;
        while(p!=0)
        {

            rem=p%10;
            rev=(rev*10)+rem;
            p=p/10;
        }
        q=m;
        sum=q-rev;
        if(sum<0)
            sum=-sum;
        if(sum%k==0)
            count++;
        rem=0;
        rev=0;

    }
    cout<<count;
}
