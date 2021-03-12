Source Code:
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        if(i%4==0)
        {
        for(j=0;j<=n-1;j++)
        {
            
            printf("$ ");
        }
        
        }
        else
        {
            for(j=0;j<=n-1;j++)
            {
                if(j%4==0)
                printf("$ ");
                else
                printf("  ");
            }
        }
        printf("\n");
    }
}

OUTPUT:
Enter number of rows: 13
$ $ $ $ $ $ $ $ $ $ $ $ $ 
$       $       $       $ 
$       $       $       $ 
$       $       $       $ 
$ $ $ $ $ $ $ $ $ $ $ $ $ 
$       $       $       $ 
$       $       $       $ 
$       $       $       $ 
$ $ $ $ $ $ $ $ $ $ $ $ $ 
$       $       $       $ 
$       $       $       $ 
$       $       $       $ 
$ $ $ $ $ $ $ $ $ $ $ $ $ 


