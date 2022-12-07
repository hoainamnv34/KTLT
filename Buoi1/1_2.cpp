#include <stdio.h>


int main(){
    printf("Vo Hoai Nam 20204592\n");
    int a[7]= {13, -355, 235, 47, 67, 943, 1222}; 
    printf("address of first five elements in memory.\n");
    for (int i = 0; i < 5; i++)  printf("\t\ta[%d] ", i);
    printf("\n");

    
    /*****************/
    for (int i = 0; i < 5; i++) printf("\t   %p", &a[i]);
    /*****************/
           
    return 0;
}
