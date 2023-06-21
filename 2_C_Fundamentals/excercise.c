//
// Created by 김기현 on 2023/06/21.
//

#include <stdio.h>

#define FORMULA 4.0/3.0 * 3.14159f

int main(void) {
    int a1;
    float f1;

    printf("a1 = %d\n", a1); // a1 = 0
    printf("f1 = %f\n", f1); // f1 = 0.000000

    // 1.1
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");


    // 1.2
    int r = 10;
    float vol = FORMULA * r * r * r;

    printf("Volume of sphere: %f\n", vol); // Volume of sphere: 0
}
