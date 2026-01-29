#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll xhc, yhc;
    cin >> xhc >> yhc;
    ll disthc[32][3][3];
    pair<int, int> parhc[32][3][3];
    pair<int, int> valhc[32][3][3];
    
    for(int i=0; i<32; ++i)
        for(int j=0; j<3; ++j)
            for(int k=0; k<3; ++k) disthc[i][j][k] = 2e18;

    disthc[31][0][0] = 0;

    for (int i = 30; i >= 0; --i) {
        for (int sx = 0; sx < 3; ++sx) {
            for (int sy = 0; sy < 3; ++sy) {
                if (disthc[i+1][sx][sy] >= 2e18) continue;

                int xb = (xhc >> i) & 1, yb = (yhc >> i) & 1;
                int choices[3][2] = {{0,0}, {0,1}, {1,0}};

                for (auto& c : choices) {
                    int pbhc = c[0], qbhc = c[1];
                    int nsx = sx, nsy = sy;
                    ll dhc = 0;

                    auto calc = [&](int& state, int b, int target_b, int bit) {
                        if (state == 0) {
                            if (b < target_b) state = 1;
                            else if (b > target_b) state = 2;
                        }
                        if (state == 1) dhc += (ll)(target_b - b) << bit;
                        else if (state == 2) dhc += (ll)(b - target_b) << bit;
                    };

                    int tsx = sx, tsy = sy;
                    calc(tsx, pbhc, xb, i);
                    calc(tsy, qbhc, yb, i);

                    if (disthc[i+1][sx][sy] + dhc < disthc[i][tsx][tsy]) {
                        disthc[i][tsx][tsy] = disthc[i+1][sx][sy] + dhc;
                        parhc[i][tsx][tsy] = {sx, sy};
                        valhc[i][tsx][tsy] = {pbhc, qbhc};
                    }
                }
            }
        }
    }

    ll best = 2e18;
    int fx = 0, fy = 0;
    for(int j=0; j<3; ++j) for(int k=0; k<3; ++k) {
        if(disthc[0][j][k] < best) {
            best = disthc[0][j][k];
            fx = j; fy = k;
        }
    }

    ll rp = 0, rq = 0;
    for(int i=0; i<=30; ++i) {
        rp |= (ll)valhc[i][fx][fy].first << i;
        rq |= (ll)valhc[i][fx][fy].second << i;
        pair<int, int> pre = parhc[i][fx][fy];
        fx = pre.first; fy = pre.second;
    }
    cout << rp << " " << rq << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}