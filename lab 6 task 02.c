#include <stdio.h>

int main()
{
    int value, choice;

    while (1)
    {
        printf("\nEnter appliance value (-1 to stop): ");
        scanf("%d", &value);

        if (value == -1)
            break;

        printf("\n1. Switch Water Heater ON");
        printf("\n2. Switch Air Conditioner OFF");
        printf("\n3. Toggle Main Lights");
        printf("\n4. Check Security Camera");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                /* Turn Water Heater ON */
                value = value | 2;
                break;

            case 2:
                /* Turn Air Conditioner OFF */
                value = value & ~4;
                break;

            case 3:
                /* Toggle Main Lights */
                value = value ^ 1;
                break;

            case 4:
                /* Check Security Camera */
                if (value & 8)
                    printf("Security Camera is ON.\n");
                else
                    printf("Security Camera is OFF.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("New combined value = %d\n", value);

        /* Check overload */
        if ((value & 4) && (value & 2))
            printf("Warning: Air Conditioner and Water Heater are BOTH ON!\n");
        else
            printf("No overload: Air Conditioner and Water Heater are not both ON.\n");
    }

    printf("\nProgram ended.\n");

    return 0;
}
