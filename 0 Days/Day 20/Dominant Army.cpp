#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,i,temp,k[3];
	cin>>t;
	
	while(t--){
		for(i=0;i<3;i++){
			cin>>k[i];
		}
	
		for(i=0;i<2;i++){
			if(k[i]>k[i+1]){
				temp=k[i];
				k[i]=k[i+1];
				k[i+1]=temp;
			}
		}
	
		if(k[2]>k[0]+k[1]){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	
	
	return 0;
}




