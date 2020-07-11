#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;
    int like=2;
    int share=6;
    int lik;
    for (int i=2;i<=day;i++)
    {
        lik=share/2;
        like=like+lik;
        share=like*3;




    }
    cout<<like;
}
