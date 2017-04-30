#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    long long s1, a1 = 0, s2, a2 = 0;
    if (a[0] > 0){
        s1 = a[0];
        s2 = -1;
        a2 = a[0] + 1;
    }
    else if (a[0] < 0){
        s1 = 1;
        s2 = a[0];
        a1 = 1 - a[0];
    }
    else {
        s1 = 1;
        s2 = -1;
        a1 = 1;
        a2 = 1;
    }
    for (int i = 1; i < n; ++i){
        if (s1 > 0){
            if (s1 + a[i] >= 0){
                a1 += s1 + a[i] + 1;
                s1 = -1;
            }
            else
                s1 += a[i];
        }
        else {
            if (s1 + a[i] <= 0){
                a1 += 1 - s1 - a[i];
                s1 = 1;
            }
            else
                s1 += a[i];
        }
    }
    for (int i = 1; i < n; ++i){
        if (s2 > 0){
            if (s2 + a[i] >= 0){
                a2 += s2 + a[i] + 1;
                s2 = -1;
            }
            else
                s2 += a[i];
        }
        else {
            if (s2 + a[i] <= 0){
                a2 += 1 - s2 - a[i];
                s2 = 1;
            }
            else
                s2 += a[i];
        }
    }
    cout << min(a1,a2) << endl;
}