#include <stdio.h>

main()
{
    float price, addedwithtax;
    printf("Please enter the price of the item you wish to buy: ");
    scanf("%f", &price);

    addedwithtax = ((price * (5 / 100)) + price);
    printf("Your price after tax is: %.01x", addedwithtax); 
}