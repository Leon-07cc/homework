//202610603317
//陈振东

#include <stdio.h>

int main(){
    float a=0.0;
    float b=0.0;
    float c=0.0;
    printf("Input 3 sides.\n");
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a){
        printf("Can form a triangle.\n");
    }
    else{
        printf("Cannot form a triangle.\n");
    }

    return 0;
}