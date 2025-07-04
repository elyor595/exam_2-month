#include <stdio.h>

int main () {

	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a > b && a > c){
	printf("Result: %d",a);}
	if (b > a && b > c) {
	printf("Result: %d",b);}
	if (c > a && c >b){
	printf("Result: %d",c);}
    return 0;
}
