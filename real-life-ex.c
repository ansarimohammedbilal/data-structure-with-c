/* create a program that finds the lowest age among different ages*/
#include <stdio.h>
int main (){
    int ages []={20, 18, 35, 27, 21};
    int i;
 int lowestAges = ages[0];
 for ( i = 0; i < 5; i++){
    if (lowestAges > ages[i])
    {
        lowestAges = ages[i];
    }
    
 }
 printf("%d",lowestAges);

return 0;
}