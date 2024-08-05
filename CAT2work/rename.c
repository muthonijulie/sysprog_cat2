#include <stdio.h>

int main() {
    char oldname[100], newname[100];
    printf("Enter the current filename: ");
    scanf("%s", oldname);
    printf("Enter the new filename: ");
    scanf("%s", newname);

    if (rename(oldname, newname) == -1) {
        perror("Error renaming file");
        return 1;
    }
    printf("File renamed successfully.\n");
    return 0;
}
