#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover card.raw.\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    uint8_t buffer[512];

    // Output file pointer
    FILE *output = NULL;
    // Counter for JPEG files
    int jpeg_count = 0;
    // Buffer for filename
    char filename[8];
    // Flag to track if we're writing to a JPEG
    int found_jpeg = 0;

    // Read the input file 512 bytes at a time
    while (fread(buffer, 1, 512, file) == 512)
    {
        // Check for JPEG signature
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            // If we were writing to a previous JPEG, close it
            if (found_jpeg)
            {
                fclose(output);
            }

            // Create new JPEG filename (e.g., 000.jpg)
            sprintf(filename, "%03i.jpg", jpeg_count);
            // Open new output file
            output = fopen(filename, "w");
            if (output == NULL)
            {
                fclose(file);
                printf("Could not create output file %s\n", filename);
                return 1;
            }

            // Increment JPEG counter and set flag
            jpeg_count++;
            found_jpeg = 1;
        }

        // If we've found a JPEG, write the current block to it
        if (found_jpeg)
        {
            fwrite(buffer, 1, 512, output);
        }
    }

    // Close any open files
    if (output != NULL)
    {
        fclose(output);
    }
    fclose(file);

    return 0;
}
