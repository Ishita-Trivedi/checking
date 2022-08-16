#include <stdio.h>
int prime(int n)
{
    int check=0;// c means it's a prime
    while (n>0)
    {
        int a =n-1;
        if(n%a==0)
        {
check++;//1 means not a prime
break;
        }
        n=n-1;;
        
    }
    return check;
}
int main()
{
    int n,c;  
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
 c=prime(i);
 if(n%i==0&&(c!=0))
 printf("%d ",i);
    }
   
   
    
 //c=prime(n);
 // printf("%d",&c);
    return 0;
}