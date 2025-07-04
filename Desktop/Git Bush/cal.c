#include  <stdio.h>

int main (){

	int a,b,c;
	char belgi;
	scanf("%d",&a);
	scanf(" %c",&belgi);
	scanf("%d",&b);
	switch (belgi){
	case '+':
	c = a +b;
	printf("%d + %d = %d\n",a,b,c);break;
	case '-':
	c = a - b;
        printf("%d - %d = %d\n",a,b,c);break;
	case '*':
	c = a * b;
        printf("%d * %d = %d\n",a,b,c);break;
	case '/':
	c = a / b;
        printf("%d / %d = %d\n",a,b,c);break;
	}
  return 0;
}
