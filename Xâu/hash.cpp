// hash

ll p[N+5][4], hs[N+5][4], ht[4];
ll ns,nt,res;
str s,t;

void buildhs(){
    ns=s.sz, nt=t.sz;
    s=' '+s; t=' '+t;
    FOR(m,0,3){
        p[0][m]=1;
        FOR(i,1,N) p[i][m]=(p[i-1][m]*B)%MOD[m];
        FOR(i,1,ns) hs[i][m]=(hs[i-1][m]*B+s[i])%MOD[m];
        FOR(i,1,nt) ht[m]=(ht[m]*B+t[i])%MOD[m];
    }
}
ll geths(ll i, ll j, ll M){return (hs[j][M]-hs[i-1][M]*p[j-i+1][M]+MOD[M]*MOD[M])%MOD[M];}
// FOR(i,1,n)
//     if(geths(i,i+n2-1,0)==ht[0]) res++;
// co(res)