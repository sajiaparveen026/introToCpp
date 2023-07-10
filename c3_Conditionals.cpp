#include <iostream>
using namespace std;

int main()
{

    // Conditionals 
// 1. If
// if (condition)
// {

// }

// Number is greater than 10 
// int n = 59;
// if(n>10)
// {
//     cout<<"Greater than 10"<<endl;
// }
// 2. If else
// if (condition)
// {

// }
// else
// {

// }
// int n = 80;
// if(((n>10)&&(n<=80)) )
// {
//     cout<<"Greater than 10"<<endl;
// }
// else
// {
//     cout<<"Not Greater than 10"<<endl;
// }

//3. if else if

// if()
// {

// }
// else if()
// {

// }
// else{

// }

// if the number is +ve , -ve or zero
// int n;
// cout<<"enter the number "<<endl;
// cin>>n;
// if (n>0)
// {
//  cout<<"its positive"<<endl;
// }
// else if(n<0)
// {
//   cout<<"its negative"<<endl;
// }
// else
// {
//     cout<<"number is zero"<<endl;
// }

// Q. Take a input from user and check if it is even or odd
// int n;
// cout<<"enter the number "<<endl;
// cin>>n;
// if (n%3==0)
// {
//     cout<<"its even"<< endl;

// }
// else
// {
//     cout<<"its odd"<< endl;
// }

// how would you check a person is eligible to vote or not ?
// int age;
// cout<<"enter the age :";
// cin>> age;
// if (age>=18)
// {
//   cout<<"its eligible"<<endl;
// }
// else{

//     cout<<"its not eligible"<<endl;
// }

// which is Greater
// int x, y, z;
// cin>>x>>y>>z;
// if((x>y)&&(x>z))
// {
//     cout<<"X is greater "<<endl;
// }
// else if (y>z)
// {
//     cout<<"Y is greater "<<endl;
// }
// else{
//     cout<<"Z is greater "<<endl;
// }

// check whether the alphabet is vowel or consonent
// char ch;
// cin>>ch;
// if ((ch=='a')||(ch=='i') ||(ch=='o') ||(ch=='u')|| (ch=='e')||(ch=='A')||(ch=='E') ||(ch=='I') ||(ch=='O')|| (ch=='U'))
// {
//  cout<<"Vowel"<<endl;
// }
// else
// {
//  cout<<"Consonent"<<endl;   
// }


// int n;
// cout<<"Enter the number "<<endl;
// cin>>n;
/*
Above 80 - A
60 - 80 - B
50 - 60 - c
less 50 - D
*/
// if (n>80)
// {
//  cout<<"grade A "<<endl;
// }
// else if((n>60)&&(n<=80))
// {
//   cout<<"grade B "<<endl;
// }
// else if ((n>50)&&(n<=60))
// {
//   cout<<"grade C "<<endl;
// }
// else
// {
//     cout<<"grade D "<<endl;
// }

//4. Switch Statement

// int n ;
//  cin>>n;

// switch(n)
// {
//   case 1 : cout<<"No is 1"<<endl; break;
//   case 2 : cout<<"No is 2"<<endl; break;
//   case 3 : cout<<"No is 3"<<endl; break;
//   case 4 : cout<<"No is 4"<<endl; break;
//   case 5 : cout<<"No is 5"<<endl; break;
//   default : cout<<"Not valid" ;
// } 
char th;
cin>>th;
switch (th)
{
  case 'A' : cout<<"above 80"<<endl; break;
  case 'B' : cout<<"between 60 to 80"<<endl; break;
  case 'C' : cout<<"between 50 to 60"<<endl; break;
  case 'D' : cout<<"less than 50"<<endl; break;
 default: cout<<"not valid"<<endl; 
}



    return 0;
}