int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0, rem, i = x;

    while (i != 0) {
        rem = i % 10;
        sum += rem;
        i = i / 10;
    }

    if (x % sum == 0) return sum;
    else return -1;
}
