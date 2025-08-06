#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Calculate average of RGB values
            int avg = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            // Set all RGB values to the average
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtBlue = avg;
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        // Swap pixels from left to right up to halfway
        for (int j = 0; j < width / 2; j++)
        {
            // Temporary storage for left pixel
            RGBTRIPLE temp = image[i][j];
            // Swap with corresponding pixel from right
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = temp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create temporary array to store blurred values
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red_sum = 0, green_sum = 0, blue_sum = 0;
            float count = 0.0;

            // Check 3x3 grid around current pixel
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int new_i = i + di;
                    int new_j = j + dj;

                    // Check if pixel is within bounds
                    if (new_i >= 0 && new_i < height && new_j >= 0 && new_j < width)
                    {
                        red_sum += image[new_i][new_j].rgbtRed;
                        green_sum += image[new_i][new_j].rgbtGreen;
                        blue_sum += image[new_i][new_j].rgbtBlue;
                        count++;
                    }
                }
            }

            // Calculate averages and round
            temp[i][j].rgbtRed = round(red_sum / count);
            temp[i][j].rgbtGreen = round(green_sum / count);
            temp[i][j].rgbtBlue = round(blue_sum / count);
        }
    }

    // Copy temporary array back to original
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    // Sobel kernels
    int Gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int Gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

    // Create temporary array
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red_x = 0, green_x = 0, blue_x = 0;
            int red_y = 0, green_y = 0, blue_y = 0;

            // Apply Sobel kernels to 3x3 grid
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int new_i = i + di;
                    int new_j = j + dj;

                    // Check if pixel is within bounds, else treat as black (0)
                    if (new_i >= 0 && new_i < height && new_j >= 0 && new_j < width)
                    {
                        red_x += image[new_i][new_j].rgbtRed * Gx[di + 1][dj + 1];
                        green_x += image[new_i][new_j].rgbtGreen * Gx[di + 1][dj + 1];
                        blue_x += image[new_i][new_j].rgbtBlue * Gx[di + 1][dj + 1];

                        red_y += image[new_i][new_j].rgbtRed * Gy[di + 1][dj + 1];
                        green_y += image[new_i][new_j].rgbtGreen * Gy[di + 1][dj + 1];
                        blue_y += image[new_i][new_j].rgbtBlue * Gy[di + 1][dj + 1];
                    }
                }
            }

            // Calculate final values using Sobel formula and cap at 255
            int red = round(sqrt(red_x * red_x + red_y * red_y));
            int green = round(sqrt(green_x * green_x + green_y * green_y));
            int blue = round(sqrt(blue_x * blue_x + blue_y * blue_y));

            temp[i][j].rgbtRed = red > 255 ? 255 : red;
            temp[i][j].rgbtGreen = green > 255 ? 255 : green;
            temp[i][j].rgbtBlue = blue > 255 ? 255 : blue;
        }
    }

    // Copy temporary array back to original
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
}
