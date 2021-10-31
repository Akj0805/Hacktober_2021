#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, temp;
    int *ptr;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (ptr[j]>ptr[j+1])
            {
               temp=ptr[j];
               ptr[j]=ptr[j+1];
               ptr[j+1]=temp;
            }
            
        }
        
    }
        printf("SORTED ARRAY:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    
    return 0;
}
