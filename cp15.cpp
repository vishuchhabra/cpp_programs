//main objective of this to learn stl and try to implement it  into daily coding life.
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<iterator>
//#include<numeric> //for  accumulate operation
#include<numeric>
using namespace std;

  //for descending  order
    bool order(int x ,int y)
    {
        return (x>y);
    }

    bool check(int x)
    {
    return (x>0);
    }
  // for ascending  order

   bool order2(int x , int y)
   {
       return (x<y);
   }  

   bool any(int x)
   {
     return (x<0);
   
   }

int main()
{
     //sorting 
     int arr[] ={23,45,3,423,-23,3,55,23,1,34};
     int size  = sizeof(arr)/sizeof(arr[0]);
    //  sort(arr,arr+size);
    //  //sorting ascending order
    //  for(int i=0;i<size;i++)
    //  cout<<arr[i]<<endl;

    
     // sort(arr,arr+size);

     //sorting in descending order

    
    // sort(arr ,arr+size ,greater<int>());
    
    //sorting by  using decorator


    // sort(arr ,arr+size , order2);

    // for(int i= 0;i<size;i++)
    // cout<<arr[i]<<endl;

    //binary search
    // if(binary_search(arr ,arr+ size ,2332))
    //  cout<<"yes number  present"<<endl;
    //  else
    //  {
    //      cout<<"number is  not present"<<endl;
    //  }

    //to reverse the array

    // reverse(arr ,arr+size);
    // for(int i=0;i<size;i++)
    // cout<<arr[i]<<endl;
  

     // to find the maximum element of the array
     //cout<<*max_element(arr, arr+size )<<endl;


     //to find the minimum element of the array

     //cout<<*min_element(arr, arr+size)<<endl;

     //to find the sum of  all the array

     //cout<<accumulate(arr,arr+2,0)<<endl;//always take three variables
    //   cout<<accumulate(arr ,arr+size ,6)<<endl;

    //count is used to count the occurence of x in vector

    // cout<<count(arr, arr+ size ,23)<<endl;

    //find is used  to  find the address of the element in array as well as vector

    //  cout<<find(arr,arr+size,23 );

    // sort(arr,arr+size);


    //lower bound : return the index of number or return the  next higher number than which we are finding
    //return index of number whose lower bound we are finding

    // for(int i=0;i<size;i++)
    // cout<<arr[i]<<"  ";
    // cout<<endl;
    //  cout<<lower_bound(arr,arr+size ,25)-arr;

    //upperbound : return the  index of next higher number than number which we are finding
    

    // cout<<upper_bound(arr,arr+size ,3)-arr<<endl;
    

    //to find the index of the element we can use following method

   //  cout<<   find(arr, arr+size ,34)- arr<<endl;

    //delete specification in the array using following method


   //all of operator in c++
    // if(all_of(arr,arr+size,check))
    // cout<<"all are positive number"<<endl;
    // else
    // {
    //   cout<<"negative present"<<endl;
    // }

    //any_of operator  in c++

  // if(any_of(arr,arr+ size , any))
  // cout<<"negative number is present"<<endl;
  // else
  // {
  //   cout<<"all are positive number"<<endl;
  // }
  
   //none_of function in c++

  //  if(none_of(arr,arr+ size ,any))
  //  cout<<"all  nummber  are positive"<<endl;
  //  else
  //  {
  //    cout<<"negative is present"<<endl;
  //  }
   
   


    return 0;
} 