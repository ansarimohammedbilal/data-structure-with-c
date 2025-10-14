#include <stdio.h>
int main(){
    int number[]={2,9,-1,4,0-6};
    int i;
    for ( i = 0; i < 5; i++)
    {
     if (number[i] < 0)
     {
       continue;
     }
        if (number[i]==0)
        {
        break;
        }
        printf("%d\n",number[i]);
    }
    return 0;
}