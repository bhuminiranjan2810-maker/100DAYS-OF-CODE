//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5;
    int key = 25;
    int i;
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    n++;
    printf("Array after inserting %d: ", key);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}