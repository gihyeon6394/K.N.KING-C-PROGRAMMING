//
// Created by 김기현 on 2023/06/21.
//

#include <stdio.h>

#define FORMULA 4.0/3.0 * 3.14159f

int expo(int x, int i);

int printDollars(int amount);

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

    // 1.3
    printf("Enter a radius: ");
    scanf("%d", &r);
    float vol2 = FORMULA * r * r * r;
    printf("Volume of sphere: %f\n", vol2);


    // 1.4
    int amount;
    printf("Enter and amount : ");
    // scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount * 1.05f);

    // 1.5
    int x;
    printf("input x : ");
    scanf("%d", &x);
    int val = 3 * expo(x, 5) + 2 * expo(x, 4) - 5 * expo(x, 3) - expo(x, 2) + 7 * x - 6;
    printf("val = %d\n", val);


    // 1.6
    printf("input x : ");
    scanf("%d", &x);
    val = ((((3 * x + 2) * x - 5) * x - 1) + 7) * x - 6;
    printf("val = %d\n", val);

    // 1.7
    int dollarAmount;
    printf("Enter a dollar amount : ");
    scanf("%d", &dollarAmount);

    int remainder = dollarAmount;

    while (remainder > 1) {
        remainder = printDollars(remainder);
    }
    // TODO : "$5 bills : 0" 표시 가능하도록

    // 1.8
    // TODO : 계산식이 어떻게?

    return 0;

}

/**
 * 달러를 20, 10, 5, 1 단위로 계산해줌
 * */
int printDollars(int amount) {
    int remainder;
    int quotient;
    int fg;

    if (amount >= 20) {
        fg = 20;
    } else if (amount >= 10) {
        fg = 10;
    } else if (amount >= 5) {
        fg = 5;
    } else {
        fg = 1;
    }

    remainder = amount % fg;
    quotient = amount / fg;

    printf("$%d biils : %d\n", fg, quotient);

    return remainder;
}

/**
 * x 를 n번 제곱해서 리턴
 * */
int expo(int x, int n) {
    for (int i = 1; i < n; i++)
        x *= x;

    return x;
}
