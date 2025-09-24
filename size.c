#include <stdio.h>
int main () {
    int  myInt ;
    float myFloat;
    char myChar;
    double myDouble;
    printf("%zu\n",sizeof(myInt));
    printf("%zu\n",sizeof(myFloat));
    printf("%zu\n",sizeof(myChar));
    printf("%zu\n",sizeof(myDouble));
    return 0 ;
}