// Function to search an element in an integer array using functions (passing array to function)

#include <stdio.h>
int search(int a[], int n, int x);

int main() {
    int a[50], n, x, i, d;
    printf("Enter the size of integer array:\n");
    scanf("%d", &n);
    printf("Enter elements of integer array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d", &x);
    d = search(a, n, x);
    if (d == -1) {
        printf("Not found\n");
    } else {
        printf("Found at location %d\n", d);
    }
    return 0;
}

int search(int a[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (x == a[i]) {
            return i + 1; // Returning 1-based index
        }
    }
    return -1; // Not found
}