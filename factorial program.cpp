# include <stdio.h>
int  main (){
	int n;
	long int fact=1;
	printf("enter your number");
	scanf("%d",&n);
for(int i=1;i<=n;i++){
	fact=fact*i;
}	
printf("%ld",fact);
return 0;
	
}