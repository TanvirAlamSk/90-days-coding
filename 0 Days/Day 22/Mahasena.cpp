#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,l=0,u=0,ui;
	cin>>n;
	
	while(n--){
		cin>>ui;
		if(ui%2==0){
			l++;
		}else{
			u++;
		}
		
	}
	
	if(l>u){
		cout<<"READY FOR BATTLE"<<endl;
	}else{
		cout<<"NOT READY"<<endl;
	}
	
	return 0;
}


