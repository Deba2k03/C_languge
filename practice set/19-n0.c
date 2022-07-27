#include <stdio.h>

int main()
{
    
    int x,y,z;            //Array Size Declaration
    printf("\nEnter the size of first array ");
    scanf("%d",&x);
    printf("\nEnter the size of second array ");
    scanf("%d",&y);
    
    z=x+y;
    printf("\nEnter the sorted array elements");
    int a[x],b[y],c[z];     //Array Declaration
    for(int i=0;i<x;i++)      //Array Initialized
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=x;
    printf("\nEnter the sorted array elements");
    for(int i=0;i<y;i++)      //Array Initialized
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<z;i++)
    printf("%d ",c[i]);        //Print the merged array
    
    printf("\nAfter sorting...\n");
    for(int i=0;i<z;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<z ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }   
    
    for(int i=0 ; i<z; i++)       //Print the sorted Array 
    {
        printf(" %d ",c[i]);
    }
    return 0;   
}