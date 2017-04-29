#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int m = max(a,b), n = min(a,b);
    int q = m%n;
    while (q){
        m = n;
        n = q;
        q = m%n;
    }
    if (c%n == 0){
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}