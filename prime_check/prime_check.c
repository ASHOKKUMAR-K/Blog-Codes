#include <stdio.h>
#include <math.h>

int check_prime(int n) {
    int sqrt_of_n;
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2 || n == 5) {
        return 1;
    } else if (n % 10 == 0 || n % 10 == 5) {
        return 0;
    } else if (!(n & 1)) {
        return 0;
    } else {
        sqrt_of_n = sqrt(n) + 1;
        if (sqrt_of_n % 2 == 0) {
            sqrt_of_n -= 1;
        }
        while (sqrt_of_n > 1) {
            if (check_prime(sqrt_of_n) && n % sqrt_of_n == 0) {
                return 0;
            }
            sqrt_of_n -= 2;
        }
        return 1;
    }
}


int main() {
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);
    if (check_prime(number) == 1) {
        printf("%d is a prime number", number);
    } else {
        printf("%d is not a prime number", number);
    }

    return 0;
}
