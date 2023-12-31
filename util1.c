#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main() {
    DIR *d;
    struct dirent *dir;
    d = opendir(".");   // Open the directory

    if (d) {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);

            char *ext = strrchr(dir->d_name, '.');  // Find the last occurence of '.'
            // Check if the dot is in the string and not at the start or end
            if (ext && ext != dir->d_name && *(ext + 1) != '\0') {
                printf("File with extension: %s\n", dir->d_name);
            } else {
                char *fname = dir->d_name;
                if (remove(fname) == 0) {
                    printf("File %s deleted successfully!\n", fname);
                }
            }
        }
        closedir(d);    // Close the directory
    }

    return 0;
}