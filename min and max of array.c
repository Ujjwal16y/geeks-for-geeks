
#include<stdio.h>
int main()
{
 int n;
 printf("enter the no. elements");
 scanf("%d",&n);
  int a[n];
  printf("enter elements");
  for(int i=0;i<n;i++)
  {

  scanf("%d",&a[i]);

   }
   int max=a[0];
   int min=a[0];
   for(int i=0;i<n;i++)
   {
     if(min>a[i])
     min=a[i];
     if(max<a[i])
     max=a[i];
   }
   printf("max no. is %d and min no.is %d",max,min);


}
