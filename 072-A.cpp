#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b,c;
    cin >> a >> b >> c;
    string r;
    r.push_back(a[0]-'a'+'A');
    r.push_back(b[0]-'a'+'A');
    r.push_back(c[0]-'a'+'A');
    cout << r << endl;
}
