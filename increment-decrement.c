#include <stdio.h>
int main (){
    int number[3] ={10,20,30,};
    int *p = number;
    printf("%d\n", *p);
    p++;
    printf("%d\n",*p);
    p--;
    p +=2;
    printf("%d\n",*p);
    
    return 0;  
}