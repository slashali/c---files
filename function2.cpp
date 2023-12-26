#include<iostream>
#include<array>
#include<string.h>

using namespace std;

/*
function
        Parameter Dafualt Value

*/
void Daufalt ( string name =" ALi " , string age =" 19 ")
{
    cout <<"Hi"<<name << "\n your age Is : "<<age<<endl;
}

void Dafault_2( string name , string Age ="19 "  ) // no problem 

{
        cout <<"Hi"<<name << "\n your age Is : "<<Age<<endl;

}

/*void Dafault_3(tring name = "SLash " ,string Age  ) // there is problem 
{
            cout <<"Hi"<<name << "\n your age Is : "<<Age<<endl;
}
/*
Function 
    Passing Array As parameter*------*-*--*-* 

*/
/*****************************************************************************************/

void Calc ( int Nums[], int Count)
{
    int result = 0; 
for(  int i=0; i < Count ; i++ )
{
result += Nums[i] ;
    }
cout<<" The resulet  Is : "<< result<<endl;
for(  int i=3; i > Count ; i-- )
{
result /= Nums[i] ;
}
cout<<" After Division The Result Is : "<< result<<endl;
 }
/*******************************************************************************/
/*
function 
--- Forward Declaration -*-*-*-*-*-*-*-*-*-*-*
*/
int Calc_2 ( int a , int b  )
{
    return a + b ;
}


; // foward define


int main()
{
    cout<<Calc_2(10 , 20)<<endl; ;



Daufalt();

Dafault_2( "ali");
// Dafault_3( " 19 "); error *********** 
/**********************************************************************/
cout<<"\n==============================================\n";

int arrayofnumbers[]= {10 , 20 , 30 , 40 , 50 , 100 };
int Countofarray = size(arrayofnumbers);
//Calc({ 10 , 20 , 2000 }, 4); //error
Calc (arrayofnumbers , Countofarray );
/**********************************************************/
cout<<"\n==============================================b\n";
return 0;
}

























