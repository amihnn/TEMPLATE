ll power(ll a, ll b, ll m) {
    ll res = 1;
    for (; b; a = a * a % m, b >>= 1)
        if (b & 1) res = res * a % m;
    return res;
}