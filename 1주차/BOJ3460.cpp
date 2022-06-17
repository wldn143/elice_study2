#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while (T--) {
        string res;
        cin >> n;
        int sq = 0;
        while (1) {
            if (pow(2, sq)>=n) {
                break;
           }
            sq++;
        }
        for (int i = sq; i >= 0; --i) {
            int bin = n >> i & 1;
            res += to_string(bin);
        }
        reverse(res.begin(), res.end());
        for (int i = 0; i <res.length(); i++) {
            if (res[i] == '1') {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}
