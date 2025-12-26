#include <stdio.h>

int main() {
    // Name : Amrit Kumar Bharti
    // ERP : 10172
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
// output:
// Enter n: 5
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********
