#include <stdio.h>
#include <ctype.h>
#include "charOps.h"

int charPresentinWord(char c, char* word){
    int i = 0;
    while (word[i] != '\0')
    {
        if(word[i] == c)
            return 1;
        i++;
    }
    return 0;
}

/*
Retunrn an array of individual chars
Geeks For Geeks -> GEKSFOR(omit spaces)
*/
void getCharList(char* word, char* charList)
{
    int i = 0, j = 0;
    char upperChar;
    while (word[i] != '\0')
    {
        upperChar = toupper(word[i]);
        if(charPresentinWord(upperChar,charList) == 0)
        {
            charList[j] = upperChar;
            j++;
        }
            
        i++;
    }
    charList[i] = '\0';
    return;
    
}

int wordLen(char* word)
{
    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    return i;
}