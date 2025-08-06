#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./output/pdf {Filename}\n");
        return 1;
    }

    FILE *inpFile = fopen(argv[1], "r");

    uint8_t buffer[4];
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

    fread(buffer, sizeof(uint8_t), 4, inpFile);

    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != signature[i])
        {
            printf("This is not a PDF.\n");
            return 1;
        }
    }

    printf("This is a PDF.\n");

    fclose(inpFile);
}