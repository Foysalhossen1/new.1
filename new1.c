#include<stdio.h>
int main(){
int a[5],i,event_sum=0,odd_sum=0;
printf("Enter the value:\n");
for ( i = 0; i < 5; i++){
    scanf("%d",&a[i]);
    }
printf("Value of array:\n");
for ( i = 0; i < 5; i++){
    printf("%d\n",a[i]);

    if (a[i]%2==0)
    event_sum = event_sum + a[i];
    else
    odd_sum = odd_sum + a[i];
    
    }
   

printf("\nsum of odd value:%d\n",odd_sum);
printf("\nsum of even value:%d\n",event_sum);
    
    return 0;
}


