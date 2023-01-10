#include <stdio.h>
#include <stdlib.h>


int main() {

    //defining variables
    char name[50];
    int phone_number;
    int customer_id;

    //defining products
    int coffee_small;
    int coffee_medium;
    int coffee_large;

    int tea_small;
    int tea_medium;
    int tea_large;

    int water;
    int lemonade;
    int milk;

    int croissant;
    int bagel;
    int cookie;

    //defining totals
    float total;
    float beverages_total;
    float food_total;


    //billing system
    printf("\n\n+=+=+=+=+=+=+=+=+=+=+=+=+\n");
    printf("     Billing System      \n");
    printf("+=+=+=+=+=+=+=+=+=+=+=+=+\n\n");

    //inputs customer information
    printf("Please put in customer name and ID: \n");
    scanf("%s", &name);
    scanf("%d", &customer_id);

    //inputs amount of products bought
    printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+\n");
    printf("        Beverages        \n");
    printf("+=+=+=+=+=+=+=+=+=+=+=+=+\n");

    printf("Please input the amount of coffees bought in order of small ($1.50), medium ($2.50), and large ($3.50)\n");
    scanf("%d", &coffee_small);
    scanf("%d", &coffee_medium);
    scanf("%d", &coffee_large);
    int coffee_total = 1.50*coffee_small + 2.50*coffee_medium + 3.50*coffee_large;

    printf("Please input the amount of teas bought in order of small ($1.75), medium ($2.75), and large ($3.75)\n");
    scanf("%d", &tea_small);
    scanf("%d", &tea_medium);
    scanf("%d", &tea_large);
    int tea_total = 1.50*tea_small + 2.50*tea_medium + 3.50*tea_large;

    printf("Please put in the amount of bottles of water bought ($1.00):\n");
    scanf("%d", &water);

    printf("Please put in the amount of bottles of lemonade bought ($2.50):\n");
    scanf("%d", &lemonade);

    printf("Please put in the amount of cartons of milk bought ($2.75):\n");
    scanf("%d", &milk);
    int other_beverages_total = water + 2.50*lemonade + 2.75*milk;


    printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+\n");
    printf("          Food           \n");
    printf("+=+=+=+=+=+=+=+=+=+=+=+=+\n");

    printf("Please put in the amount of croissants bought ($3.00):\n");
    scanf("%d", &croissant);

    printf("Please put in the amount of bagels bought ($4.00):\n");
    scanf("%d", &bagel);

    printf("Please put in the amount of cookies bought ($2.75):\n");
    scanf("%d", &cookie);

    //finds total price by group
    beverages_total = coffee_total + tea_total + other_beverages_total;
    food_total = 3*croissant + 4*bagel + 2.75*cookie;
    total = beverages_total + food_total;

    //quits program if customer did not buy anything
    if (total <= 0) {
        printf("Customer has not bought anything:\n");
        exit(0);
    }

    //displays total
     printf("-----------------------\n");
     printf("Small Coffee: $%.2f \n", 1.50*coffee_small);
     printf("Medium Coffee: $%.2f \n", 2.50*coffee_medium);
     printf("Large Coffee: $%.2f \n\n", 3.50*coffee_large);

     printf("Small Tea: $%.2f \n", 1.50*tea_small);
     printf("Medium Tea: $%.2f \n", 2.50*tea_medium);
     printf("Large Tea: $%.2f \n\n", 3.50*tea_large);

     printf("Water: $%.2f \n", water);
     printf("Lemonade: $%.2f \n", 2.75*lemonade);
     printf("Milk: $%.2f \n\n", 2.50*milk);

     printf("Croissants $%.2f \n", 3.00*croissant);
     printf("Bagels: $%.2f \n", 4.00*bagel);
     printf("Cookies: $%.2f \n\n", 2.75*cookie);

     printf("BEVERAGES TOTAL $%.2f \n", beverages_total);
     printf("FOOD TOTAL: $%.2f \n\n", food_total);
     printf("TOTAL: $%.2f \n\n", total);


     //prints bill
    printf("-------------------------------------------\n");
    printf("            Jonathan's Cafe             \n\n");
    printf("Customer Name: %9s \n", name);
    printf("Customer ID: %11d \n\n", customer_id);
    printf("Product            Quantity         Price  \n");
    if (coffee_small > 0) {
    printf("Small Coffee       %d               $%.2f\n", coffee_small, 1.50*coffee_small);
    }
    if (coffee_medium > 0) {
    printf("Medium Coffee      %d               $%.2f\n", coffee_medium, 2.50*coffee_medium);
    }
    if (coffee_large > 0) {
    printf("Large Coffee       %d               $%.2f\n", coffee_large, 2.50*coffee_large);
    }
    if (tea_small > 0) {
    printf("Small Tea          %d               $%.2f\n", tea_small, 1.75*tea_small);
    }
    if (tea_medium > 0) {
    printf("Medium Tea         %d               $%.2f\n", tea_medium, 2.75*tea_medium);
    }
    if (tea_large > 0) {
    printf("Large Tea          %d               $%.2f\n", tea_large, 2.75*tea_large);
    }
    if (water > 0) {
    printf("Water              %d               $%.2f\n", water, water);
    }
    if (lemonade > 0) {
    printf("Lemonade           %d               $%.2f\n", lemonade, 2.75*lemonade);
    }
    if (milk > 0) {
    printf("Milk               %d               $%.2f\n", milk, 2.50*milk);
    }
    if (croissant > 0) {
    printf("Croissant          %d               $%.2f\n", croissant, 3.00*croissant);
    }
    if (bagel > 0) {
    printf("Bagel              %d               $%.2f\n", bagel, 4.00*bagel);
    }
    if (cookie > 0) {
    printf("Cookie             %d               $%.2f\n", cookie, 2.75*cookie);
    }

    printf("\nTOTAL:                            $%.2f\n", total);

    printf("-------------------------------------------\n");
    
}