#include <cstdio>

int main(){
	long a,b,pa,pb;
	int n1=0,n2=0;
	scanf("%ld%ld%ld%ld",&a,&pa,&b,&pb);
	while(a>0){
		if(pa==(a%10)){
			n1=n1*10+pa;
		}
		a=a/10;
	}
	while(b>0){
		if(pb==(b%10)){
			n2=n2*10+pb;
		}
		b=b/10;
	}
		
	printf("%d",(n1+n2));

} 