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
 
string spaceRemove(string &s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}
void missing_elements(const vector<int> &a, int n) {
    vector<bool> exist(n+1, false);
    for (int i:a) {
        exist[i] = true;
    }
    for (int i=1; i<=n; i++) {
        if(!exist[i]) {
            cout << i << " ";
        }
    }
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=1; i<n; i++) {
        cin >> a[i];
    }
    missing_elements(a, n);
    return (EXIT_SUCCESS);
