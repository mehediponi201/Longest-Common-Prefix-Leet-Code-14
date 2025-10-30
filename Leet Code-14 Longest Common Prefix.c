/*
Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

#include<stdio.h>
#include<string.h>
char* longestCommonPrefix(char strs[][10], int strsSize)
{
    static char prefix[201];
    memset(prefix, 0, sizeof(prefix));
    if(strsSize == 0)
    {
        return prefix;
    }
    int i,j;
    for(i=0; strs[0][i]!='\0'; i++)
    {
        char ch = strs[0][i];
        for(j=1; j<strsSize; j++)
        {
            if((strs[j][i] != ch) || (strs[j][i] == '\0'))
            {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = ch;
        prefix[i+1] = '\0';
    }
    return prefix;
}
int main()
{
    char strs[3][10] = {"flower","flow","flight"};
    // char strs[3][10] = {"dog","racecar","car"};
    int len = sizeof(strs)/sizeof(strs[0]);
    printf("Longest Common Prefix: %s\n", longestCommonPrefix(strs, len));

}

