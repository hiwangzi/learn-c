#include <stdio.h>
int main()
{
    char vowels[][5] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%c ", vowels[i][j]);
        }
        printf("\n");
    }
}
