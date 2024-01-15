#include <stdio.h>


double findMax(int,int);  // function prototype , ensures that a function always gets the same arguments


int main(){ 
    int max = findMax(3,4);
    printf("the bigger number is %d", max);
    return 0;   

} 
 

double findMax(int x, int y){

    return (x > y) ?  x :  y;  // tenerary operator
}