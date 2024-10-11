// https://atcoder.jp/contests/abc139/tasks/abc139_b

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    cin >> A >> B;

    double ans = (B - 1.0) / (A - 1.0);

    cout << (int)ceil(ans);

    return 0;
}