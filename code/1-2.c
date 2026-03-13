#include <stdio.h>
int main()
{
    printf("% 10s", "name");
    printf("% 1s", "id");
    printf("% 1s\n", "value");

    printf("% 10s", "kim");
    printf("% 1d", 12);
    printf("% 1f\n", 4.12);

    printf("% 10s", "lee");
    printf("% 1d", 1922);
    printf("% 1f\n", 3.21);

    printf("% 10s", "park");
    printf("% 1d", 432);
    printf("% 1f\n", 1.0);

        return 0;
}
