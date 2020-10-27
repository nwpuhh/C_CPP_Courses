/**
 *  An example program showing how to use variables of char types, and the IO operation of these variables
 *  Author: Hao Hu
 *  Date: 2020-10-27
 **/
#include <stdio.h>

int main()
{
    char ch;            /* char is a special type of character of 1Byte, in C, normally the machine uses ASCII to relate character with an int number. 
                         * Sometimes, we use Unicode for some letters with accent and Chinese. Check the ASCII table to know more details. */
    int i, len = 0;

    i = 'a';            /* i is now 97 */
    ch = 65;            /* ch is now 'A' */
    ch = ch + 1;        /* ch is now 'B' */

    putchar(i);         /* putchar() will not have a '\n' indicating a new line */
    putchar(ch);

    /* We have to different ways to realise the IO of a character */
    /* Method 1: using %c + scanf/printf */
    scanf("%c", & ch);      /* read a single character */
    printf("%c\n", ch);     /* write a single character in console */

    /* Problem: How to avoid the space? */
    scanf(" %c", & ch);     /* skips white spaces, then read ch */
    printf("%c\n", ch);

    /* Method 2: (recommanded) using getchar() and putchar() => save time in compiler */
    ch = getchar();         /* special function for reading a character, attetion, it will not skip space! */
    putchar(ch);            /* write a single character in console */

    /* Using getchar() to skip all spaces */
    while((ch = getchar()) == ' ' && ch != '\n')
        ;                   /* After the loop ends, the ch is the first character that is not a space */
    putchar(ch);

    /* An application: Count the length of a message. Attetion to the '\n' */
    printf("\nEnter a message: ");
    getchar();                 /* we need one getchar() to get the '\n' we use in console*/
    while(getchar() != '\n')   /* If the character entered is not '\n', it indicates the message does not end */
        len++;
    printf("The length of message is %d\n", len);

    return 0;
}   