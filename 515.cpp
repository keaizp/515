#include<stdio.h>
void main()
{
char str[50],ch;
int i=0,j,count[123]={0};
while((str[i]=getchar())!='\n')
{
for(j=65;j<123;j++)
if(str[i]==j)count[j]++;
i++;
}
scanf("%c",&ch);
printf("%d\n",count[ch]);

}