//
// Created by 김기현 on 2023/06/18.
//

#include <stdio.h>
#define INCHES_PER_POUND 166
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)

int main(void) {
    int height, length, width, volume, weight;

    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / INCHES_PER_POUND);

    return 0;
}