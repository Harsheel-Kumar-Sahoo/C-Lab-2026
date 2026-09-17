/*
 Calculate commission for a sales representative
    sales <= 500            : commission = 5% of sales
    500  < sales <= 2000     : commission = 35 + 10% of (sales - 500)
    2000 < sales <= 5000     : commission = 185 + 12% of (sales - 2000)
    sales > 5000             : commission = 12.5% of sales
 */
#include <stdio.h>

int main()
{
    float sales, commission;

    printf("Enter sales amount: ");
    scanf("%f", &sales);

    if (sales <= 500)
        commission = 0.05 * sales;
    else if (sales <= 2000)
        commission = 35 + 0.10 * (sales - 500);
    else if (sales <= 5000)
        commission = 185 + 0.12 * (sales - 2000);
    else
        commission = 0.125 * sales;

    printf("Commission = %f\n", commission);

    return 0;
}
