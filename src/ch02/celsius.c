/**
 * 转换华氏温度度到摄氏度
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit, celsius;

    printf("输入华氏温度：");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    // 小数点后的一位
    printf("摄氏温度：%.2f\n", celsius);
    return 0;
}
