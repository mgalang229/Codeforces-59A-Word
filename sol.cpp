#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int l = 0, u = 0;
	for(int i = 0; i < (int)s.size(); i++){
		if(islower(s[i])){
			l++;
		} else{
			u++;
		}
	}
	if(l == u || l > u){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	} else{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	cout << s << "\n";
	return 0;
}
