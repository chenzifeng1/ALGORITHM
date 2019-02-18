#include <cstdio>
int main(){
	int began,end;
	int dev;
	scanf("%d%d",&began,&end);
	if (began<=end){
		dev = end-began;
		dev = dev/100;
		int hour = dev%3600;
		dev-=(hour*3600);
		int min = dev%60;
		dev-=(min*60);
		int sec = dev;
		printf("%d:%d:%d\n",hour,min,sec);
	}
}