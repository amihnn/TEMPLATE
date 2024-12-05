mi c;
void nenso(){
    FOR(i,1,n) b[i]=a[i];
    sort(allr(b,n));
    ll cur=1;
    c[b[1]]=1;
    FOR(i,2,n)
        if(b[i]!=b[i-1]) c[b[i]]=++cur;
}