#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,w,p,k;
	cin>>t;
	
	while(t--){
		cin>>w>>p>>k;
		
		if(w>k){
			cout<<k*2<<endl;
		}else{
			cout<<w*2+(k-w)<<endl;
		}
		
	}
	
	return 0;
}




