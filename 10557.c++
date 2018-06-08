#include "function.h"

#include <stdio.h>
#include <stdlib.h>
using namespace std;
Rational::Rational(int i, int j)
{


   if((i<0&&j>=0)||(i>=0&&j<0))
   {
       i=-abs(i);
       j=abs(j);
   }
   else
   {
       i=abs(i);
       j=abs(j);
   }

    numerator = i;

    denominator = j;
    if(i!=0)
        reduce();


}

/*


}*/
Rational Rational::addition(const Rational & a)const
{
    int i;
    Rational sol;

    sol.denominator = denominator*a.denominator;
    sol.numerator = numerator*a.denominator+a.numerator*denominator;
  if(sol.numerator==0)
  {
      sol.denominator=1;
  }
   else
   sol.reduce();

            return sol;

}

void Rational::printRational() const
{
    int i;


        printf("%d/%d",numerator,denominator);



}

/*

//  ---------
*/
Rational Rational::subtraction(const Rational & a)const
{
    int i;
    Rational sol;

    sol.denominator = denominator*a.denominator;
    sol.numerator = numerator*a.denominator-a.numerator*denominator;


        if(sol.numerator==0)
            {
                sol.denominator=1;
                return sol;
            }

   sol.reduce();



            return sol;

}

Rational Rational::multiplication(const Rational & a)const
{
    int i;
    Rational sol;


        sol.denominator = denominator*a.denominator;


    sol.numerator = numerator*a.numerator;

if(sol.numerator!=0)
    sol.reduce();




if(sol.numerator==0)
            {
                sol.denominator=1;
                return sol;
            }

            return sol;

}

Rational Rational::division(const Rational & a)const
{
    int i;
    Rational sol;

    if(numerator==0)
    {
       sol.numerator=0 ;
       sol.denominator=1;

       return 0;
    }


        sol.numerator = numerator*a.denominator;


    sol.denominator = denominator*a.numerator;

   sol.reduce();

   if(sol.numerator*sol.denominator<0)
   {
       sol.numerator=-abs(sol.numerator);
       sol.denominator=abs(sol.denominator);
   }



            return sol;

}

void Rational::reduce()
{

    int i , j , gcd=0;


    i=abs(numerator);
    j=abs(denominator);




    while(gcd==0)
    {

    if(i>=j)
    {

        i=i%j;
        if(i==0)
            gcd=j;
    }
    else
    {
        j=j%i;
        if(j==0)
            gcd=i;
    }



    }

    numerator=numerator/gcd;
    denominator=denominator/gcd;




}

/*192.168.136.1*//*CSY103062316*/
