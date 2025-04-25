#include<cstdio>
int main()
{
	int a = 10;
	float b = 15.6;
	char c = 'A';
	double d = 20.5;
	char s[20];

	printf("\n %c \n %d \n %f \n %lf \n %s \n",c,a,b,d,"magesh");
	scanf("%c%s %d %f %lf %s",&c,&a,&b,&d,s);
	printf("\n %c \n %d \n %f \n %lf \n %s \n",c,a,b,d,s);


	return 0;
}	