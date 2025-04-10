#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef unordered_map<ll, ll> umi;
typedef map<ll, ll> mi;
typedef string str;
typedef deque<ll> dq;
typedef set<ll> si;
typedef multiset<ll> msi;
typedef priority_queue<ll,vi,greater<ll>> pdq;
typedef priority_queue<ll,vi,less<ll>> pvq;

#define open(name) {if(fopen(name".inp","r")){freopen(name".inp","r",stdin);freopen(name".out","w",stdout);}}
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ANH_MINH_CO_TOC signed main()

#define fi first
#define se second
#define eb emplace_back
#define ins insert
#define sz size()
#define pf push_front
#define pb push_back
#define pbs pop_back()
#define pfs pop_front()
#define setpr(x) cout<<fixed<<setprecision(x)
#define all(a) (a).begin(), (a).end()
#define allr(a,n) (a)+1, (a)+(n)+1
#define mxx max_element
#define mnn min_element

#define FOR(i,a,b) for(ll i=a; i<=b; i++)
#define FORD(i,a,b) for(ll i=a; i>=b; i--)
#define REP(i,a,b) for(ll i=a; i<b; i++)
#define REV(i,a,b) for(ll i=a; i>b; i--)
#define REPS(i,a,b,c) for(ll i=a; i<b; i+=c)
#define REVS(i,a,b,c) for(ll i=a; i>b; i-=c)
#define FORS(i,a,b,c) for(ll i=a; i<=b; i+=c)
#define FORDS(i,a,b,c) for(ll i=a; i>=b; i-=c)
#define FORA(i,a) for(auto& i: a)
#define W(i) while(i--)
#define EL '\n'

#define add(a,b,mod) (((a)=((a)%mod+(b)%mod)%(mod))%=mod)
#define mx(a,b) ((a)=max((a),(b)))
#define mn(a,b) ((a)=min((a),(b)))
#define debug cout << "t muon co ny" << endl;

const pair<ll, ll> dir[] = { {1,0}, {0,1}, {-1,0}, {0,-1}, {1,1}, {-1,1}, {1,-1}, {-1,-1} };
const ll MOD[] = {(ll)1e9 + 2277, (ll)1e9 + 5277, (ll)1e9 + 8277, (ll)1e9 + 9277};
const ll lmax = LLONG_MAX, lmin = LLONG_MIN;
const ll N=1e6, N2=2e5, M=1e9+7, B=311;
ll a[N+5];
ll n,res;

// dijkstra
ll d[N+5];
void dijkstra(ll s){
    priority_queue<ii,vii,greater<ii>> q;
    FOR(i,1,n) d[i]=1e18;
    d[s]=0, q.push({d[s],s});
    while(!q.empty()){
        ll w=q.top().fi, x=q.top().se;
        q.pop();
        if(w>d[x]) continue;
        FORA(y,v[x])
            if(d[y.fi]>d[x]+y.se) d[y.fi]=d[x]+y.se, q.push({d[y.fi],y.fi});
    }
}
// O(n*n+m)

void sol(){
    cin>>n;
}

ANH_MINH_CO_TOC{
    fast; open("");
    ll t=1;
    // cin>>t;
    W(t) sol();
    return 0;
}