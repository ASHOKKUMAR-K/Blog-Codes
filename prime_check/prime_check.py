def check_prime(n):
    if n == 0 or n == 1:
        return False
    elif n == 2 or n == 5:
        return True
    elif n % 10 in [0, 5]:
        return False
    elif not n & 1:
        return False
    else:
        sqrt_of_n = int(n ** 0.5) + 1
        if not sqrt_of_n & 1:
            sqrt_of_n -= 1
        while sqrt_of_n > 1:
            if check_prime(sqrt_of_n) and n % sqrt_of_n == 0:
                return False
            sqrt_of_n -= 2
        return True


if __name__ == '__main__':
    number = int(input())
    if check_prime(number):
        print("{} is a prime number.".format(number))
    else:
        print("{} is not a prime number.".format(number))