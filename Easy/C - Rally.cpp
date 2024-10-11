// https://atcoder.jp/contests/abc156/tasks/abc156_c

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> V(N, 0);

    int mx = INT_MIN;
    int mn = INT_MAX;
    int ans = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
        mx = max(V[i], mx);
        mn = min(V[i], mn);
    }

    for (int P = mn; P <= mx; P++)
    {
        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            sum += (V[i] - P) * (V[i] - P);
        }

        ans = min(ans, sum);
    }

    cout << ans;

    return 0;
}