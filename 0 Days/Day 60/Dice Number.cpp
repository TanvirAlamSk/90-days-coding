#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,a=0,b=0;
	vector<int>A(3),B(3);
	
	for(i=0;i<3;i++){
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	
	for(i=0;i<3;i++){
		cin>>B[i];
	}
	sort(B.begin(),B.end());
	for(i=2;i>=0;i--){
		a=a*10+A[i];
	}
	
	for(i=2;i>=0;i--){
		b=b*10+B[i];
	}
	
	if(a>b){
		cout<<"Alice";
	}else if(a<b){
		cout<<"Bob";
	}else{
		cout<<"Tie";
	}
	cout<<endl;
	
	return 0;
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



