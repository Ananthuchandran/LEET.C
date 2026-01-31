#include <stdio.h>
void reverseString(char s[], int size)
{
    int left = 0;
    int right = size - 1;
    char temp;

    while (left < right) 
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

