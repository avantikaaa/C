#include <stdio.h>
#include<string.h>
int main()
{
  //  printf("%d %d\n", 'a', 'A');
    int height[26], max=0;
    for(int i=0; i<25; i++)
        scanf("%d ", &height[i]);
    scanf("%d", &height[25]);
    char str[10];
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        int k = str[i];
        if(height[k-97]>max)
            max = height[k-97];
    }
    printf("%d", max*len);
    return 0;
}
