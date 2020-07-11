#include<iostream>
#include<math.h>
using namespace std;
void print(int n)
{
	int arr[log2(n)+1];
	int pos=0;
    int rem =0;
    int temp;
    while(n)
    {
     temp = n%2;
     arr[pos]=temp;
     pos++;
    n/=2;
    }
    cout<<rem<<endl;
}
int main()
{

    int n;
    cin>>n;
    print(n);
    return 0;
}
