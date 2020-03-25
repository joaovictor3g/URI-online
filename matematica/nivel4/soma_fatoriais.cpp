#include <iostream>

using namespace std;

int main() {
    long long unsigned int m = 0, n = 0;

    long long unsigned int res1 = 1, res2 = 1, res_final;

    while((cin >> m && cin >> n) != EOF) {
        for(int i = 1; i <= m; i++)
            res1*=i;
        for(int i = 1; i <= n; i++)
            res2*=i;
        res_final = res1+res2;
        cout << res_final << endl;
        res1 = 1, res2 = 1;
    }


    return 0;
}
