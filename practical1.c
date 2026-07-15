#include <stdio.h>

int main() {
    int n, x, count = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for (x): ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    if (count == 0) {
        printf("not found\n");
    } else {
        printf("no. of repetations: %d\n", count);
    }

    return 0;
}