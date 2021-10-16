#include <iostream>
#include <string>
using namespace std;

int digitSum(string str){
	int sum=10;
	while(sum>=10){
		sum=0;
		for(int i=0;i<str.length();i++){
			sum+=str[i]-'0';
		}
		str=to_string(sum);
	}
	return sum;
}

int digitalRoot(string str){
	int sum=10;
	if(str.length()==1) return str[0]-'0';
	while(sum>=10){
		sum=digitSum(str);
		str=to_string(sum);
	}
	return sum;
}

int main(){
	string str;
	while(getline(cin,str)&&str!="0"){
		printf("%d\n",digitalRoot(str));
	}
	system("pause");
	return 0;
}
