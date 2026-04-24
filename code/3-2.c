#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int n = sizeof(argv) / sizeof(argv[0]);

    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(strcmp(argv[i], argv[j]) < 0) {
                char *temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s\n", argv[i]);
    }
}