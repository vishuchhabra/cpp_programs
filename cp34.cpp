#include<iostream>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	int sum=INT_MIN;
	int t=0;
	string  str;
	for(int i=0;i<cases;i++)
	{
	    cin>>str;
	    for(int j=0;j<str.length();j++)
	    {
	        if(((int)str[j]-48)>=0 && ((int)str[j]-48)<=9)
	        {
	            t= ((int)str[j]-48);
	            while(((int)str[j+1]-48)>=0 && ((int)str[j+1]-48)<=9)
	            {
	                t=((t*10)+ ((int)str[j+1]-48));
	                j++;
	            }
	        }

	        if(t>sum)
	        sum =t;
	    }
	    cout<<sum<<endl;



	}
	return 0;
}
