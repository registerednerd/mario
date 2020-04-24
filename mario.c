#include <cs50.h>
#include <stdio.h>

int get_limited_int(string);
void print_left_row(int, int);
void print_right_row(int);

int main(void)
{
    // prompt user for height
    int height = get_limited_int("Height: ");

    // print each row
    for (int i = 0; i < height; i++)
    {
        print_left_row(height, i + 1);
        printf("  ");
        print_right_row(i + 1);
        printf("\n");
    }
}

// prompt user for an integer between 1 and 8
int get_limited_int(string prompt)
{
    int x;

// reject non-positive input
    do
    {
        x = get_int("%s", prompt);
    }
    while (x < 1 || x > 8);

    return x;
}

// print one row of the left pyramid
void print_left_row(int width, int row)
{
    // determine the number of blanks on the left side
    int blanks = width - row;

    for (int i = 0; i < blanks; i++)
    {
        printf(" ");
    }
    for (int j = 0; j < row; j++)
    {
        printf("#");
    }
}

// print one row of the right pyramid
void print_right_row(int row)
{
    // print hashes hashes
    for (int i = 0; i < row; i++)
    {
        printf("#");
    }
}
