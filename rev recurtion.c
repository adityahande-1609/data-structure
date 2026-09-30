#include <stdio.h>
void swap(char a[], int i)
{
    if (a[i] == '\0'){
        return;
    }
    swap(a, i + 1);
    printf("%c", a[i]);
}
int main()
{
    char a[20];
    printf("Enter string: ");
    scanf("%s", a);
    printf("REVERSED: ");
    swap(a, 0);
    return 0;
}
