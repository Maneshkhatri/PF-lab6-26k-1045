#include <stdio.h>

int main()
{
    int n, i;
    int m1, m2, m3;
    int avg, x;
    char grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter marks of 3 subjects: ");
        scanf("%d %d %d", &m1, &m2, &m3);

        avg = (m1 + m2 + m3) / 3;

        x = avg / 10;

        switch(x)
        {
            case 10:
            case 9:
                grade = 'A';
                break;

            case 8:
                grade = 'B';
                break;

            case 7:
                grade = 'C';
                break;

            case 6:
                grade = 'D';
                break;

            default:
                grade = 'F';
        }

        printf("Average = %d\n", avg);
        printf("Grade = %c\n", grade);

        (avg >= 60 && m1 >= 40 && m2 >= 40 && m3 >= 40)
        ? printf("Pass\n")
        : printf("Fail\n");
    }

    return 0;
}