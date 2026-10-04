#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,p1,p2,ind=0,lead=0,sum1=0,sum2=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>p1>>p2;
		sum1+=p1,sum2+=p2;
		if(lead<abs(sum1-sum2)){
			if(sum1>sum2){
				ind=1;
			}else{
				ind=2;
			} 
			lead=abs(sum1-sum2);
		}
	}
	
	cout<<ind<<" "<<lead<<"\n";
	
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//int T;
	//cin>>T;
	//while(T--){
		solve();
	//}
	return 0;
}

