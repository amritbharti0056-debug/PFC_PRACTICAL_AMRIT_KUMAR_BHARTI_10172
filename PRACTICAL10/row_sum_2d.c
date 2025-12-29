#include <stdio.h>
//Amrit Kumar Bharti
//erp-10172
int main() {
    int r, c, i, j;
    int arr[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}

/*
Sample Input:
2 3
1 2 3
4 5 6

Sample Output:
Sum of row 1 = 6
Sum of row 2 = 15
*/
