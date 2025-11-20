#include<stdio.h>
int main() {
    float price[3];
    printf("enter price of three items: \n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    int total = price[0] + price[1] + price[2];
    float gst_amount = total * 18 / 100;
    float final_cost = total + gst_amount;
    printf("final cost is %.2f\n", final_cost);
    return 0;
}