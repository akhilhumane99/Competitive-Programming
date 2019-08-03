#include<stdio.h>

using namespace std;

int main()
{   unsigned int n;
	int i,x,y,j,temp,max_count=0,count=0;
	while(scanf("%d %d",&i,&j)!=EOF){
	x=i,y=j;
	if(i>j)
	{ temp=i;
	  i=j;
	  j=temp;
	}
	
    max_count=0;
	while(i<=j)
	{ n=i;
	count=1;
	while(n!=1)
	 {
	 	if(n%2==1)
	 	 n=3*n+1;
	 	else
	 	 n=n/2;
	 	count++;
	 }
		 if(max_count<count)
	 	  max_count=count; 
    i++;
	}
printf("%d %d %d \n",x,y,max_count);}
return 0;
}
	
	
