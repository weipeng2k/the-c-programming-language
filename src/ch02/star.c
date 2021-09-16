/**
 * 打印星 
 */
#include <stdio.h>

/**
 * 递归打印*
 */
void print_star(int level, int originLevel) {
    if (level == 1) {
        for (int i = 1; i < originLevel; i++) {
            printf(" ");
        }
        printf("*\n");
    } else {
        int skip = originLevel - level;
        for (int i = 0; i < skip; i++) {
            printf(" ");
        }
        printf("*");
        for (int i = 2; i < level; i++) {
            printf("  ");
        }
        printf(" ");
        printf("*\n");
        print_star(level - 1, originLevel);
    }
}

int main(void) {
    int level;
    printf("输入层数：");
    scanf("%d", &level);

    print_star(level, level);

    return 0;
}