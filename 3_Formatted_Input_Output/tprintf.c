//
// Created by 김기현 on 2023/06/29.
//

/*Prints int and float values in various formats */

#include <stdio.h>

int main(void) {
    int karinaAge;
    float karinaHeight;

    karinaAge = 23;
    karinaHeight = 168.4123f;

    printf("karina age %d and karina height %f\n", karinaAge, karinaHeight);
    printf("karina age |%5d| and karina height |%10.2f|\n", karinaAge, karinaHeight);
    printf("karina age |%-5d| and karina height |%7.2e|\n", karinaAge, karinaHeight);
    printf("karina age |%5.3d| and karina height |%10.7g|\n", karinaAge, karinaHeight);

}