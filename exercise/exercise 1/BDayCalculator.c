#include <stdio.h>

int main()
{
    int today = 23;
    int month = 10;
    int grannysBirthdayDay = 27;
    int grannysBirthdayMonth = 10;

    // 2.1
    int daysUntilBirthday = grannysBirthdayDay - today;
    printf("%d days until Grannys Birthday.\n", daysUntilBirthday);

    // 2.2
    int myBirthdayDay = 1;
    int myBirthdayMonth = 12;
    int days = 28;
    int yearMonths = 12;

    if (myBirthdayMonth <= month)
    {
        if (month == myBirthdayMonth & today == myBirthdayDay)
        {
            printf("My birthday is today.");
        }
        else
        {
            if (myBirthdayDay < today)
            {
                daysUntilBirthday = (((yearMonths - month) + myBirthdayMonth) * days) + myBirthdayDay;
                printf("My birthday is going to be in %d days.", daysUntilBirthday);
            }
            else
            {
                daysUntilBirthday = myBirthdayDay - today;
                if (daysUntilBirthday == 1)
                {
                    printf("My birthday is tomorrow.");
                }
                else
                {
                    printf("My birthday is going to be in %d days.", daysUntilBirthday);
                }
            }
        }
    }
    else
    {
        daysUntilBirthday = (((myBirthdayMonth - month) * days) - today) + myBirthdayDay;
        printf("My birthday is going to be in %d days.", daysUntilBirthday);
    }
    return (0);
}
