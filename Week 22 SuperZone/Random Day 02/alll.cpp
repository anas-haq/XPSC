#include <iostream>
#include <vector>

using namespace std;

void solve(int case_num) {
    long long n;
    int m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    cout << "Case " << case_num << ":";

    for (int i = 0; i < m; i++) {
        long long count = n / m;
        long long remainder = n % m;

        if (a[i] <= remainder) {
            count++;
        }

        cout << " " << count;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int case_num = 1; case_num <= t; case_num++) {
        solve(case_num);
    }

    return 0;
}