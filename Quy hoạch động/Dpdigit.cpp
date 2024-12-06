// dpdigit

vi v;
ll np[N];
void snt(ll n){
    np[0]=np[1]=true;
    for(ll i=2; i*i<n;i++)
        for(ll j=i*i; j<n; j+=i) np[j]=true;
}

ll f[10][2][10*9+5];
ll dq(ll pos, ll t, ll sm){
    if(pos==v.sz){
        if(!np[sm]) return 1;
        return 0;
    }
    if(f[pos][t][sm]!=-1) return f[pos][t][sm];
    ll res=0;
    if(t==1){
        REP(i,0,v[pos]) res+=dq(pos+1, 0, sm+i);
        res+=dq(pos+1, 1, sm+v[pos]);
    }
    else
        FOR(i,0,9) res+=dq(pos+1, 0, sm+i);
    f[pos][t][sm]=res;
    return res;
}

ll solve(ll n){
    v.clear();
    memset(f,-1,sizeof f);
    while(n) v.pb(n%10), n/=10;
    reverse(all(v));
    return dq(0,1,0);
}