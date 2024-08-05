#include <stdio.h>
#include <unistd.h>

int main() {
    char filename[100];
    printf("Enter the filename to delete: ");
    scanf("%s", filename);

    if (unlink(filename) == -1) {
        perror("Error deleting file");
        return 1;
    }
    printf("File deleted successfully.\n");
    return 0;
}
