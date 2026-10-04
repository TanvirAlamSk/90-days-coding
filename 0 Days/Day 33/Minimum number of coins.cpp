#include<bits/stdc++.h>
using namespace std;

int solve() {
    int x;
    cin>>x;
    
    if(x%5!=0){
		cout<<-1<<endl;
	}else{
		cout<<x/10+(x%10)/5<<endl;
	}
    
    return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}
