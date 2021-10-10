#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[1000];
    int i = 0;
    int point = 0, decimal = 0;
    printf("Please give input:\n");
    scanf("%s", num);
    while (num[i] != '\0')
    {
        // IF DECIMAL POINT IS REPEATED THEN IT CANNOT BE FLOAT
        if (num[i] == '.' && point == 1)
        {
            point = 0;
            break;
        }
        // TO CHECK PRESENCE OF BOTH POINT AND DECIMAL NUMBER
        if (num[i] == '.' && num[i + 1] != '\0')
        {
            point = 1;
            decimal = 1;
        }
        i++;
    }
    // IT IS AID TO BE FLOAT ONLY WHEN DECIMAL POINT AND A DECIMAL NUMBER IS PRESENT
    if (point == 1 && decimal == 1)
        printf("valid");
    else
        printf("invalid");

return 0;
}