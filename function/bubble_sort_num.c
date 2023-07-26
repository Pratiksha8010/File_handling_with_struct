#include<stdio.h>
int main()
{
int n,num,a[100],s;
int sort(int a[100],int n,int num);
printf("enter limit.....");
scanf("%d",&n);
printf("enter n elements..");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
s=sort(a,n,num);
printf("sorted array....\n");
for(int s=0;s<n;s++){
printf("%d",a[s]);
}
return 0;
}










int sort(int a[100],int n,int num){
   int j,p,q,tem;
for(int j=0;j<n;j++){
for(int p=0;p<n;p++)
if(a[p]>a[p+1]){
   tem=a[p];
   a[p]=a[p+1];
   a[p+1]=tem;
   }
}
return a[p];

}


int main()
{
int n,num,a[100],s;
printf("enter limit.....");
scanf("%d",&n);
printf("enter n elements..");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
s=sort(a,n,num);
printf("sorted array....\n");
for(int s=0;s<n;s++){
printf("%d",a[s]);
}
s=sort(a,n,num);
return 0;
}




