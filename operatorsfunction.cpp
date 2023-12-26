/*
 Operators of Function 
---math function 
---Pow الاوس 
---fmod
----ceil
---floor
---round 
---trunc
*/
/*
Function 
--Build in function
---cctype
----------tolower()
    ----- toupper()
----------isupper()
----------islower()
---------isspace()

create 2 Applications 
-----swap case App **
-----remove spaces App**
*/
#include<iostream>
#include<array>
#include<string.h>
#include<cmath>
#include<cctype>
using namespace std;

int main()
{

 cout<<pow(2 , 4)<<endl; //2^4 ==16
cout <<11 % 2  <<endl; // 1 
//cout <<11.5 % 2  <<endl; // error
cout << fmod(11.5 , 2 ) <<endl; // 1 

cout<<ceil(9.1)<<endl;  //up 
cout<<floor(9.1)<<endl; //down

cout<<round ( 9.5)<<endl;//==> as ceil _down if the number up or equal the half ||
cout<<round ( 9.2)<<endl; //==> as floor _down if the number down the half ||
cout<<round ( 9.49)<<endl; // don't == .5 so will be down ***
cout<< trunc( 9.2)<<endl; // 9
cout<< trunc( 9.5)<<endl; // remove the {dot and after}  // 9 
cout<<trunc ( 9.9)<<endl;  // 9 

cout<<"\n=========================================\n";
cout <<'A'<<endl;
cout<<tolower('A')<<endl; // ASCII value 
cout<< char(tolower('A'))<<endl; //  the char is capi and convert to ==>small character
cout<< char('A')<<endl; // capi character

cout <<'b'<<endl;
cout<<toupper('b')<<endl; // ASCII value 
cout<< char(toupper('b'))<<endl; //  the char is small and convert to ==>capi character
cout<< char('b')<<endl; // capi character
cout<< int('b')<<endl; // small character

/*****************************************************************--*-*-*-*-*/
cout<<"\n=========================================\n";

string name = "SLash";
int sizename = size(name);
for ( int i = 0 ; i < sizename ; i++)
{
if ( isupper ( /*will understand you want AscII value*/name[i]) ) // if acheved ==>  charcters capital 
{
    cout<< tolower(name[i])<<endl; // if char is capital in word 
    cout<<  char(tolower(name[i]))<<endl; // the character capital will convert it to small by ASCII value
}
else 
{
    cout <<char(toupper(name[i]))<<endl;
}
 
/* the word is converted to ===> slAsh *****
*/



/*cout<<name[i]<<endl;
cout<<int(name[i])<<endl;*/





}
























    return 0; 
}