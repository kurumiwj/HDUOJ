#include <iostream>
#include <string>
using namespace std;

string encoding(string str){
	string ret="";
	int start=0,end=0,cnt=1;
	while(end!=str.length()){
		end+=1;
		if(str[end]==str[start]){
			cnt++;
		}else{
			if(cnt==1) ret+=str[start];
			else ret+=to_string(cnt)+str[start];
			cnt=1;
			start=end;
		}
	}
	return ret;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		cout<<encoding(str)<<endl;
	}
	system("pause");
	return 0;
}
