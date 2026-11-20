# include <stdio.h>
int main (){
	int a,b,c;
	printf("enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c){
		printf("all the integers equal");
	}
	else if (a>=b && a>=c){
		printf("%d the largest number",a);
	}
	else if (b>=a && b>=c){
		printf("%d the largest number",b);
	}
	else{
		printf("%d the largest number",c);
	}
	return 0;
}