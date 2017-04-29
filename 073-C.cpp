#include <iostream>
#include <string>

using namespace std;

int main() {
    long long n,T;
    cin >> n >> T;
    long long t[n];
    for (int i = 0; i < n; ++i)
        cin >> t[i];
    long long sum = 0, start = 0, time = T;
    for (int i = 0; i < n; ++i){
        if (t[i] > time){
            sum += time - start;
            start = t[i];
            time = start + T;
        }
        else {
            time = t[i] + T;
        }
    }
    sum += time -start;
    cout << sum << endl;
}