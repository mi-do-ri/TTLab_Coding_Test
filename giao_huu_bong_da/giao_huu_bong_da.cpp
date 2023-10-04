#include<bits/stdc++.h>
using namespace std;
int N, x, y;
int res[101];
int cnt;

bool check(int v, int k, int l){
    if (k == x && l == y) return false;
    return true;
}

void solution(){
    cnt++;
}

void Try(int k, int l){
    for (int v = 0; v <= 1; v++){
        if (check(v, k, l)){
            if (v == 0 && k < x){
                k++;
                if (k == x || l == y) solution();
                else Try(k, l);
                k--;
            }
            if (v == 1 && l < y){
                l++;
                if (k == x || l == y) solution();
                else Try(k, l);  
                l--;            
            }
        }
    }
}

int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> x >> y;
        cnt = 0;
        Try(0, 0);
        res[i] = cnt;
    }
    for (int i = 0; i < N; i++){
        cout << res[i] << endl;
    }
    return 0;
}