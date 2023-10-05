#include<bits/stdc++.h>
using namespace std;

bool check(string t){

    if (t == "") return true;

    int n = t.length();
    stack<char> s; 
    map<char, char> m = {{'(', ')'}, {'[', ']'}, {'{', '}'}};

    for(int i = 0; i < n; i++){
        if(t[i] == '(' || t[i] == '[' || t[i] == '{'){ 
            s.push(t[i]);
        }
        else if (t[i] == ']' || t[i] == ')' || t[i] == '}'){ 
            if(s.empty()){
                return false;
            }
            else{
                char top = s.top();
                if(t[i] == m[top]){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
    }

    if (s.empty()) return true;
    return false;
}

int main(){

    int N;
    vector <string> input;
    cin >> N;
    
    cin.ignore(32767, '\n');
    for (int i = 0; i < N; i++){
        string t;
        getline(cin, t);
        input.push_back(t);
    }

    for (int i = 0; i < N; i++){
        if(check(input[i])){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
}