#include<bits/stdc++.h>
using namespace std;

int main (){
	string st;
	char ch;
	cin>>st;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(st[i]>st[j]){
				ch=st[i];
				st[i]=st[j];
				st[j]=ch;
			}
		}
	}
	
	if("act"==st){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	return 0;
}


