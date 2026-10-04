#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,o=0,e=0,i;
	cin>>t;
	
	while(t--){
		cin>>n;
		
		for(i=1;i<=n;i++){
			if(n%i==0){
				if(i%2==0){
					e++;
				}else{
					o++;
				}
			}
		}
		
		cout<<o<<" "<<e<<endl;
		e=0,o=0;
	}
	
	return 0;
}



