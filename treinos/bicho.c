#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aposta, numJog, numSort;

    scanf(" %d %d %d", &aposta, &numJog, &numSort);

    if (numJog >= 1000 && numSort >= 1000 && (numJog % 10000 == numSort % 10000))
        printf("%d\n", aposta * 3000);
    else if (numJog >= 100 && numSort >= 100 && (numJog % 1000 == numSort % 1000))
        printf("%d\n", aposta * 500);
    else if (numJog >= 10 && numSort >= 10 && (numJog % 100 == numSort % 100))
        printf("%d\n", aposta * 50);
    else {
        int doisJog = numJog % 100;
        int doisSort = numSort % 100;

        int gJog = doisJog == 0 ? 24 : (doisJog % 4 == 0 ? (doisJog / 4) - 1 : doisJog / 4);
        int gSort = doisSort == 0 ? 24 : (doisSort % 4 == 0 ? (doisSort / 4) - 1 : doisSort / 4);

        if (gJog == gSort)
            printf("%d\n", aposta * 16);
        else
            printf("0\n");
    }

    return 0;
}
