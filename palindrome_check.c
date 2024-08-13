#include <stdio.h>
#define N 30

int c = N,counter=0;
int ch_int;

char string[N];
char *check_ptr = string;
char ch;
char *ptr = string;

int main(){
    printf("Enter a message: ");

    while ((ch = getchar()) != '\n' && c<N-1) {

        ch_int=ch;
printf("\nch: %c",ch);
printf("\nchint: %d",ch_int);


        if(ch_int>64 && ch_int <91 ){
// printf("\nch: %c",ch);
        *ptr++ = ch;
counter++;
printf("\ncounter: %d",counter);


        }else if ( ch_int>96 && ch_int<123) {
        *ptr++ = ch;
// printf("\nch: %c",ch);
counter++;
printf("\ncounter: %d",counter);
        }else{

        }

        ch = getchar();
        c++;
    
    }
    *ptr = '\0';

    char *end_ptr = ptr -1;

    // int size_string = sizeof(end_ptr)/2;
    // printf("%d",size_string);

    while (counter>0) {

// printf("\nend_ptr: %c",*end_ptr);
// printf("\ncheck_ptr: %c",*check_ptr);

        if(*end_ptr != *check_ptr){
            
        printf("Not palindrome");
        break;
        }
        end_ptr--;
        check_ptr++;

        counter--;
    
    }


    if(counter==0){
        printf("palindrome");
    }

    








}