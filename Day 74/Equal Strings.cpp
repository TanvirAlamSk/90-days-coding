#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n;
	string s1,s2;
	cin>>n>>s1>>s2;
	
	set<char>st;
	
	for(i=0;i<n;i++){
		if(s1[i]!=s2[i]){
			st.insert(s2[i]);
		}
	}
	cout<<st.size()<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}




