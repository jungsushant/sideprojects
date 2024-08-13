#include <stdio.h>


int temperatures[7][24];

int main(){

int *p=&temperatures[0][0];
int n = 0, j= 0;
while(n<7*2){
    printf("Enter any number");
    scanf("%d",p+n);
    n++;
}
while(j<7*2){
    if (*(p+j)==32)
    {
        printf("Value thirty two is at p[%d][%d]",(j/24),(j%24));
    }
    
    j++;
}



}