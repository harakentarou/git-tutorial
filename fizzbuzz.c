#includ <stdio.h>
int main(){

for(int i = 0;i<100; i++)
{
	if(i%3 == 0)
	printf("fizz");
	else if(i % 5 == 0)
	printf("buzz");
	else if(i % 3 == 0 && i % 5 == 0)
	printf("fizzbuzz");
	else if(i % 7 == 0)
	printf("git");
}
return 0;
}
