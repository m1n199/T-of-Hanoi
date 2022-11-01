#include<bits/stdc++.h>
using namespace std;  
using ll=long long;
using ld=long double;
using ull=unsigned long long;
#define FAST_IO ios::sync_with_stdio(0);cin.tie(0);
#define all(x)                         x.begin(),x.end()
#define lb(x,y)                        lower_bound(all(x),y)
#define ub(x,y)                        upper_bound(all(x),y)
#define add(x)                         accumulate(all(x),0)
#define maxe(x)                        *max_element(all(x))   // Dereference   
#define mine(x)                        *min_element(all(x)) 
#define sp                             <<" "
#define endl                           "\n"
#define mod                            1000000007
#define PI                             3.1415926536
#define set_bits                       __builtin_popcountll

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x);cerr << endl;
#else 
#define debug(x)  
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

bool isprime(ll n){if(n==1){return 0;}for(ll i=2;i*i<=n;i++){if(!(n%i)){return 0;}} return 1;}
ll min(ll a,ll b){return a<b?a:b;}
ll max(ll a,ll b){return a>b?a:b;}
ll gcd(ll a,ll b){return a? gcd(b%a,a):b;}      //0
ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}      //1
ll power(ll a,ll b){ll ans =1; while(b){ if(b&1){ans = ans * a;} a=a*a;b>>=1;} return ans;}
bool cmp(pair<int,int> a,pair<int,int> b)
{
	return a.first > b.first;
}
const int N=1e7+10;
void PROBLEM_SOLVER(){
    int arr[5];
    int sum[6] = {0};
    for(int i=0;i<5;i++){
        cin >> arr[i];
        sum[i+1]=arr[i]+sum[i];
    }
    debug(arr)
    for(int i=1;i<=5;i++){
        cout<<sum[i] << endl;
    }
 }
   
    int main() {
        FAST_IO
    #ifndef ONLINE_JUDGE  
           freopen("Error.txt","w",stderr); 
    #endif  
        // freopen("input.txt","r",stdin); 
        // freopen("output.txt","w",stdout);
        // cout << fixed << setprecision(10);
        // int t;cin>>t;while(t--)
        PROBLEM_SOLVER();
}