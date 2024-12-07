// bd

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef map<ll, ll> mi;
typedef string str;
typedef deque<ll> dq;
typedef set<ll> si;
typedef multiset<ll> msi;
typedef priority_queue<ll,vi,greater<ll> > pdq;
typedef priority_queue<ll,vi,less<ll> > pvq;

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
#define W(i) while(i--)
#define EL '\n'

#define add(a,b,mod) (((a)=((a)%(mod)+(b)%(mod))%(mod))%=(mod))
#define mx(a,b) ((a)=max((a),(b)))
#define mn(a,b) ((a)=min((a),(b)))

const ll MOD[] = {(ll)1e9 + 2277, (ll)1e9 + 5277, (ll)1e9 + 8277, (ll)1e9 + 9277};
const ll lmax = LLONG_MAX, lmin = LLONG_MIN;
const ll N=1e6, N2=2e5, M=1e9+7, B=311;
ll a[N+5];
ll n,res;

void sol(){
    cin>>n;
}

ANH_MINH_CO_TOC{
    fast; open("");
    ll t=1;
    //cin>>t;
    W(t) sol();
    return 0;
}