#include <stdio.h>

int main()
{
    {
        int sum = 0;
        int input_number;
        int i;

        printf("input number : ");
        scanf("%d", &input_number);

        if (input_number > 0)
        {
            for (i = 1; i <= input_number; i++)
            {
                sum += i;
            }
        }
        else if(input_number <0)
        {
            for (i = 1; i <= -input_number; i++)
            {
                sum += i;
            }
        }

        if (input_number == 0)
        {
            printf("input error\n");
        }
        else if (input_number > 0)
        {
            printf("sum: %d\n", sum);
        }
        else if (input_number < 0)
        {
            printf("sum: %d\n", -sum);
        }
    }
}
