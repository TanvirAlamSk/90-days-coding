#include<bits/stdc++.h>
using namespace std;


int solve() {
	int count=0;
    long long n;
    cin>>n;
    
    while(n!=0){
		count+=(n%2);
		n=n/2;
	}
    if(count%2==0){
		cout<<"EVEN";
	}else{
		cout<<"ODD";
	}
	cout<<endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    
    while(T--){
        solve();
    }

    return 0;
}


