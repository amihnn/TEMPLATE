// mat

const ll N=2
struct mat {ll m[N][N];};
ll mul(ll a, ll b, ll m){
    if(b==0) return 0;
    if(b==1) return a%m;
    ll h=mul(a,b/2,m)%m;
    if(b%2==0) return (h+h)%m;
    return ((h+h)%m+a%m)%m;
}

mat nhan(mat a, mat b){
    mat ans;
    REP(i,0,N)
        REP(j,0,N){
            ans.m[i][j]=0;
            REP(k,0,N) (ans.m[i][j]+=mul(a.m[i][k],b.m[k][j],M))%=M;
        }
    return ans;
}

mat power(mat a, ll b){
    if(b==0){
        mat res;
        REP(i,0,N)
            REP(j,0,N)
                if(i==j) res.m[i][j]=1;
                else res.m[i][j]=0;
        return res;
    }
    if(b==1) return a;
    mat half=power(a,b/2);
    if(b&1) return nhan(nhan(half,half),a);
    return nhan(half,half);
}

ll n;
void sol(){
    ci(n);
    mat ans; ans.m[0][0]=1, ans.m[0][1]=1;
    mat res;
    res.m[0][0]=1; res.m[0][1]=1;
    res.m[1][0]=1; res.m[1][1]=0;
    res=power(res,n-1);
    mat pos=nhan(ans,res);
    co(pos.m[0][1]);
    // REP(i,0,N){
    //     REP(j,0,N){
    //         co(pos.m[i][j],"");
    //     }
    //     cout<<endl;
    // }
}