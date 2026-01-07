#include<stdio.h>
int maain(){
    int P,N;               //P = price per packet , N = number of packets
    float D;               //D = discount percentage
    float total;            //total after discount
    // Input format : P N D
    printf("Enter price per packet, number of packets and discount percentage: ");
    scanf("%d %d %f",&P,&N,&D);
    // Calculate total after discount
    total = P * N - (P * N * D / 100);
    //Output format
    printf("***DIWALI FIREWORKS***\n");
    printf("Item Price:\t%d rupees\n",P);
    printf("Quantity:\t%d\n",N);
    printf("Discount:\t%.2f%%\n",D);
    printf("Total:\t\t%.2f\n",total);
    printf("\a");
    return 0;
}