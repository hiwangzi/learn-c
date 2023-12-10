#include <stdio.h>
#include <string.h>

void compare(char *str1, char *str2)
{
    printf("%d, %d\n", strcmp(str1, str2), strncmp(str1, str2, 2));
}

int main()
{
    // create a string which we can only use for reading
    char *name1 = "Zi Wang";
    // define a string which can be manipulated
    char name2[] = "Zi Wang";
    // same as above, the reason to add one is for a special character(equal to 0)
    // which indicates the end of the string
    // 实际测试：定义大小为7，也不报错🤔，小于7时，编译会有警告
    char name3[8] = "Zi Wong";

    int length = sizeof(name2) / sizeof(name2[0]);
    printf("The length of the name2 is: %d\n", length);

    printf("name1: %s, name2: %s, name3: %s\n", name1, name2, name3);

    printf("%lu, %lu, %lu\n", strlen(name1), strlen(name2), strlen(name3));

    compare(name1, name2);
    compare(name1, name3);
}
