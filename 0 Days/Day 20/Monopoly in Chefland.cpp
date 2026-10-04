#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,r[3],i,temp;
	cin>>t;
	
	while(t--){
		
		for(i=0;i<3;i++){
			cin>>r[i];
		}
		
		for(i=0;i<2;i++){
			if(r[i]>r[i+1]){
				temp=r[i];
				r[i]=r[i+1];
				r[i+1]=temp;
			}
		}
		if(r[2]>r[1]+r[0]){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		
	}
	
	return 0;
}

