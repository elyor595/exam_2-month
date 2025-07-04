#include <stdio.h>

int main (){
	int  a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	while (a < b){
	if (a % 7==0)
	printf ("%d  ",a);
	a++;
	}
  return 0;
}
