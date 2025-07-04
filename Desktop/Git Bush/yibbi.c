 #include <stdio.h>
 int main (){

        int a,b=1;
        scanf("%d",&a);
	while(a > b){
	if (a % b ==0)
	printf("%d,  ",b);
	b++;
}
	printf("%d",b);
         return 0;
}