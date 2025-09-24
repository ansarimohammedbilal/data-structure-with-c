#include <stdio.h>
int main (){
    int items= 50;
    float cost_per_items=9.99;
    float total_cost= cost_per_items * items ;
    char currency = '$';
    printf("no. of items : %d\n",items);
    printf("cost_per_items = %.2f %c\n",cost_per_items,currency);
    printf("total_cost : %.2f %c\n",total_cost,currency);
    return 0;

}