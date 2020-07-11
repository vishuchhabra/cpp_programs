// //best experiment on array till now  
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5][6]={0};
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<6;j++)
//         cout<<arr[i][j]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }


//best experiment on the iteraotrs 

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> x={23,45,34,5354,345,54};
    vector <int> :: iterator p;
    for(p=x.begin();p!=x.end();p++)
    cout<<*p<<" ";
    return 0;
}