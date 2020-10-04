#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{



    // variables
    float n;
    int count = 0;
    int cash;



    // prompt user for amount owed

     do
    {
        printf("How much change is owed?\n");
        n = get_float();
    }

    while (n <= 0);

    //convert input to change

    n = n*100;
    cash = round(n);


     //get quarters

    while (cash >= 25)

    {
        //increase count
        count++;
        //decrease amount by a quarter
        cash = cash - 25;
    }






    //get dimes

    while (cash >= 10)

    {
       //increase count
        count++;
        //decrease amount by a dime
        cash = cash - 10;
    }





    //get nickels

    while (cash >= 5)


    {
        //increase count
        count++;
        //decrease amount by a nickel
        cash = cash - 5;
    }






    //get pennys

    while (cash >= 1)

    {
        //increase count
        count++;
        //decrease amount by a penny
        cash = cash - 1;
    }


    //print number of coins
    printf("%d\n", count);




}