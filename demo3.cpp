#include <stdio.h>
#include <math.h>

int main() {
    // 从 1 试到 10000
    for (int i = 1; i <= 10000; i++) {
        int a = sqrt(i + 100); // 求 i+100 的平方根
        int b = sqrt(i + 268); // 求 i+268 的平方根

        // 如果平方根乘自己还能等于原数，说明是完全平方数
        if (a * a == i + 100 && b * b == i + 268) {
            printf("%d\n", i);
        }
    }
    return 0;
}
