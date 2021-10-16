#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
/*
map<int,string> mp;
int consecutive_zeros(string str){
	int pairs=0,start=0;
	while(start<str.length()-1){
		if(str[start]=='0'&&str[start+1]=='0'){
			pairs++;
		}
		start++;
	}
	return pairs;
}

string transformation(string str){
	string ret="";
	for(int i=0;i<str.length();i++){
		if(str[i]=='0') ret+="10";
		else ret+="01";
	}
	return ret;
}

string DFS(string str,int start,int end){
	if(start==end) return str;
	if(mp.find(start)!=mp.end()) return DFS(mp[start],start+1,end);
	else mp[start]=DFS(transformation(str),start+1,end);
	return DFS(mp[start],start+1,end);
}

int main(){
	string start="1";
	int n;
	while(~scanf("%d",&n)){
//		cout<<DFS(start,0,n)<<endl;
		cout<<consecutive_zeros(DFS(start,0,n))<<endl;
	}
	system("pause");
	return 0;
}*/

//该题主要是找规律不是模拟...
map<int,string> mp;

string multiply(string s1,string s2){
	int carry=0,i,j;
	string str="";
	for(i=s1.length()-1,j=s2.length()-1;i>=0&&j>=0;i--,j--){
		int tmp=(s1[i]-'0')*2+(s2[j]-'0')+carry;
		carry=tmp/10;
		str+=to_string(tmp%10);
	}
	while(j>=0){
		int tmp=(s2[j]-'0')+carry;
		carry=tmp/10;
		str+=to_string(tmp%10);
		j--;
	}
	if(carry>0)
		str+=(carry+'0');
	reverse(str.begin(),str.end());
	return str;
}

string f(int n){
	string ret="";
	if(n==1) return "0";
	if(n==2) return "1";
	else{
		string s1,s2;
		if(mp.find(n-2)!=mp.end()) s1=mp[n-2];
		else{
			mp[n-2]=f(n-2);
			s1=mp[n-2];
		}
		if(mp.find(n-1)!=mp.end()) s2=mp[n-1];
		else{
			mp[n-1]=f(n-1);
			s2=mp[n-1];
		}
		ret=multiply(s1,s2);
	}
	return ret;
}

int main(){
	int n;
	mp[1]="0",mp[2]="1";
	while(~scanf("%d",&n)){
		cout<<f(n)<<endl;
	}
	system("pause");
	return 0;
}
