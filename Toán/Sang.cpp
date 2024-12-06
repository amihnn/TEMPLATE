// snt

p[N+5];
void sang(ll n) {
    FOR(i,1,n) p[i]=true;
    p[0]=p[1]=false;
    FOR(i,2,trunc(sqrt(n))) if(p[i])
        FORS(j,i*i,n,i) p[j]=false;
}

// suoc

ll d[N+5];
void sang(ll n){
    FOR(i,1,n)
        FORS(j,i,n,i) d[j]++;
}