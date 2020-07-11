#include<iostream>
using namespace std;

int main()
{

    int a[] = {1,2,3,4,6,7,85,8,9};
    int max = a[0];
    for(int i=1;i<9;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    cout<<max;
    return 0;

}
