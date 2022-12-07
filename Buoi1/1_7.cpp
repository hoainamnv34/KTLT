#include <stdio.h>
#include<stdlib.h>


int *a;
int n, tmp;

int main(){

    //Vo Hoai Nam 20204592
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    //#Allocate memory
    
    /*****************/
    a = new int[n];
    /*****************/
    
    
    for(int i = 0; i < n; i++)
        scanf("%d", a + i); 
    
    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    
    //#Sort array
    
    /*****************/
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1;j < n; j++) {
            if( *(a+i) > *(a+j)){
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    /*****************/
    
    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    
    delete [] a;
    return 0;
}