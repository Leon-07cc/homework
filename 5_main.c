//202610603317
//陈振东
#include <stdio.h>

int main() {
    float a = 0.0;
    float b = 0.0;
    char c = ' ';
    
    printf("input numbers and operator:\n");
    scanf("%f %c %f", &a, &c, &b);
    if(c == '+') {
        printf("%.2f\n", a + b); 
    }
    else if(c == '-') {
        printf("%.2f\n", a - b);
    }
    else if(c == '*') {
        printf("%.2f\n", a * b); 
    }
    else if(c == '/') {
        if (b != 0) {
            printf("%.2f\n", a / b);
        } else {
            printf("wrong\n");
        }
    }
    else {
        printf("wrong\n");
    }
    
    return 0;
}