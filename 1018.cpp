#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <math.h>
using namespace std;

//map<int,string> mp;
//
//string multiply(string str,int n){
//	int carry=0,index=str.length()-1;
//	while(index>=0){
//		int tmp=(str[index]-'0')*n+carry;
//		str[index]=tmp%10+'0';
//		carry=tmp/10;
//		index--;
//	}
//	if(carry>0){
//		str.insert(0,to_string(carry));
//	}
//	return str;
//}
//
//string fact(int n){
//	if(n==1) return "1";
//	else{
//		auto it=mp.find(n);
//		if(it!=mp.end()) return it->second;
//		else return multiply(fact(n-1),n);
//	}
//}
//int main(){
//	int n,tmp;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&tmp);
//		auto it=mp.find(tmp);
//		if(it!=mp.end()){
//			printf("%d\n",(it->second).size());
//		}else{
//			cout<<fact(tmp).length()<<endl;
//		}
//	}
//	return 0;
//}

int main(){
	int n,tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int len=1;
		scanf("%d",&tmp);
		double sum=1;
		for(int j=1;j<=tmp;j++) sum+=log10((double(j)));
		printf("%d\n",(int)sum);
	}
	return 0;
}
