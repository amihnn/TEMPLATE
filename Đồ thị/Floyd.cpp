void floyd(ll n){
    REP(k,0,n) REP(i,0,n) REP(j,0,n)
        if(a[i][k]<1e18 && a[k][j]<1e18) mn(a[i][j],a[i][k]+a[k][j]);
}