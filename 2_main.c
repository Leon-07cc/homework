//202610603317
//陈振东
#include <stdio.h>

int main()
 {
    float aaa = 0.0;
    scanf("%f", &aaa);
    if (aaa > 0) {
        printf("zheng\n");
    } else if (aaa < 0) {
        printf("fu\n");
    } else {
        printf("ling\n");
    }


    return 0;
}