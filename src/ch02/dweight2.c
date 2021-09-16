/**
 * 在dweight.c的基础上，通过用户的输入进行计算体积和重量阈值。
 */ 
#include <stdio.h>

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
    weight = (volume + 165) / 166;

    printf("尺寸：%dx%dx%d\n", height, length, width);
    printf("体积（平方英尺）：%d\n", volume);
    printf("重量阈值（磅）：%d\n", weight);

    // zero is fine.
    return 0;
}