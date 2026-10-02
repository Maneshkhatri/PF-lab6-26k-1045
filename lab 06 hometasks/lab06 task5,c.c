#include <stdio.h>

int main()
{
    int access, hour;
    int mode;
    int enter;

    while(1)
    {
        printf("\nEnter access number: ");
        scanf("%d", &access);

        if(access == 9999)
            break;

        printf("Enter hour: ");
        scanf("%d", &hour);

        mode = (hour >= 22 || hour < 6) ? 1 : 0;

        if(mode == 1)
            printf("LATE NIGHT MODE\n");
        else
            printf("STANDARD MODE\n");

        if(mode == 0)
        {
            if((access & 1) || (access & 2) || (access & 4))
                enter = 1;
            else
                enter = 0;
        }
        else
        {
            if(access & 8)
                enter = 1;
            else
                enter = 0;
        }

        if(enter == 1)
            printf("Entry Allowed\n");
        else
            printf("Entry Not Allowed\n");

        if(access & 4)
            printf("Personal Trainer Access: Yes\n");
        else
            printf("Personal Trainer Access: No\n");
    }

    return 0;
}