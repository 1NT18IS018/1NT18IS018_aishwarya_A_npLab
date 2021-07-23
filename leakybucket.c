/*#include<stdio.h>

int main(){
    int incoming, outgoing, buck_size, n, store = 0;
    printf("Enter bucket size, outgoing rate and no of inputs: ");
    scanf("%d %d %d", &buck_size, &outgoing, &n);

    while (n != 0) {
        printf("Enter the incoming packet size : ");
        scanf("%d", &incoming);
        printf("Incoming packet size %d\n", incoming);
        if (incoming <= (buck_size - store)){
            store += incoming;
            printf("Bucket buffer size %d out of %d\n", store, buck_size);
        } else {
            printf("Dropped %d no of packets\n", incoming - (buck_size - store));
            printf("Bucket buffer size %d out of %d\n", store, buck_size);
            store = buck_size;
        }
        store = store - outgoing;
        printf("After outgoing %d packets left out of %d in buffer\n", store, buck_size);
        n--;
    }
}*/



#include<stdio.h>
#include<stdlib.h>
int op,i,packets[5],bucketsize;
void bktinput(int a,int b)
{
if(a>bucketsize)
printf("\n\t\t bucket overflow\n");
else
{
while(a>b)
{
printf("\n\t\t %d bytes outputed",b);
a-=b;
}
if(a>0)
printf("\n\t\t last %d bytes sent",a);
printf("\n\t\t leaky bucket successful\n");
}
}
int main()
{
printf("enter the bucket size:");
scanf("%d",&bucketsize);
printf("enter the output rate:");
scanf("%d",&op);
printf("enter 5 packets in streams:");
for(i=0;i<5;i++)
scanf("%d",&packets[i]);
for(i=0;i<5;i++)
{
printf("\n packet no=%d\t packet size=%d",i,packets[i]);
bktinput(packets[i],op);
}
} 
