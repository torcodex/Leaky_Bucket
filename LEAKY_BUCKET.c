#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main(){
    int no_queries=4,input_pkt_size=4,output_pkt_size=1,size_left,storage=0,i,bucket_size=10;
    for(i=0;i<no_of_queries;i++){
        size_left=bucket_size-storage;
        if(input_pkt_size<=size_left){
            storage+=input_pkt_size;
            printf("Buffer size = %d out of Bucket size %d",storage,bucket_size);
        }
        else{
            printf("Packet loss: %d"input_pkt_size_size_left);
            storage=bucket_size;
            printf("Buffer size = %d out of Bucket size %d",storage,bucket_size);
        }
        storage-=output_pkt_size;
    }
    return 0;
}

















#include<stdio.h>
#include<string.h>
int main()
{
int no_of_queries, storage, output_pkt_size;
int input_pkt_size, bucket_size, size_left;
storage = 0;
no_of_queries = 4;
bucket_size = 10;
input_pkt_size = 4;
output_pkt_size = 1;
for (int i = 0; i < no_of_queries; i++) {
size_left = bucket_size - storage;
if (input_pkt_size <= size_left) {
storage += input_pkt_size;
printf("Buffer size= %d out of bucket size= %d\n", storage, bucket_size);
}
else {
printf("packet loss= %d\n", input_pkt_size - size_left );
storage = bucket_size;
printf("Buffer size= %d out of bucket size= %d\n", storage, bucket_size);
}
storage -= output_pkt_size;
}
return 0;
}
