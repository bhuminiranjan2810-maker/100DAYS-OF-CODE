//Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int arr[] = {12, 37, 45, 9, 8, 16, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("Total Even Numbers: %d\n", even_count);
    printf("Total Odd Numbers: %d\n", odd_count);
    
    return 0;
}
