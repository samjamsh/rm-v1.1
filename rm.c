#include <stdio.h>

int main(int argc, char *argv[]){
    int files;

    if (argc == 1) {
        printf("use: %s filename\n", argv[0]);
        return 0;
    }
    else {

        for (files = 1; files < argc; files++){

            if (remove(argv[files]) != 0){
                printf("error deleting: the file %s was not deteled\n", argv[files]);

            } else {
                printf("success: the file %s was deleted\n", argv[files]);
            }
        }
    }
    return 0;
}
