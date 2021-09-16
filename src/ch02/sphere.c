/**
 * 球体体积计算
 */
#include <stdio.h>

#define PI 3.14f
#define PREFIX (4.0f / 3.0f)

int main(void) {
    int radius;
    printf("输入半径：");
    scanf("%d", &radius);

    float volume = PREFIX * PI * radius * radius * radius;

    printf("体积为：%.2f\n", volume);
    return 0;
}