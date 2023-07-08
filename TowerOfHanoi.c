#include <stdlib.h>
#include <stdio.h>
void toh(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("\nMove the disk 1 from %c to %c", A, B);
        return;
    }
    toh(n - 1, A, B, C);
    printf("\nMove the disk %d from %c to %c", n, A, B);
    toh(n - 1, B, C, A);
}
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
    return 0;
}