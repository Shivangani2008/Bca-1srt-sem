# include <stdio.h>
int main(){
	int a,b;
	printf("enter you a and b value");
	scanf("%d %d",&a,&b);
	printf("sum %d\n",a+b);
	printf("difference %d\n",a-b);
	printf("product %d\n",a*b);
	
	if(b!=0){
		printf("quotient %d\n",a/b);
		printf("reminder %d\n",a%b);
	}
	else{
		printf("cannot be perform these both operations");
	}
	return 0;
}