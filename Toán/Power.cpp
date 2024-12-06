// power

ll power(ll a, ll n, ll m){
    if(n==0) return 1;
    ll h=power(a, n/2, m);
    if(n%2==0) return h*h%m;
    else return (h*h%m)*a%m;
}

ll power(ll a, ll b, ll m) {
    ll res=1;
    for(; b; a=a*a%m, b>>=1)
        if(b&1) res=res*a%m;
    return res;
}