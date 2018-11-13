#include<stdio.h>
#include<stdlib.h>
int main()
{
   int size,i,pos=-1,val;
   printf("enter size of array");
   scanf("%d",&size);
   int a[20];
   for(i=0;i<size;i++)
   {
       printf("enter the array");
       scanf("%d",&a[i]);

   }
   printf("enter value to be searched: ");
   scanf("%d",&val);
   for(i=0;i<size;i++)
   {
       if(a[i]==val)
       {
           pos=i;
       }
   }
   if(pos==-1)
   {
       printf("not found");
   }
   else
    {printf("found at %d",pos);}
return 0;
}
