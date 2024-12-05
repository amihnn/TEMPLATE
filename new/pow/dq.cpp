ll power(long long a, long long n, long long mod){
    if (n == 0) return 1;
    long long half = power(a, n / 2, mod);
    if (n % 2 == 0) return half * half % mod;
    else return (half * half % mod) * a % mod;
}