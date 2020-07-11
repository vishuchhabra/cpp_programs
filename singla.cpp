//prime number bases
#include <iostream>
using namespace std;
int is_prime(int m)
{
	if(m ==2)
	return 1;
	else
	for(int i=2;i*i<=m;i++)
	{
		if(m%i==0)
		return 0;
		
	}
	return 1;
}

int main() {
	// your code goes here
	int n,p,q;//cases
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p>>q;
		for(int j=p;j<=q;j++ )
		{
			if(j<2)
            {
                continue;

            }
			else
			{
				if(is_prime(j))
				cout<<j<<endl;
			}
			
		}
        cout<<endl;
	}
	return 0;
}