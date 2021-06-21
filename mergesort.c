#include<stdio.h>
void mergesort();
void merge();
void main()
{
    int n,i;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter size of an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    mergesort(a,0,n-1);
    printf("Sorted elements are:\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    }
    void mergesort(int a[],int first,int last)
    {
        int mid;
        if(first<last)
    
    mid=(first+last)/2;
    mergesort(a,first,mid);
    mergesort(a,mid+1,last);
    merge(a,first,mid,last);
}
void merge(int a[],int first,int mid,int last)
{
    int i,j,k;
    int n1=mid-first+1;
    int n2 = last-mid;
    int l[30],r[30];
    for(i=0;i<n1;i++)
    {
        l[i]=a[first+1];
    }
    for(j=0;j<n2;j++)
    {
        r[j] = a[mid+1+j];
        i=0;
        j=0;
        k=first;
        while(i<n1 && j<n2)
        {
            if(l[i]<=r[j])
            {
                a[k]=l[i];
                i++;
            }
            else
            {
                a[k]=r[j];
                j++;
            }
            k++;
            
        }
        while(i<n1)
        {
            a[k]=l[i];
            i++;
            j++;
        }
        while(i<n1)
        {
            a[k]=l[j];
            j++;
            k++;
        }
    }
}

}