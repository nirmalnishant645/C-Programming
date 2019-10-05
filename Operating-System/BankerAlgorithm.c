#include<stdio.h>

void main()
{
	int nR;
	int nP;
	int i;
	int max[20][20];
	int j,allocate[20][20],need[20][20],safe[20],finish[20],k,avail[20],numsafe,ssnum,l;
	printf("Enter the number of resources: ");
	scanf("%d",&nR);
	printf("Enter the number of processes: ");
	scanf("%d",&nP);
	printf("Enter the number of instances for each resources: \n");
	for(i=0;i<nR;i++)
	{
		printf("R%d ",i);
		scanf("%d",&avail[i]);
	}
	printf("\nAvailable: ");
	for(i=0;i<nR;i++)
	{
		printf(" %d ",avail[i]);
	}
	printf("\nEnter the maximum demand of each process(Max) and current resource: \n");
	for(i=0;i<nP;i++)
	{
		printf("For process P%d: \n",i);
		finish[i]=0;
		for(j=0;j<nR;j++)
		{
			printf("Maximum R%d required: ",j);
			scanf("%d",&max[i][j]);
			printf("Currently  R%d allocated: ",j);
			scanf("%d",&allocate[i][j]);			
		}
	}
	printf("Max:\n   ");
	for(i=0;i<nR;i++)
	{
		printf("R%d ",i);
	}
	printf("\n");
	for(i=0;i<nP;i++)
	{
		printf("P%d ",i);
		for(j=0;j<nR;j++)
		{
			printf(" %d ",max[i][j]);
		}
		printf("\n");
	}
	printf("Allocation:\n   ");
	for(i=0;i<nR;i++)
	{
		printf("R%d ",i);
	}
	printf("\n");
	for(i=0;i<nP;i++)
	{
		printf("P%d ",i);
		for(j=0;j<nR;j++)
		{
			printf(" %d ",allocate[i][j]);
		}
		printf("\n");
	}
	printf("Need:\n   ");
	for(i=0;i<nR;i++)
	{
		printf("R%d ",i);
	}
	printf("\n");
	for(i=0;i<nP;i++)
	{
		printf("P%d ",i);
		for(j=0;j<nR;j++)
		{
			need[i][j]=max[i][j]-allocate[i][j];
			printf(" %d ",need[i][j]);
		}
		printf("\n");
	}
	k=0;
	ssnum=0;
	l=0;
	while(1)
	{
		for(i=0;i<nP;i++)
		{
			if(finish[i]==0)
			{
				for(j=0;j<nR;j++)
				{
					if(avail[j]>=need[i][j])
					{
						
					}
					else
					{
						break;
					}
				}
				if(j==nR)
				{
					for(j=0;j<nR;j++)
					{
						avail[j]=avail[j]+allocate[i][j];
					}
					finish[i]=1;
					safe[ssnum]=i;
					ssnum++;
					l++;
				}
			}
		}
		if(k==nP)
		{
			if(l==nP)
			{
				printf("System is in Safe State with Safe Sequence: ");
				for(i=0;i<nP;i++)
				{
					printf("P%d ",safe[i]);
				}
				break;
			}
			else
			{
				printf("System is in Unsafe State");
				break;
			}
		}
		k++;
	}
}
