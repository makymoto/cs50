/**
* vigenere.c
*
* Yuri Zamsha
* yra.zamsha@gmail.com
* 
* pset2 Parlez-vous français?
* 
* 
*/
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int getK(int lettersCiphered, string k);
 
int main(int argc, string argv[])
{	
    // Stop if arguments wrong
    if (argc != 2)
    {
        printf("Wrong\n");
        return 1;
    }
 
    // Get key value
    string k = argv[1];
    //Get length of a string
    int l = strlen(k);

    for (int i = 0; i < l; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Wrong\n");
            return 1;
        }
    }
 
    // Get the text 
    string s = GetString();
 
    // Used for finding corresponding k value 
    int lettersCiphered = 0;
     l = strlen(s);
    // Array processing cycle
    for (int i = 0; i < l; i++)
    {
        char c = s[i];
 
        // Changes arguments of array 
        if (isupper(c))
        {
            char newC = (((c - 65) + getK(lettersCiphered,k)) % 26) + 65;
            printf("%c", newC);
            lettersCiphered++;
        }
        else if(islower(c))
        {
            char newC = (((c - 97) + getK(lettersCiphered,k)) % 26) + 97;
            printf("%c", newC);
            lettersCiphered++;
        }
        else
        {
            printf("%c", c);
        }
    }
 
    printf("\n");
 
    return 0;
}
 
/**
* Method to get corresponding letter of k
*/
int getK(int lettersCiphered, string k)
{
    int length = strlen(k);
    return tolower(k[lettersCiphered % length]) - 97;
}