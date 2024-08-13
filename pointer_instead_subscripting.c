#include <stdio.h>


#define LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n){
    int sum = 0;
    const int *p = &a[0][0];
    const int *end = &a[0][0] + (n * LEN);


    while (p<end)
    {
        sum += *p;
        p++;
    }
    return sum;
    
}

int main(){

    int a[LEN][LEN]={{0,1,2},{3,4,5},{6,7,8}};


    printf("%d",sum_two_dimensional_array(a, 3));


    



}