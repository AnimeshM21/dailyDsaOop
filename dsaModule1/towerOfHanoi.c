#include <stdio.h>

void TOH(int n, char source, char temp, char final)
{
    if (n == 1)
    {
        printf("Moving disk 1 from %c to %c \n", source, final);
        return;
    }
    TOH(n - 1, source, final, temp);

    printf("Moving disk %d from %c to %c \n", n, source, final);

    TOH(n - 1, temp, final, source);
}

int main()
{
    int n = 3;
    printf("Tower of Hanoi Solution for %d disks \n", n);
    TOH(n, 'A', 'B', 'C');
    return 0;
}