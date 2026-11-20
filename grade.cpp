# include <stdio.h>
int main(){
	int marks;
printf("enter your marks");
scanf("%d",&marks);
if(marks>=35){
	printf("grade C");
}
else if(marks>=50){
	printf("grade B");
}
else if(marks>=80){
	printf("grade A");
  }
  else{
  	printf("fail");
  }
  return 0;
}