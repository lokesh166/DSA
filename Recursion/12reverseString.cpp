#include<bits/stdc++.h>

using namespace std;

void reverse(string &name, int s, int j){
// base case
	if(s > j) return;

	swap(name[s++], name[j--]);

	// recursive call
	
	reverse(name, s, j);
	
}

int main(){

	string name = "lokesh";

	cout << endl;
	reverse(name, 0, name.length()-1);
	cout << endl;

	cout << name << endl;
	return 0;
}
