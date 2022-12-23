#include <stdio.h>
#include <math.h>


/*Vo Hoai Nam 20204592*/
float get_hypotenuse(float x, float y) {
    /*****************/
    return sqrt(x*x + y*y); //độ dài cạnh huyền 
    /*****************/

}

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    
    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z);
    
    return 0;
}