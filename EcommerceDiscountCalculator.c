#include <stdio.h>
int main()
{
    float Price, Discount, Discountrate, FinalPrice;
    printf("Enter the original price:");
    scanf("%f", &Price);
    printf("Enter the discount percentage:");
    scanf("%f", &Discount);
    Discount =((Price*Discountrate/100));
    FinalPrice = Price - Discount;
    printf("The final price after discount is: %f\n", FinalPrice);
}