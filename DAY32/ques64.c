//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    printf("Enter an integer number: ");
    scanf("%lld", &n);
    if (n < 0) {
        n = -n;
    }
    int freq[10] = {0};
    if (n == 0) {
        freq[0] = 1;
    } else {
        while (n > 0) {
            int digit = n % 10;
            freq[digit]++;
            n = n / 10;
        }
    }
    int max_freq = -1;
    int most_frequent_digit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }
    printf("The digit that occurs the most is %d (appears %d times).\n", 
           most_frequent_digit, max_freq);
           return 0;
}
