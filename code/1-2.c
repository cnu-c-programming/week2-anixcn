#include <stdio.h>
int main()
{
    printf("% 10s", "name");
    printf("% 10s", "id");
    printf("% 10s\n", "value");

    printf("% 10s","kim");
    printf("% 1s%", "");
    printf("%010d", 12); 
    printf("% 10.2f\n", 4.12);

    printf("% 10s", "lee");
    printf("% 1s%", "");
    printf("%010d", 1922);
    printf("% 10.2f\n", 3.21);

    printf("% 10s", "park");
    printf("% 1s%", "");
    printf("%010d", 432);
    printf("% 10.2f\n", 1.0);

    return 0;
}
