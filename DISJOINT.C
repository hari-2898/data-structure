#include<stdio.h>
#include<stdlib.h>
void main()
{
 int arr1[30],i,n,a,b,temp,arr2[30],ch;
 clrscr();
 printf("\n 1.creat");
 printf("\n 2.union");
 printf("\n 3.find");
 printf("\n 4.exit");
 while(1)
 {
  printf("\n enter the choise");
  scanf("%d",ch);
  switch(ch)
  {
   case 1://create set
   printf("enter no.of elements in set:");
   scanf("%d",&n);
   printf("enter elements in set");
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr1[i]);
   }
   break;
   case 2://union
   printf("enter the index of elements(2 index)which are to be unated(union):\n");
   scanf("%d",&a,&b);
   temp=arr2[b];
   for(i=0;i<n;i++)
   {
   if(arr2[i]==temp)
   arr2[i]=arr2[b];
   }
   printf("\n elements stored after union\n:");
   for(i=0;i<n;i++)
   {
    printf("%d\t\t%d\n",arr1[i],arr2[i]);
    }
    printf("\n elements have been succesfully unated \n");
    break;
    case 3: //find
    printf("\n enter the index of elements whose connection is to be checked(find operation:\n)",a,b);
    scanf("%d%d",&a,&b);
    if(arr2[a]==arr2[b])
    printf("elements at index of%d%d are connected\n:",a,b);
    else
    printf("\n elements at indices%d&%d are not connected \n",a,b);
    break;
    case 4: // exit
    exit(0);
    break;
    default:
       printf("\n wrong choice,please select a valid choice");
       break;
       }
       }
 }
