#include<stdio.h>
#define size 3
struct pf
{
	int pno,cnt;
}frames[size]={{0,0},{0,0},{0,0}};

int n,req[30];

int pgfd(int pno)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(frames[i].pno==pno)
			return i;
	}
	return -1;
}

int getlrupg()
{
	int i,min=0;
	for(i=0;i<n;i++)
	{
		if(frames[i].cnt<frames[min].cnt)
			min=i;
	}
	return min;
}

main()
{
	int pfc=0,pno,i,j=0,r,k;
	if(n<=size)
	{
		printf("Enter the total number of frames: ");
		scanf("%d",&n);
		printf("Enter the total number of pages: ");
		scanf("%d",&r);
		printf("Enter the reference string:\n");
		for(i=0;i<r;i++)
		{
      printf("[%d]: ",i+1);
			scanf("%d",&req[i]);
		}
		for(i=0;i<r;i++)
		{
			pno=req[i];
			j=pgfd(pno);
			if(j!=-1)
			{
				printf("\n%d\t\t",pno);
				for(k=0;k<n;k++)
					printf("%4d",frames[k].pno);
				frames[j].cnt=i;
			}
			else
			{
				j=getlrupg();
				frames[j].pno=pno;
				frames[j].cnt=i;
				printf("\n%d\t\t",pno);
				for(k=0;k<n;k++)
					printf("%4d",frames[k].pno);
				pfc++;
			}
		}

		printf("\nTotal number of page faults is: %d",pfc);
	}
}
