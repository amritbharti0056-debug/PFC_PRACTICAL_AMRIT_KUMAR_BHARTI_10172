#include <stdio.h>
// Amrit Kumar Bharti
// erp-10172
int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}

/*
Sample Input:
6
1 2 3 4 5 6

Sample Output:
Sum of even elements = 12
*/
