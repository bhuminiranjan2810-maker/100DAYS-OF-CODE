//Search for an element in an array using linear search
#include <stdio.h>

int main() {
    int arr[100], size, i, searchElement;
    int found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &searchElement);
    for (i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            printf("Element found at index %d (Position %d).\n", i, i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Element not found in the array.\n");
    }
    return 0;
}
