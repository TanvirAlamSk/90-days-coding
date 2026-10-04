#include<bits/stdc++.h>
using namespace std;

int main(){
	int f1,f2,p1,p2;
	cin>>f1>>p1>>f2>>p2;
	
	if(abs(f1-p1)==abs(f2-p2)){
		cout<<"Both"<<endl;
	}else if(abs(f1-p1)>abs(f2-p2)){
		cout<<"Second"<<endl;
	}else {
		cout<<"First"<<endl;
	}
	
	return 0;
}

