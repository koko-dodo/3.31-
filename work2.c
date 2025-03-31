#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long a[n][n];

    // 填充数组
    long count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = count++;
        }
    }

    printf("a[%d][%d] = %ld\n", n-1, n-1, a[n-1][n-1]);
    return 0;
}