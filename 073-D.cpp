#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <memory.h>

using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    long long v[n][2];
    for (int i = 0; i < n; ++i){
        cin >> v[i][0] >> v[i][1];
    }
    map<long long,long long> dp;
    dp[0] = 0;
    for (int i = 0; i < n; ++i)
        for(auto j = dp.rbegin(); j != dp.rend(); ++j){
            if (dp.count(v[i][0] + j->first) == 0 && v[i][0] + j->first <= w)
                dp[v[i][0]+j->first] = j->second + v[i][1];
            else if (v[i][0] + j->first <= w)
                dp[v[i][0]+j->first] = max(j->second + v[i][1],dp[v[i][0]+j->first]);
        }
    long long r = 0;
    for (auto i : dp)
        r = max(r,i.second);
    cout << r << endl;
}