//
// Created by 김기현 on 2023/06/18.
//

/*
 * 12 x 10 x 8 부피의 상자의 무게를 계산
 * */

#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height); // Dimensions: 12x10x8
    printf("Volume (cubic inches): %d\n", volume); // Volume (cubic inches): 960
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166); // Dimensional weight (pounds): 6

    return 0;
}