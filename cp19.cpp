#include<iostream>
using namespace std;
void try_arr(int arr[])
{
    arr[0]=56;

}


int main()
{
    int arr[]= {234,545,56,456,4};
    try_arr(arr);
    cout<<arr[0]<<endl;
    return 0;
}