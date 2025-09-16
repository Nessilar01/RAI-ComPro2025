#include<stdio.h>
char word[100];
int check_vowels(char*word)
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        switch (word[i])
        {
        case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                count++;
                break;
        }
    }
    return count;
}
int main()
{
    printf("Input : ");
    scanf("%[^\n]s",word);
    printf("Output:Number of vowels : %d\n",check_vowels(word));
    return 0;
}