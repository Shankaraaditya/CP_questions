#include <bits/stdc++.h>

using namespace std;

int q;
string s, t, p;
int cnt[30];

int main() {
    cin >> q;
    for(int iq = 0; iq < q; ++iq){
        cin >> s >> t >> p;
        memset(cnt, 0, sizeof cnt);
        for(auto x : p)
            ++cnt[x - 'a'];

        bool ok = true;
        int is = 0, it = 0;
        while(is < s.size()){
            if(it == t.size()){
                ok = false;
                break;
            }
            
            if(s[is] == t[it]){
                ++is, ++it;
                continue;
            }
            
            --cnt[t[it] - 'a'];
            ++it;
        }
        while(it < t.size()){
            --cnt[t[it] - 'a'];
            ++it;
        }
        
        if(*min_element(cnt, cnt + 30) < 0)
            ok = false;

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }        
    return 0;
}                                 





