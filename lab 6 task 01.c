#include <stdio.h>

int main()
{
    int age, choice, day;
    float price;

    while (1)
    {
        printf("\nEnter age (0 to stop): ");
        scanf("%d", &age);

        if (age == 0)
            break;

        printf("\n1. Regular - Rs. 500");
        printf("\n2. 3D - Rs. 800");
        printf("\n3. Premiere - Rs. 1200");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                price = 500;
                break;

            case 2:
                price = 800;
                break;

            case 3:
                price = 1200;
                break;

            default:
                printf("Invalid choice!\n");
                continue;
        }

        /* Age discount */
        if (age < 13)
        {
            price = price - (price * 0.30);
        }
        else if (age >= 60)
        {
            price = price - (price * 0.20);
        }

        printf("Enter day of the month: ");
        scanf("%d", &day);

        /* Bonus Day */
        if (day % 5 == 0)
        {
            price = price - 50;
        }

        /* Minimum price */
        if (price < 100)
        {
            price = 100;
        }

        printf("\n----- Receipt -----\n");
        printf("Age: %d\n", age);
        printf("Ticket Price: Rs. %.2f\n", price);
        printf("-------------------\n");
    }

    printf("\nProgram ended.\n");

    return 0;
}
