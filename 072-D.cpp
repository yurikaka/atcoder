#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long x, y;
    cin >> x;
    cin >> y;
    if (abs(x-y) < 2)
        cout << "Brown" << endl;
    else
        cout << "Alice" << endl;
}