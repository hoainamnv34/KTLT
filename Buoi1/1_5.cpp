#include<stdio.h>


double* maximum(double* a, int size){
    //Vo Hoai Nam
    double *max;
    max = a;
    if (a==NULL) return NULL;

    /*****************/
    for(int i = 1; i < size; i++)
        if (*max < a[i]) *max = a[i];
    
    /*****************/
    
    return max;
}

int main(){

    double a[5] = {1,2,3,51,7};
    double *max = maximum(a, 5);
    printf("%f", *max);
}