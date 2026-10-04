#include<bits/stdc++.h>
using namespace std;

void solve(){
	char c;
	cin>>c;
	
	if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		cout<<"Vowel"<<endl;
	}else{
		cout<<"Consonant"<<endl;
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	//cin>>T;
	
	while(T--){
		solve();
	}
}

