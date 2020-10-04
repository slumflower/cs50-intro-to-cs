//Caesar Cipher technique is simply a type of substitution cipher, i.e., each letter of a given text
//is replaced by a letter some fixed number of positions down the alphabet.
//For example with a shift of 1, A would be replaced by B, B would become C, and so on.


#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


//c=(p+k)mod26
//c=cipher
//p=plaintext
//k = non-negative integer
//mod26 = "remainder when dividing by 26.



int main(int argc, string argv[])
{

if (argc != 2)
{
    printf("Error\n");
    return 1;
}
//prompt user for a key, or non-negative integer

int k = atoi(argv[1]);      //atoi = convert string into integer //(int) taking the character and making it an integer

//prompt user for the plaintext, or a string of text
printf ("plaintext: ");
string p = get_string();


//encrypt
printf ("ciphertext: ");

//for each character in the plaintext string
for (int i = 0, n = strlen(p); i < n;  i++)     //strlen = string length
    {
    //if alphabetic, preserve case
    if (isalpha(p[i]))
        {
            //shift plaintext character by key, make sure cipher is same if upper or lowercase
             if (islower(p[i]))
                {
                    p[i] = (((p[i] - 97) + k) % 26) + 97;     //"Assume that p == "a". So, p[i] will be 'a' on the first iteration." - Irene FB
                    printf("%c", (p[i]));                     // 'a' = 0; z = '25'; "%26 is because we assume a value between 0 and 25"
                }

                else if (isupper(p[i]))
                {
                    p[i] = (((p[i] - 65) + k) % 26) + 65;
                    printf("%c", (p[i]));
                }
        }
    else
    {
        printf("%c", (p[i]));
    }
    //print ciphertext
    }
printf("\n");
}


