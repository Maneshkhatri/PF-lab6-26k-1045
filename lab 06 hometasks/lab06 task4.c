#include <stdio.h>

int main()
{
    int n, i;
    int type, weight;
    int code;
    
    printf("Enter number of containers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter weight: ");
        scanf("%d", &weight);

        printf("Enter cargo type (1-3): ");
        scanf("%d", &type);

        switch(type)
        {
            case 1:
                if(weight <= 20000)
                    printf("Loaded\n");
                else
                    printf("Not Loaded\n");
                break;

            case 2:
                if(weight <= 15000 && i % 2 != 0)
                    printf("Loaded\n");
                else
                    printf("Not Loaded\n");
                break;

            case 3:
                if(weight <= 18000)
                    printf("Loaded\n");
                else
                    printf("Not Loaded\n");
                break;

            default:
                printf("Invalid Type\n");
        }

        code = (weight % 97) % 100;

        printf("Tracking Code = %02d\n", code);
    }

    return 0;
}