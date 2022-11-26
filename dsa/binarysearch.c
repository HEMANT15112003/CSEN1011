// binary search //
# include<stdio.h>
int main()
{
    int n,data,i,low,mid,high;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in sorted order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the data to find:");
    scanf("%d",&data);
    
    low=0;
    high=n-1;
    
    
    while(low<=high)
    {
        if(arr[mid]<data)
        {
            low=mid+1;
            mid = (low+high)/2;
        }
        else if(arr[mid]==data)
        {
            printf("%d found at %d",data,mid+1);
            break;
        }
        else
        {
            high = mid-1;
            mid = (low+high)/2;
        }
        
    }
    if(low>high)
    {
        printf("%d is not present",data);
    }
    return 0;
}