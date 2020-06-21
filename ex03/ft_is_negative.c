#include <stdio.h>
#include <unistd.h>

void ft_is_negative(void)
{
    int number;
    printf("Enter any Postive number or a Negative number: ");
    scanf("%d", &number);

    if  (number >= 0) {
        printf("%d\nP\n",number);
    }
    else {
        printf("%d\nN\n",number);
    }
}
