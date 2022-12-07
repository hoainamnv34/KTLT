#include<stdio.h>

int counteven(int* arr, int size){
    //Vo Hoai Nam
    int count = 0;
    
    /****************/
    for (int i = 0; i < size; i++) 
        if(arr[i] % 2 == 0) count ++;
    /*****************/
    
    return count;    
}

int main() {
    int a[5] = {1,2, 3, 4,5};
    printf("%d", counteven(a, 5));
}