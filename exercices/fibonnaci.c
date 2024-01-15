#include <stdio.h>


int fibonnaci(int n){
    int first = 0;
    int second = 1;

    for(int i=1;i<=n;i++){
        
        
        printf("%d\n",first);
        int tmp = first;
        first = second;
        second = first + tmp;

    }
};


int main(){
    fibonnaci(6);
    return 0;
}