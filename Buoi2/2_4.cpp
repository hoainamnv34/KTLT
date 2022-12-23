#include <stdio.h>


//Vo Hoai Nam 20204592
int cube(int x) {
    //# trả về lập phương của x
    /*****************/
    return x*x*x;
    /*****************/
}

//Vo Hoai Nam 20204592
//# viết hàm tính lập phương của một số kiểu double
/*****************/
double cube(double x){
    return x*x*x;
}
/*****************/

//Vo Hoai Nam 20204592
int main() {
    int n;
    double f;
    scanf("%d %lf", &n, &f);
    
    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f));
    
    return 0;
}