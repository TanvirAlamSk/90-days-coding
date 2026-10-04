#include<bits/stdc++.h>
using namespace std;

const int mx=100000+5;
int arr[mx];

void prime(){
	int i,j,st,ln;
	arr[2]=1;
	for(i=3;i<mx;i+=2){
		arr[i]=1;
	}
	ln=sqrt(mx);
	for(i=3;i<=ln;i+=2){
		if(arr[i]){
			st=i*2;
			for(j=i*i;j<mx;j+=st){
				arr[j]=0;
			}
		}
	}
}

void solve(){
	int n;
	cin>>n;
	
	if(arr[n]){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	prime();
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
}
