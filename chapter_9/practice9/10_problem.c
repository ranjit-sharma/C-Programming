/*10. Solve problem 9 for time using ‘typedef’ keyword.*/

//now the code is in typedef keyword


#include <stdio.h>

typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
}DT;

int compare(DT d1, DT d2)
{
    // if d1 & d2 is same it will return o;
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    // for year
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    // for month
    if (d1.mm > d2.mm)
    {
        return 1;
    }
    if (d1.mm < d2.mm)
    {
        return -1;
    }
    // for day
    if (d1.dd > d2.dd)
    {
        return 1;
    }
    if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    DT d1 = {11, 4, 2004};
    DT d2 = {11, 4, 2004};
    // printf("%d",compare(d1,d2));

    int result = compare(d1, d2);

    // Display the result
    if (result == 0)
    {
        printf("Dates are the same.\n");
    }
    else if (result == 1)
    {
        printf("The first date is in the future compared to the second date.\n");
    }
    else
    {
        printf("The first date is in the past compared to the second date.\n");
    }

    return 0;
}
