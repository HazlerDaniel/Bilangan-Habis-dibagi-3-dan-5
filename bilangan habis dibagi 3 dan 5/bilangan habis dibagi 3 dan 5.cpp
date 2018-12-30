#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	printf("memeriksa suatu bilangan habis dibagi 5 dan 3\n");
	printf("-------------------------\n");
	printf("masukan suatu bilangan :"); scanf("%d",&x);
	if(x%3==0 && x%5==0)
	printf("%d merupakan bilangan habis dibagi 5 dan 3");
	else{
		printf("%d tidak habis dibagi 5 dan 3");
		}
		getch();
}
