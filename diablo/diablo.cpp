#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, d, k, c;
    cin >> m >> d >> k >> c;
    int sum = 0;
    int x = d;

    if(m == 0 || k == 0) cout << '0';
    if (d <= k) {
        cout << "-1";
        return 0;
    } 

    while(m > 0){
        // check phát cuối
        if (m == 1 && d - k <= 0) {
            break;
        }
        if (d - k > 0) {
            m -= 1;
            d -= k;
        }
        else {
            sum += c;
            d = x;
        }
    }

    cout << sum;
    return 0;
}