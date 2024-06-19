#include <unistd.h>

int main(void)
{
    char text[] = "_putchar\n";
    for (int i = 0; text[i] != '\0'; i++) {
        write(1, &text[i], 1);
    }
    return 0;
}
