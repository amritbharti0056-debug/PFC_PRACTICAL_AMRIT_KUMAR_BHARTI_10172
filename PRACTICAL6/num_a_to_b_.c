#include <stdio.h>
int main() {
    // Name : Amrit Kumar Bharti
    // ERP : 10172
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    if (a <= b) {
        for (int i = a; i <= b; i++)
            printf("%d ", i);
    } else {
        for (int i = a; i >= b; i--)
            printf("%d ", i);
    }

    return 0;
}
//  output:
// Enter a and b: 2 10
// 2 3 4 5 6 7 8 9 10 
// Enter a and b: 11 6
// 11 10 9 8 7 6
