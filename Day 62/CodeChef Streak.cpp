#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+5;

void solve(){
	int n,i,a=0,o=0,ma=0,mo=0,ui;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui==0){
			mo=max(mo,o);
			o=0;
		}else{
			o++;
		}
	}
	mo=max(mo,o);
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui==0){
			ma=max(ma,a);
			a=0;
		}else{
			a++;
		}
	}
	ma=max(ma,a);
	if(ma>mo){
		cout<<"Addy\n";
	}else if(ma<mo){
		cout<<"Om\n";
	}else{
		cout<<"Draw\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
}



