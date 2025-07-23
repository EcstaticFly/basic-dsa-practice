/*******************---------------SEE THE UNFORSEEN-----------------********************/
/*******************------------COMPETE AGAINST YOURSELF-------------********************/
/* HEADERS <------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// Template Credits :- https://github.com/zscoder/CompetitiveProgramming/blob/master/Data%20Structures%20Class%20Template.cpp


/* Debug Template <------------------------------------------------------------------------*/
#ifndef ONLINE_JUDGE
#include "dbg_template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

/* NAMESPACES <----------------------------------------------------------------------------*/
using namespace std;
// using namespace __gnu_pbds;

/* DEFINE STATEMENTS <---------------------------------------------------------------------*/
#define  f(i,s,e) for(long long i=s;i<e;++i)
#define cf(i,s,e) for(long long i=s;i<=e;++i)
#define rf(i,e,s) for(long long i=e;i>=s;--i)
#define fe first
#define se second
#define pb push_back
#define eb emplace_back
#define fbo find_by_order  // gives itr to the x in indexed_set
#define ook order_of_key  // gives number of ele less then x in indexed_set
#define ist insert
#define mpr make_pair
#define endl '\n'
#define sz(x) ((long long int)(x).size())
#define all(a) begin(a), end(a)
#define fio ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/* OUTPUTS OF DS <-------------------------------------------------------------------------*/
#define outarr(arr) for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){ cout << arr[i] << " ";}cout << endl;
#define outvec(v) for(int i=0;i<sz(v);i++){ cout << v[i] << " ";}cout << endl;
#define outmap(m) for(auto i: m){ cout << i.fe << " " << i.se << endl;}
#define outvecvec(v) for(int i=0;i<sz(v);i++){for(int j=0;j<sz(v[i]);j++){cout << v[i][j] << " ";}cout << endl;}
#define outvecpair(v) for(int i=0;i<sz(v);i++){cout << v[i].first << " " << v[i].second << endl;}
#define outset(s) for(auto i : s){cout << i << " ";}cout<<endl;
#define outnum(n) cout << n << endl;

/* TYPEDEF STATEMENTS <---------------------------------------------------------------------*/
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef pair<ll,ll> pii;
typedef vector<pair<ll, ll>> vpii;
typedef vector<vector<ll>> vvi;
// template <typename T>
// using indexed_set = tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;
// using multindexed_set = tree<T,null_type,less_equal<T>,rb_tree_tag, tree_order_statistics_node_update>;

/* DEFINING CONSTANTS <----------------------------------------------------------------------*/
const static int M = 1e9+7;
const static ll INF = 2e18;
const static int mod = 998244353;


/* SOME HANDY FUNCTIONS <--------------------------------------------------------------------*/
void print_binary(ll num,ll n) { n--; while(n+1>0) { cout << (((num>>n)&1) > 0 ? 1 : 0); n--; } cout << endl;}
ll bin_exp(ll x, ll y, int m = M) { ll res = 1; while(y>0) { if(y&1) { res = (res * x)%m; } y>>=1; x = (x*x)%m; } return res;}
static vector<bool> isPrime(1ll*(1e6+10),1);
static vi primes, lp(1ll*(1e6+10), 0), hp(1ll*(1e6+10), 0);
void calc_sieve() {
    isPrime[0]=isPrime[1]=false;

    vi temp;
    for(ll i=2; i<=1ll*(1e6+10); ++i) {
        if(isPrime[i]==true) {
            temp.pb(i);
            lp[i] = hp[i] = i; //prime num hi low = num itself
            for(ll j=2*i; j<=1ll*(1e6+10); j += i) {
                isPrime[j] = false;

                hp[j] = i; // highest prime which can divide n;
                if(lp[j] == 0) lp[j] = i; // lowest prime which can divide n;
            }
        }
    }
    primes = temp;
}

// bool isPrime(ll n) 
// { 
//     // Corner cases 
//     if (n <= 1)  return false; 
//     if (n <= 3)  return true; 
   
//     // This is checked so that we can skip  
//     // middle five numbers in below loop 
//     if (n%2 == 0 || n%3 == 0) return false; 
   
//     for (ll i=5; i*i<=n; i=i+6) 
//         if (n%i == 0 || n%(i+2) == 0) 
//            return false; 
   
//     return true; 
// } 
const int N = 5e5+10;
ll pow2[N];
ll sqr[N];
void solve() {
    ll n; cin >> n;

    ll res = 0;

    cf(i,1,n) {
        ll val = ((i-1)%M * (i-1)%M)%M;
        ll times = n-i+1;

        res = (res + (((val * times)%M) * bin_exp(2, n-i))%M)%M;
    }

    res = (res*2)%M;

    cout << res << endl;
}   

int main() {
    fio;

    pow2[0] = 1;
    cf(i,1,N-1) {
        pow2[i] = (pow2[i-1] * 2)%M;
    }
    cf(i,1,N-1) {
        ll addon = ((i%M)*(i%M))%M;
        sqr[i] = (sqr[i-1] + addon)%M;
    }
    // calc_sieve();
    int testcases=1;
    cin >> testcases;
    while(testcases--) solve();


    return 0;
}
 

/*
    Things to take care of :-
    1.  If a[i] goes to 10^9, you only need to check for primes till sqrt(10^9) i.e 31623;
    2.  Use sqrtl()
    3.  For uniques in vector v ----> v.erase(unique(all(v)), v.end())
    4.  Forward and Reverse Thinking....
    6.  For checking parity ----> __builtin_parity(x);
    7.  For counting set bits ----> __builtin_popcount(x);
    8.  For counting leading zeros ----> __builtin_clz(x);
    9.  For counting trailing zeros ----> __builtin_ctz(x);
    10. int log(long long x) return (64 - __builtin_clzll(x) - 1);
    11. use it for recursive lambda function --> function< ->return_type<- (ll, ll)> dfs = [&](ll u, ll parent)  {}
    12. Fenwick/Segment Tree with Coordinate Compression, Dynamic Seg tree.
*/