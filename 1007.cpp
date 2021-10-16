//HDUOJ提交编译错误???wtf!?
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

struct Point{
	double x,y;
};

const int MAXN=100005;
const double MINDIS=1e10;

vector<Point> pt(MAXN),pt2;

bool cmpX(Point pta,Point ptb){
	return pta.x<ptb.x;
}

bool cmpY(Point pta,Point ptb){
	return pta.y<ptb.y;
}
//两点距离
double distance(Point pta,Point ptb){
	return sqrt(pow(abs(pta.x-ptb.x),2)+pow(abs(pta.y-ptb.y),2));
}
//分治法求最小距离，穷举法超时
double minDis(int left,int right){
	if(left>=right) return MINDIS;
	if(left+1==right) return distance(pt[left],pt[right]);
	int mid=(left+right)/2;
	double disMin=min(minDis(left,mid),minDis(mid+1,right));
	for(int i=left;i<=mid&&(pt[mid].x-pt[i].x)<disMin;i++) pt2.push_back(pt[i]);
	for(int i=mid;i<=right&&(pt[i].x-pt[mid].x)<disMin;i++) pt2.push_back(pt[i]);
	sort(pt2.begin(),pt2.end(),cmpY);
	for(int i=0;i<pt2.size();i++){
		for(int j=i+1;j<pt2.size()&&(pt2[j].y-pt2[i].y)<disMin;j++){
			if(distance(pt2[i],pt2[j])<disMin){
				disMin=distance(pt2[i],pt2[j]);
			}
		}
	}
	return disMin;
}

int main(){
	int n;
	while(true){
		scanf("%d",&n);
		if(n==0) break;
		for(int i=0;i<n;i++){
			scanf("%lf%lf",&pt[i].x,&pt[i].y);
		}
		sort(pt.begin(),pt.begin()+n,cmpX);
		printf("%.2lf\n",minDis(0,n-1)/2);
	}
	return 0;
}
