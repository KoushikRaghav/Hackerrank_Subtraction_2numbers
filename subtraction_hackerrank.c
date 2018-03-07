#include<stdio.h>
int count(int a,int b)
{
if(a%b==0)
{
return a/b;
}
return(a/b+ count(b,a%b));
}
int main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c=count(a,b);
printf("%d",c);
return 0;
}