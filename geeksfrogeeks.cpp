#include<iostream>
using namespace std;
int prime(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if((n%i)==0)
            return 0;
        }
        return 1;
    }
}
int no_bits(int n)
{
    int count=0;
    while(n)
    {
        if(n%2)
        count++;
        n/=2;

    }
    if(prime(count))
    return 1;
    return 0;
}
int main()
 {
	//coden
	int cases;
	cin>>cases;
for(int i=0;i<cases;i++)
	{
	    int m,n;
	    int count=0;
	    cin>>m>>n;
	    for(int i=m;i<=n;i++)
	    {
	        if(no_bits(i))
	        count++;

	    }
	    cout<<count<<endl;
	    count =0;

	}

	return 0;
}
