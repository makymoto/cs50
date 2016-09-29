/**
* caesar.c
* 
* Yuri Zamsha
* yra.zamsha@gmail.com
* 
* pset2 Hail, Caesar!
* 
*/
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{	
    // Stop if user did not enter key
    if (argc != 2)
    {
        printf("Enter key pls\n");
        return 1;
    }
 
    // Get kay value
    int k = atoi(argv[1]);
 
    // Get the text
    string s = GetString();
    //Get length of a string
    int length = strlen(s);
 
    // Array processing cycle
    for (int i = 0; i < length; i++)
    {
        char c = s[i];
 
        // Changes arguments of array 
        if (isupper(c))
        {
            char S = (((c - 65) + k) % 26) + 65;
            printf("%c", S);
        }
        else if(islower(c))
        {
            char S = (((c - 97) + k) % 26) + 97;
            printf("%c", S);
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
 
 
}