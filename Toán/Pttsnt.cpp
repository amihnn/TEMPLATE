//pttsnt

// problem: http://lequydon.ntucoder.net/Problem/Details/6144
snt[0]=snt[1]=false;
for(ll i=2; i<N; i++) snt[i]=1;
for(ll i=2; i*i<N; i++) if(snt[i])
    for(ll j=i*i; j<N; j+=i) {
        snt[j]=false;
        if(unt[j]==0) unt[j]=i; 
    }
for(ll i=2; i<N; i++)
    if(snt[i]) unt[i]=i;
...
while(t--){
    cin>>n;
    a.clear();
    while(n!=1){
        a.push_back(unt[n]);
        n/=unt[n];
    }
    for(ll i=0; i<a.size(); i++){
        if(i + 1 == a.size()) {cout<<a[i]; break;}
        cout<<a[i]<<'*';
    }
    cout<<'\n';
}
// O(n * log(log(n)) + t * log(n))


// problem: https://lqdoj.edu.vn/problem/factor
FOR(i,2,sqrt(n))
    while(n%i==0)
        v.push_back(i), n/=i;
if(n>1) v.push_back(n);
REP(i,0,v.sz){
    if(i+1==v.size()) {cout<<v[i]; break;}
    cout<<a[i]<<'*';
}
// O(căn n)