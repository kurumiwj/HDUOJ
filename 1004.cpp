#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int n;
	while(true){
		int count=0;
		string result;
		map<string,int> mp;
		scanf("%d",&n);
		if(n==0) break;
		for(int i=0;i<n;i++){
			string tmp;
			cin>>tmp;
			mp[tmp]++;
			if(mp[tmp]>count){
				count=mp[tmp];
				result=tmp;
			}
		}
		cout<<result<<endl;
	}
}
