#include <stdio.h>
#include <stdlib.h>

struct SensorData {
    int sensor_id;
    float temperature;
    long timestamp;
};

int main() {

    FILE *fp;
    struct SensorData data;
    int choice, record_no;

    // Open file (read + write binary)
    fp = fopen("sensor_log.bin", "rb+");

    // If file does not exist, create it
    if (fp == NULL) {
        fp = fopen("sensor_log.bin", "wb+");
        if (fp == NULL) {
            printf("File cannot be created!\n");
            return 1;
        }
    }

    while (1) {

        printf("\n===== SENSOR LOGGER MENU =====\n");
        printf("1. Write Record\n");
        printf("2. Read Record\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // -------- WRITE RECORD --------
        if (choice == 1) {

            printf("Enter record number: ");
            scanf("%d", &record_no);

            printf("Enter Sensor ID: ");
            scanf("%d", &data.sensor_id);

            printf("Enter Temperature: ");
            scanf("%f", &data.temperature);

            printf("Enter Timestamp: ");
            scanf("%ld", &data.timestamp);

            // RANDOM ACCESS (jump directly)
            fseek(fp,
                  record_no * sizeof(struct SensorData),
                  SEEK_SET);

            fwrite(&data, sizeof(struct SensorData), 1, fp);

            printf("Record written successfully!\n");
        }

        // -------- READ RECORD --------
        else if (choice == 2) {

            printf("Enter record number: ");
            scanf("%d", &record_no);

            // RANDOM ACCESS (jump directly)
            fseek(fp,
                  record_no * sizeof(struct SensorData),
                  SEEK_SET);

            fread(&data, sizeof(struct SensorData), 1, fp);

            printf("\n--- Record Data ---\n");
            printf("Sensor ID   : %d\n", data.sensor_id);
            printf("Temperature : %.2f\n", data.temperature);
            printf("Timestamp   : %ld\n", data.timestamp);
        }

        // -------- EXIT --------
        else if (choice == 3) {
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    fclose(fp);
    return 0;
}