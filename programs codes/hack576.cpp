#include<iostream>
using namespace std;
int main()
{

    int i,j,k;
    cin>>i>>j>>k;
    int rev=0;
    int rem,q,cont=0;
    int y;
    for(int m=i;m<=j;m++)
    {
        y=m;
    while(y!=0)
    {


        rem=y%10;

        rev=(rev*10)+rem;
        }
        if((y-rev)%k==0)
        cont++;
        y=y/10;

    }
    cout<<cont;
}


