#include <stdio.h>
#include <stdlib.h>


void palindromCheck(char word[], int a);

int main()
{
    char word[100];
    printf("WORD:\n");
    gets(word);
    int length = strlen(word);

    palindromCheck(word, 0);

return 0;

}

void palindromCheck(char word[], int a)
{
    int length = strlen(word) - (a+1);
    if(word[a] == word[length])
    {
        if(a + 1 == length || a == length)
        {
            printf("\nThe entered word is a palindrome.\n");
            return;
        }
        palindromCheck(word , a +1);
    }
    else
    {
        printf("\nThe entered word is not a palindrome.\n");
    }
}
