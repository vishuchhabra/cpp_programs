
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
using namespace std;
COORD coord = {0,0};
void gotoxy(int x, int y)
{
    coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void print(int ar[3][3])
{
     for(int i = 0 ; i <3 ; i++)
    {

        for(int j = 0 ; j<3 ; j++)
        {    if(ar[i][j]==2)
            cout<<"- ";
            else if(ar[i][j]==3)
            cout<<"0 ";
            else if(ar[i][j]==5)
            cout<<"X ";
        }
            cout<<"\n";
    }
}

int main()
{     int a[3][3] = {2,2,2,2,2,2,2,2,2};
    int k,row,column,c,m;
  first:   c = 0 ;
     m = 0 ;
   cout<<"Player 1 Choose a number from 0 - 8 for the given blocks - ";
   cin>>k;
   if(k<0 || k>8)
   {
      cout<<"Invalid Input . Give the correct input \n";
       goto first;
   }
   row = k/3;
   column = k%3;
   if(a[row][column] !=2)
   {
       cout<<"Invalid Input . Give the correct input \n";
       goto first;
   }
   a[row][column] = 3;
    print(a);
   for(int i = 0; i<3;i++)
   {
       c = c + a[row][i];
   }
   if(c==9)
   {
    cout<<"PLAYER 1 wins";
    exit(0);
   }


    for(int j = 0; j<3;j++)
   {
       m = m + a[j][column];
   }
   if(m==9)
   {
    cout<<"PLAYER 1 wins";
    exit(0);
   }

    if((row+column)%2 == 0)
    {
       if((a[0][0]+a[1][1]+a[2][2])==9)
       {
           cout<<"Player 1 wins";
           exit(0);
       }
        if((a[0][2]+a[1][1]+a[2][0])==9)
        {

            cout<<"Player 1 wins";
            exit(0);
        }
    }

    for(int i = 0 ; i <3 ; i++)
    {

        for(int j = 0 ; j<3 ; j++)
        {

            if(a[i][j] == 2)
            {

                goto second;
            }
            }
    }

    cout<<"NO one wins";
    exit(0);

second:
     c = 0 ;
     m = 0 ;
     cout<<"Player 2 Choose a number from 0 - 8 for the given blocks - ";
   cin>>k;
    if(k<0 || k>8)
   {
      cout<<"Invalid Input . Give the correct input \n";
       goto second;
   }
   row = k/3;
   column = k%3;
   if(a[row][column] !=2)
   {
       cout<<"Invalid Input . Give the correct input \n";
       goto second;
   }
   a[row][column] = 5;
    print(a);

   for(int i = 0; i<3;i++)
   {
       c = c + a[row][i];
   }
   if(c==15)
   {
    cout<<"PLAYER 1 wins";
    exit(0);
   }


    for(int j = 0; j<3;j++)
   {
       m = m + a[j][column];
   }
  if(m==15)
   {
    cout<<"PLAYER 1 wins";
    exit(0);
   }

    if((row+column)%2 == 0)
    {
       if((a[0][0]+a[1][1]+a[2][2])==15)
       {
           cout<<"Player 2 wins";
           exit(0);
       }
        if((a[0][2]+a[1][1]+a[2][0])==15)
        {

            cout<<"Player 2 wins";
            exit(0);
        }
    }

  for(int i = 0 ; i <3 ; i++)
    {

        for(int j = 0 ; j<3 ; j++)
        {

            if(a[i][j] == 2)
            {

                goto first;
            }

        }
    }

   cout<<"NO one wins";
   exit(0);


   return 0;
}
