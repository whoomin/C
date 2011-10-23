/* bubble-冒泡算法*/
#include <stdio.h>
void bubble(int * a, int n){
    int i,j;
    for(i =0; i<n; i++){
        for(j = 0; j<n-i-1; j++){
            int temp;
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}


