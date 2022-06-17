#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int cnt = 0;
    int res = 0;
    cin >> N>>K;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cnt++;
            if (cnt == K) {
                res = i;
                break;
            }
            else {
                res = 0;
            }
        }
    }
    cout << res << "\n";
}
