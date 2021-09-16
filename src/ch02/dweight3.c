/**
 * 在dweight2.c的基础上，使用#define来定义常量。
 */ 
#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void) {
    // 高，长，宽，体积和重量
    int height, length, width, volume, weight;

    printf("输入高（英尺）：");
    scanf("%d", &height);

    printf("输入长（英尺）：");
    scanf("%d", &length);

    printf("输入宽（英尺）：");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + (INCHES_PER_POUND - 1)) / INCHES_PER_POUND;

    printf("尺寸：%dx%dx%d\n", height, length, width);
    printf("体积（平方英尺）：%d\n", volume);
    printf("重量阈值（磅）：%d\n", weight);

    // zero is fine.
    return 0;
}