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

    int max = arr[0];
    int min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}

/*
Sample Input:
5
10 25 3 8 15

Sample Output:
Maximum = 25
Minimum = 3
*/
