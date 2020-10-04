#include <cs50.h>
#include <stdio.h>

int main(void)
{


    // variables
    int height;
    int space;
    int hash;

    //prompt the user for the half-pyramid’s height
    do
    {
        printf("Choose a number from 0 to 23: ");
        height = get_int();
    }

    while (height <= 0 || height >= 23);

//loop to build pyramid -- i equals row

    for (int i = 0; i <= height; i++)
    {

             // For loop to print out the spaces
        for (space = (height - i); space > 0; space--)
        {
            printf(" ");
        }


             // For loop to print out the hash
        for (hash = 0; hash < (i + 1); hash++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;

}