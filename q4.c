#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    int *arr = (int*)calloc(n, sizeof(int));  
    if (!arr) {
        printf("calloc failed!\n");
        return 1;
    }

    printf("Array created using calloc:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (int i = 0; i < n; i++)
        arr[i] = i + 10;

    printf("\nModified values:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    arr = (int*)malloc(n * sizeof(int));  
    printf("\n\nArray created using malloc:\n");

    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
