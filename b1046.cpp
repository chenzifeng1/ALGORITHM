#include <cstdio>

int main(){
	int t=0,i=0;
	int a=0,b=0;
	scanf("%d",&t);
	while(t--){
		int a1,a2,b1,b2;
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		if(a2==(a1+b1)){
			if(b2!=(a1+b1)){
				b++;
				i++;
			}
		}else{
			if(b2==(a1+b1)){
				a++;
				i++;
			}
		}
	}
	printf("%d %d\n",a,b);
	return 0;
}