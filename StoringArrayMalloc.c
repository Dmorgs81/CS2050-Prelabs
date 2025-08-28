#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("number of integers you want to store: ");
    int num = 0;
    scanf("%d", &num);

    int array[num];
    for(int i = 0; i < num; i++)
    {
        printf("What would you like index[%d] to be? ", i);
        scanf("%d", &array[i]);
    }

    int *Storage = malloc(sizeof(int) * num);

    for(int Andrew = 0; Andrew < num; Andrew++)
    {
        Storage[Andrew] = array[Andrew];
        printf("%d ", Storage[Andrew]);
    }

    free(Storage);
    return 0;
}
