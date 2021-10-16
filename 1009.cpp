//̰���㷨
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct food{
	int javabean,fat;
	double rate;
};

bool cmp(food f1,food f2){
	return f1.rate>=f2.rate;
}

int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)&&(m!=-1&&n!=-1)){
		vector<food> fd;
		double total=0;
		for(int i=0;i<n;i++){
			food tmp;
			scanf("%d%d",&tmp.javabean,&tmp.fat);
			tmp.rate=tmp.javabean*1.0/tmp.fat;
			fd.push_back(tmp);
		}
		if(m==0||n==0){	//��������û�гԵĻ��ֿ߲�����Ϊ0������ִ�ж��Ǽ�����һ��(�����ж���ᱨ��runtime error)
			printf("0.000\n");
			continue;
		}
		sort(fd.begin(),fd.end(),cmp);
		int index=0;
		while(m>0){
			if(m>=fd[index].fat){
				total+=fd[index].javabean;
				m-=fd[index].fat;
			}else{
				total+=fd[index].rate*m;
				m=0;
			}
			index++;
		}
		printf("%.3lf\n",total);
	}
	system("pause");
	return 0;
}
