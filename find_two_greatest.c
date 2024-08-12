#include <stdio.h>


void find_two_largest(const int *a, int n, int *largest, int *second_largest);


int main(){

int a[10]={4,67,2,4,5,6,7,34,6,8,};
int largest, second_largest;

find_two_largest(a, 10, &largest, &second_largest);

printf("%d\t%d",largest,second_largest);


}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){

    *largest = *(a+(n-1));
    *second_largest = *(a+(n-2));
    int temp = n;
    // printf("Largest init %d hahah \t",*largest);

   while (n>=0)
   {
    if(*(a+(n-1))>*largest && *(a+(n-1))>*second_largest){
        *largest = *(a+(n-1));
        printf("temp largest %d\n",*(a+n-1));
    }
    
//    printf("number: %d\n.....",n);
    n--;
   }

    while (temp>=0){
    
    if (*(a+(temp-1))>*second_largest && *(a+(temp-1))<*largest) {
        *second_largest = *(a+(temp-1));
        printf("temp second largest %d\n",*(a+temp-1));

    
    }
        temp--;
    }
    
   
   
   
    

}
