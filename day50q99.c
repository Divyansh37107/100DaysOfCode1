
#include <stdio.h>

int main()
{
    char date[20];
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%19s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month == 4)
    {
        printf("%02d-Apr-%04d", day, year);
    }
    else
    {
        printf("Invalid month");
    }

    return 0;
}
