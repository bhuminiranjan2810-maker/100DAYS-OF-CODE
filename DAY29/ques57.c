//Find the sum of array elements.
#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
