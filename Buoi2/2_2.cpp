#include <stdio.h>


//Vo Hoai Nam 20204592
void rotate(int &x, int &y, int &z) {
    /*****************/
    int temp; //biến trung gian
    temp = x;
    x = y;
    y = z;
    z = temp;
    /*****************/
}

int main() {
    int x, y, z;
    
    //# Nhập 3 số nguyên
    /*****************/
    scanf("%d%d%d", &x, &y, &z);
    /*****************/
    
    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);
    
    return 0;
}