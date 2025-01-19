#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    a = a + b;  
    b = a - b;  
    a = a - b;  
    
    printf("After swap: a = %d, b = %d\n\n", a, b);
    int x = 5;
    int y = 10;
    
    printf("Before swap: x = %d, y = %d\n", x, y);
    x = x * y;  
    y = x / y;  
    x = x / y;  
    
    printf("After swap: x = %d, y = %d\n\n", x, y);
 
    return 0;
}
