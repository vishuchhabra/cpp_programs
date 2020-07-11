#include<iostream>
using namespace std;
void toh(int n,string b,string d,string h)
{

    if(n>=1)
    {

        toh(n-1,b,h,d);
        cout<<"move  "<<n<<" disk from  "<<b<<" to "<<d<<endl;
        toh(n-1,h,d,b);

    }
}
int main()
{
    int n;
    cin>>n;
    toh(n,"SOURCE","DESTINATION ","HELPER");
    return 0;


}
