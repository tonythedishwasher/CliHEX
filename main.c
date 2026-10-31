#include <stdio.h>


int main(int argc, char *argv[]) {
    FILE* filePRT;
    unsigned char buffer[1024];
    size_t bytesRead;
    if (argc < 2) {
        printf("uh oh! You missed an argument!\n");
        printf("(Try main <filename>)\n");
        return 1;
    } else {
        filePRT = fopen(argv[1], "rb+");
        if (filePRT == NULL) {
            printf("The provided file doesn't exist or CANNOT be opened!\n");
            return 1;
        } else {
            while((bytesRead = fread(buffer, 1, sizeof(buffer), filePRT)) > 0) {
                for (size_t i = 0; i < bytesRead; i++) {
                    printf("%02X ", buffer[i]);
                }
            }
            
        }
    }

}