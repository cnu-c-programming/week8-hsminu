#include <stdio.h>
#include <string.h>

int main() {
    char *names[] = {"apple", "mango", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(strcmp(names[i], names[j]) < 0) {
                char *temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s\n", names[i]);
    }

    return 0;
}