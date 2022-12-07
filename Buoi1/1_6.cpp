#include<stdio.h>

void reversearray(int arr[], int size){
    //Vo Hoai Nam 2020
    int l = 0, r = size - 1, tmp;
    
    /*****************/
    while (l < r){
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l ++;
        r--;
    }
    
    /*****************/
}

void ptr_reversearray(int *arr, int size){
    //Vo Hoai Nam 2020
    int l = 0, r = size - 1, tmp;
    
    /*****************/

    while (l < r){
        tmp = *(arr + l);
        *(arr + l) = *(arr + r);
        *(arr + r) = tmp;
        l ++;
        r --;
    }
    

    /*****************/
}

int main() {
    int a[7]= {13, -355, 235, 47, 67, 943, 1222}; 
    ptr_reversearray(a, 7);
    for (int i = 0; i < 7; i++)  printf("%d ", a[i]);

}