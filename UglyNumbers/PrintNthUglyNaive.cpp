//#include<bits/stdc++.h>
#include <algorithm>
#include <list> 
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std ;
#define ll long long 
#define ld long double
#define all(x) (x).begin() , (x).end()
#define minel *min_element(all(x)) 
#define maxel *max_element(all(x)) 
#define sz(x) (x).size() 
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define ROF(i,b,a) for(int i=a-1;i>=b;--i)
#define vi vector<int> 
#define vb vector<bool> 
#define vl vector<long long>
#define vs vector<string>
#define vc vector<char> 
#define pi pair<int,int> 
#define pll pair<ll,ll> 
#define pc pair<char,char> 
#define pic pair<int,char> 
#define f first 
#define s second 
#define str string
#define pb push_back
#define lb lower_bound
#define ub upper_bound 
#define GAROU std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr) ;
/******************************************************************************/
ll MOD = 1e9 + 7 ;
// ll MOD = 998244353 ; 
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1){res = res * a ;}a = a * a;b >>= 1;}return res;}

ll int_sqrt (ll x) {ll ans = 0;for (ll k = 1LL << 30; k != 0; k /= 2) {if ((ans + k) * (ans + k) <= x) {ans += k;}}return ans;}

int digitCount(ll n){ll cnt(0) ;while(n){cnt++ ;n /= 10 ;}return cnt ;}

bool isPrime(ll n){if(n == 1) return false ;for(ll i=2; i*i<=n; i++){if(n%i==0)return false ;}return true;}

int cuberoot(int n){double a  = floor(pow(n , 1/3.0) + 1e-6); double dx  = (n - a* a * a) / 3.0 / a / a ;return (a + dx) ;}

vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/******************************************************************************/

//神は私に力を与えます

void solve() {
	// ugly numbers : The numbers whose prime factorisation only has 
	// -> 2, 3, 5, By default 1 is an ugly number
	auto divide = [&] (int x, int a) {
		while(x % a ==0 ){
			x /= a ;
		}
		return x ;
	};
	auto check_ugly = [&](int a) {
		a = divide(a, 2) ;
		a = divide(a, 3) ;
		a = divide(a, 5) ;
		return (a == 1) ;
	};
	int N ;
	cin >> N ;
	int cnt = 1 ;
	int i = 1; 
	while(cnt < N){
		i++ ;
		if(check_ugly(i)){
			cnt++ ;
			
		}
	}
	cout << i << "\n" ;


	
}

int main() {
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    GAROU 
    int t = 1 ;
    // std::cin >> t;

    while(t--) {
        solve() ;
    }
}
