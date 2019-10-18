#include<conio.h>
#include<stdio.h>
int main()
{
 int i,j,sum=0,n;
 int d[20];
 int disk;   //loc of head
 int temp;
 int dloc;   //loc of disk in array
 printf("Enter number of location: ");
 scanf("%d",&n);
 printf("Enter position of head: ");
 scanf("%d",&disk);
 printf("Enter elements of disk queue:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&d[i]);
 }
 d[n]=disk;
 n=n+1;
 for(i=0;i<n;i++)    // sorting disk locations
 {
  for(j=i;j<n;j++)
  {
    if(d[i]>d[j])
    {
    temp=d[i];
    d[i]=d[j];
    d[j]=temp;
    }
  }
 }
 for(i=0;i<n;i++)   // to find loc of disc in array
 {
 if(disk==d[i]) { dloc=i; break;  }
 }
 for(i=dloc;i>=0;i--)
 {
 printf("%d -->",d[i]);
 }
 printf("0 -->");
 for(i=dloc+1;i<n;i++)
 {
 printf("%d-->",d[i]);
 }
 sum=disk+d[n-1];
       printf("\nTotal Movement: %d",sum);
 getch();
 return 0;
}
