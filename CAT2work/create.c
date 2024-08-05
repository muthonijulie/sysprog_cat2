#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("example.txt", O_CREAT | O_WRONLY, 0644);
    if (fd == -1) {
        perror("Error creating file");
        return 1;
    }
    printf("File created successfully\n");
    close(fd);
    return 0;
}
