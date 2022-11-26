//linear search//
# include<stdio.h>
int main()
{
int n,data,i,flag=0;
printf("enter the size :");
scanf("%d",&n);
int arr[n];
printf("enter the elements in araay:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the data point to find:");
scanf("%d",&data);
for(i=0;i<n-1;i++)
{
    if(arr[i]==data)
    {
        printf("data found at %d",i);
        flag=1;
        break;
    }

}
if(flag==0)
{
    printf("%d not found",data);
}

}
