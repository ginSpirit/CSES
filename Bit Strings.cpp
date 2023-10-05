#include <bits/stdc++.h>
#include <initializer_list>
#include <scoped_allocator>
#include <system_error>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long long int int64;
#define input(v) for(auto &i : v) cin >> i
#define line(x) getline(cin, x)
#define endl "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()


const int MOD = 1000000007;
int power(int base, int exp) {
    int result = 1;
    while(exp>0) {
        if(exp%2==1) {
            result = (1LL*result*base)%MOD;
        }
        base = (1LL*base*base)%MOD;
        exp/=2;
    }
    return result;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    cout << power(2, n) << endl;
    return (EXIT_SUCCESS);
}
