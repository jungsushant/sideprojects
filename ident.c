// A simple code to generate a identity matrix


#include <stdio.h>

#define N 10
double a[N][N];

double *ident = &a[0][0];


int main(){


    
int c = N;
int i = 0;
int temp = 0;
    while (c >0)
    {
        c--;

        for (int  i = 0; i < N; i++)
        
        {
            if(i==temp){
                *ident=1.0;
            }else{
                *ident=0.0;
            }
            ident++;
            
        }
        temp++;
        
    }

    printf("%f",a[2][2]);
    
}

