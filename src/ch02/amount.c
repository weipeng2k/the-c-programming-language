/**
 * 税金计算，金额乘以5%
 */
#include <stdio.h>

#define RATE 0.05f

int main(void) {
    float amount;
    
    printf("输入金额：");
    scanf("%f", &amount);

    float cal = amount + (amount * RATE);
    
    printf("税金为：%-10.2f\n", cal);

    return 0;
}