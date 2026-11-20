#include  <stdio.h>

int main(){
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age>18){
		printf("eligble to voting");
	}
	else{
		printf("not eligble to voting");
	}
return 0;
}