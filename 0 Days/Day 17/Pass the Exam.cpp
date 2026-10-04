#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b,c;
	cin>>t;
	
	while(t--){
		cin>>a>>b>>c;
		
		if(a+b+c>99 && a>9 && b>9 && c>9){
			cout<<"PASS"<<endl;
		}else{
			cout<<"FAIL"<<endl;
		}
	}
	
	
	return 0;
}

