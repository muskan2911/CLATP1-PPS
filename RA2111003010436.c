// playing with characters
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c\n",&ch);
    scanf("%[^\n]%*c\n", s);
    scanf("%[^\n]%*c\n", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
