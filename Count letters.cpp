#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int temp = 0;
    int i;
    scanf("%s", s);
    char x = s[0];
    for(i = 0; i < strlen(s); i++) {
        if(s[i] == x) {
            temp++;
        } else {
            printf("%c : %d\n", x, temp);
            x = s[i];
            temp = 1;
        }
    }
    printf("%c : %d\n", x, temp);
    return 0;
}
