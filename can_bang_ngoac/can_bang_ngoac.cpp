#include<bits/stdc++.h>
using namespace std;
int N;
string t;
bool res[101];

bool check(string t){
    int n = t.length();
    stack<char> s;
    for (int i = 0; i < n; i++){
        if (s.empty()){
            s.push(t[i]);
        }
        else if ((s.top() == '(' && t[i] == ')') ||
                 (s.top() == '[' && t[i] == ']') || 
                 (s.top() == '{' && t[i] == '}')) {
                    s.pop();
                 }
        else s.push(t[i]);        
    }
    if (s.empty()) return true;
    return false;
}

int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> t;
        res[i] = check(t);
    }

    for (int i = 0; i < N; i++){
        if (res[i] == 0) cout << "false" << endl;
        else cout << "true" << endl;
    }
    
    return 0;
}