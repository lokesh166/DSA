#include<iostream>
#include<stack>
using namespace std;

int main() {

    string name = "lokesh prajapati" ;

    string ans = "";

    stack<char> s;

    for(int i=0; i<name.length(); i++){
        char ch = name[i];
        s.push(ch);
    }

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    cout << ans << endl;

    return 0;
}
