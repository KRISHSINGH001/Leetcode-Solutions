int differenceOfSums(int n , int m) {
    int a = 0, b = 0;
    for (int i = 1; i <= n; i++) {
        if(i % m == 0)
            b += i; //divisible
        else
            a += i; //not div
    }
    int result = a - b;
    return result;
}
