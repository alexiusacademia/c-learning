#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    int started = 0;    // 0 For false and 1 for True

    puts("data = [");
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started) {
            printf(",\n");
        } else {
            started = 1;
        }
        // Make data validation first
        if ((latitude < -90.0) || (latitude > 90.0)) {
            fprintf(stderr, "Invalid latitude %f.\n", latitude);
            return 2;
        }
        if ((longitude < -180.0) || (longitude > 180.0)) {
            fprintf(stderr, "Invalid longitude %f.\n", longitude);
            return 2;
        }

        // Output the json
        printf("{'latitude': %f, 'longitude': %f, 'info': '%s'}", latitude, longitude, info);
    }
    puts("\n]");

    return 0;
}