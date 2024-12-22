#include <stdio.h>
#include <ctype.h>
#include "randomGen.h"
#include "wordList.h"
#include "charOps.h"
void drawHangman(int tries)
{
    const char *hangmanParts[] = {"     _________", "    |         |",
                                  "    |         O", "    |        /|\\",
                                  "    |        / \\", "    |"};

    printf("\n");
    for (int i = 0; i <= tries; i++)
    {
        printf("%s\n", hangmanParts[i]);
    }
}

int main(int argc, char *argv)
{
    char charList[250], guessedCharList[250];
    int wrongGuessLeft = 6, wordSize, charListSize, guessedSize = 0;
    int wordIter = 0, charListIter = 0, guessedCharIter = 0;
    char inputChar;
    int random_choice = genIntRandomInRange(MAX_INDEX, 6);

    printf("Welcome to Hangman Game\n");
    printf("Guess all the chars in the word\n");
    printf("Hint: %s\n", wordList[random_choice].hint);
    getCharList(wordList[random_choice].word, charList);
    wordSize = wordLen(wordList[random_choice].word);
    charListSize = wordLen(charList);

    while (guessedSize < charListSize && wrongGuessLeft > 1)
    {
        printf("guess the char:");
        scanf("%c", &inputChar);
        while (getchar() != '\n')
            ;
        if (charPresentinWord(toupper(inputChar), charList))
        {
            if (charPresentinWord(toupper(inputChar), guessedCharList) == 0)
            {
                guessedSize++;
                printf("Good guess!!");
                guessedCharList[guessedCharIter] = toupper(inputChar);
                guessedCharIter++;
            }
            else
            {
                printf("Good guess!!But you already guessed it before");
            }
        }
        else
        {
            wrongGuessLeft--;
            printf("Wrong guess!! only %d left\n", wrongGuessLeft);
        }

        if (inputChar == wordList[random_choice].word[wordIter])
        {
            while (inputChar == wordList[random_choice].word[wordIter])
            {
                wordIter++;
            }
        }
        drawHangman(6 - wrongGuessLeft);
        printf("%.*s\n", wordIter, wordList[random_choice].word);
    }
    if (guessedSize == charListSize)
    {
        printf("congragulations!! You won. The word is %s\n", wordList[random_choice].word);
    }
    else
    {
        printf("Lost!! You lost. The word is %s\n", wordList[random_choice].word);
    }
}
