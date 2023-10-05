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
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v(n);
    input(v);
    set <int> distinct;
    for (int i : v) {
        distinct.insert(i);
    }
    vector<int> distinct_array(distinct.begin(), distinct.end());
    cout << distinct_array.size() << endl;
    return (EXIT_SUCCESS);
}
