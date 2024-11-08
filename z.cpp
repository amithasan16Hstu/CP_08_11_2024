#include <bits/stdc++.h>
using namespace std;

long long find_gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        long long a = find_gcd(x, find_gcd(y, z));
        
        long long sum = (x / a) + (y / a) + (z / a) - 3;
        
        if (sum <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
