#include <stdio.h>

int main() {
    int n, x;
    int count = 0;
    int first = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;

            if (first == -1) {
                first = i;
            }
        }
    }

    if (count == 0) {
        printf("Element not found.\n");
    } else {
        printf("Number of occurrences: %d\n", count);
        printf("First occurrence position: %d\n", first);
    }

    return 0;
}
