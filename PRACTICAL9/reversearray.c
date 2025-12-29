#include <stdio.h>
//Amrit Kumar Bharti
//erp-10172
int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Sample Input:
5
1 2 3 4 5

Sample Output:
Reversed array:
5 4 3 2 1
*/
