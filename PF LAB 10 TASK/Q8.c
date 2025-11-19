#include <stdio.h>

int main()
{
	int i,j,found=0;
    char categories[3][20] = 
	{
        "Appetizers",
        "Main Course",
        "Desserts"
    };
    char items[3][3][30] = 
	{
        {"Garlic Bread", "Spring Rolls", "Soup"},
        {"Grilled Chicken", "Pasta Alfredo", "Beef Burger"},
        {"Ice Cream", "Brownie", "Fruit Salad"}
    };
    float prices[3][3] = 
	{
        {5.99, 7.49, 4.99},
        {12.99, 11.49, 9.99},
        {3.99, 6.49, 5.49}
    };
      printf("\n========== Restaurant Menu ==========\n\n");

    for (i = 0; i < 3; i++)
	{
        printf("---- %s ----\n", categories[i]);
        for (j = 0; j < 3; j++)
		{
            printf("%s: $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }
    printf("===== Budget-Friendly Items (Under $10) =====\n\n");
    for (i = 0; i < 3; i++)
	{
        for (j = 0; j < 3; j++)
		{
			if(prices[i][j]<10)
			{
				printf("%-20s $%.2f  (%s)\n", items[i][j], prices[i][j], categories[i]);
                found = 1;
			}
        }
    }
      if (!found) 
	{
        printf("No budget-friendly items available.\n");
    }

    return 0;
}
