

#include <stdio.h>
int main()
{
    char dayname[7];
    printf("Enter temp of 7 day");
    for (int i = 0; i < 7; i++) // input DAY //
    {
        scanf("%d", &dayname[i]);
    }

    int temp[7], i;
    printf("Enter temp of 7 day");
    for (i = 0; i < 7; i++) // input temp //
    {
        scanf("%d", &temp[i]);
    }

    // Average of temp //
    float avg, sum = 0;
    for (i = 0; i < 7; i++)
    {
        sum = sum + temp[i];
    }

    avg = sum / 7;
    printf("Averge", avg);

    // Max temp //
int max, p;
for (i = 0; i < 7; i++)
{
    if (temp[i] < temp[i+1])
        max = temp[i+1];
    else if (temp[i] > temp[i+1])
        max = temp[i];
        p = i;
}

printf("Max temp is %d on %s", max, dayname[p]);

// Min temp //
int min, q;
for (i = 0; i < 7; i++)
{
    if (temp[i] > temp[i+1])
        min = temp[i+1];
    else if (temp[i] < temp[i+1])
        min = temp[i];
        q = i;
}

printf("Min temp is %d on %s", min, dayname[q]);
// count no day above temp //
int count = 0;
for (i = 0; i < 7; i++)
{
    if (temp[i] > avg)
        count = count + 1;
    else
        count = count + 0;
}
return 0;
}
