#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "mouad";
    char string2[] = "mouad1563";


    // strupr(string1);


    int result = strncmp(string1, string2,8);


    if(result==0){
        printf("these strings are the same");
    }
    else{
        printf("these strings are different");
    }
    // printf("%s",string1);
    return 0;

}