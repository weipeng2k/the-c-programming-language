#include <stdio.h>

int main(void) {
    // 高，长，宽，体积和重量
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("尺寸：%dx%dx%d\n", height, length, width);
    printf("体积（平方英尺）：%d\n", volume);
    printf("重量阈值（磅）：%d\n", weight);

    return 0;
}