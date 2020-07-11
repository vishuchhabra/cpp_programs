#include<iostream>
using namespace std;
void print(int n)
{

    int m=1;
    int sum =0;
    while(n)
    {

        int temp = n%2;
        sum = sum + (m*temp);
        n/=2;
        m*=10;
    }
    cout<<sum<<endl;
}
int main()

{

    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Binary:";
    print(n);
    return 0;
}
