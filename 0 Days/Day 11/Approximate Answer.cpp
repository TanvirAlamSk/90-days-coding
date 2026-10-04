#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,k;
	cin>>x>>y>>k;
	
	if(abs(x-y)>k){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
	return 0;
}
