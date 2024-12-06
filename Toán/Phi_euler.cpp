// phieuler

ll eulerPhi(ll n) { 
    if(n==0) return 0;
    ll ans=n;
    FOR(x,2,trunc(sqrt(n)))
        if(n%x==0) {
            ans-=ans/x;
            while(n%x==0) n/=x;
        }
    if(n>1) ans-=ans/n;
    return ans;
}