#include <stdio.h>
int main () {
    int mynumber[4] = {4,8,12,16};
    int *ptr = mynumber;
    int i;
    for ( i = 0; i < 4; i++)
    {
     printf("%d\n",*(ptr+i));
    }
    return 0;
}