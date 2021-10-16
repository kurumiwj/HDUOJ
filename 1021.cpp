#include <iostream>
#include <map>
using namespace std;

typedef long long int ll;
map<int,ll> mp;
ll fib(int n){
	if(n==0)
		return mp[0];
	else if(n==1)
		return mp[1];
	else{
		if(mp.find(n-1)!=mp.end()&&mp.find(n-2)!=mp.end()){
			mp[n]=mp[n-1]+mp[n-2];
			return mp[n];
		}else if(mp.find(n-1)!=mp.end()){
			mp[n-2]=fib(n-2);
			mp[n]=mp[n-1]+mp[n-2];
			return mp[n];
		}else{
			mp[n-1]=fib(n-1);
			mp[n]=mp[n-1]+mp[n-2];
			return mp[n];
		}
	}
}

int main(){
	int n;
	mp[0]=7,mp[1]=11;
	while(~scanf("%d",&n)){
		if((n-2)%4==0) printf("yes\n");
		else printf("no\n");
	}
	system("pause");
	return 0;
}
