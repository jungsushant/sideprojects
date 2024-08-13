#include <stdio.h>

#define N 20



int main(){


    char chill_string[N];
    char *letter = chill_string;
    char ch;
    int n = 0;

    printf("Enter a string: ");
    ch = getchar();
    while (ch != '\n' && n<N-1)
    {
        *letter++ = ch;
        ch= getchar();
        n++;
        }

    *letter = '\0';
    // printf("%c",*letter);

    char *rev_letter = letter-1;
        // printf("%c",*rev_letter--);


    while (rev_letter >= chill_string)
    {
        printf("%c",*rev_letter--);
    }
    


    
}