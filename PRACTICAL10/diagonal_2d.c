#include <stdio.h>
// Amrit Kumar Bharti
// erp-10172
int main() {
    int n, i, j, sum = 0;
    int arr[10][10];

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}

/*
Sample Input:
3
1 2 3
4 5 6
7 8 9

Sample Output:
Sum of diagonal elements = 15
*/
