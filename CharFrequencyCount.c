#include<stdio.h>
int main()
{
    char a[20];
	int b[20];
	int i,j,c,count=0;

    puts("Enter the String");
    gets(a);
    for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			a[count]=a[i];
			count++;
		}
		
	}
	a[count]='\0';
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=-1;
	}
	for(i=0;a[i]!='\0';i++)
	{
		c=1;
		for(j=i+1;a[j]!='\0';j++)
		{
		  if(a[i]==a[j])
		  {
		  	c++;
		  	b[j]=0;
		  }	
		}
		if(b[i]!=0)
		b[i]=c;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(b[i]!=0)
		{
			printf("%c--->%d\n",a[i],b[i]);
		}
	}
	
}
