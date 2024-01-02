#include <stdio.h>
#include <string.h>

int main() {
    int total = 0;
    char cart[100][50];  // Array to store item names
    int item_cost[100];  // Array to store item costs
    int cartSize = 0;    // Variable to keep track of the number of items in the cart

    for (int i = 0; i < 100; i++) {
        char str[50];
        char endstr[] = "end";
        char remstr[] = "remove";

        printf("Enter the item (type 'end' to finish): ");
        scanf("%s", str);

        if (strcmp(str, endstr) == 0) {
            printf("Ending the cart and checking out.\n");
            break;
        } else if (strcmp(str, remstr) == 0) {
            // Remove item from the cart
            if (cartSize > 0) {
                cartSize--;
                total -= item_cost[cartSize];
                printf("Removed the last item from the cart.\n");
            } else {
                printf("Cart is empty. Nothing to remove.\n");
            }
        } else {
            printf("Enter the cost: ");
            scanf("%d", &item_cost[cartSize]);
            
            // Add item to the cart
            strcpy(cart[cartSize], str);
            printf("Added item to the cart.\n");
            
            total += item_cost[cartSize];
            cartSize++;
        }
    }

    printf("The total of the cart is %d\n", total);

    return 0;
}
