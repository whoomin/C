#include <stdio.h>
#include "bubble.h"
int main(){
    int i;
    int a[] = {2, 3, 6, 1, 9};
    bubble( a, 5);
    for(i = 0; i < 5; i++){
        printf("%d,", a[i]);
    }
    printf("\n");
    printf("hello world\n");

}
