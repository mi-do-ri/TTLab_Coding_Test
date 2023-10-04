#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, d, k, c;
    cin >> m >> d >> k >> c;
    int sum = 0;
    int x = d;

    if (d <= k) return -1;

    while(m > 0){
        if (d - k > 0) {
            m -= 1;
            d -= k;
        }
        else if (d - k == 0 && m == 1) m -= 1;
        else {
            sum += c;
            d = x;
        }
    }

    cout << sum;
    return 0;
}