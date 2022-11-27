//selection sort//
# include<stdio.h>
int main()
{
int n,i,j,min,temp;
printf("enter the size:");
scanf("%d",&n);
int arr[n];
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
    int min=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min])
        {
            min = j;
        }
    }
    if(min!=i)
    {
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
}
printf("sorted array:\n");
for(i=0;i<n;i++)
{
    printf(" %d ",arr[i]);
}
}