#include<stdio.h>
int main(){
int a[100],n,l,mid,num,flag=0;
printf("enter limit..");
scanf("%d",&n);
printf("enter n element...");
for(int i=0;i<l;i++){
scanf("%d",&a[i]);
}
printf("enter num for search.....");
scanf("%d",&num);
int top=0,bottom=n-1;
while(top<=bottom){
mid=top+bottom/2;
if(num > a[mid]){
    if(a[mid]%2==0){
        flag=1;
    }
    else{
        bottom=mid-1;
    }
}

}
if(flag==1){
    printf("num is even....");
}
else{
    printf("num is odd");
}
888888
return 0;
}