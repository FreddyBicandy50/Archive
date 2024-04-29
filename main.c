#include <unistd.h>

void print_combination(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        char digit = arr[i] + '0';
        write(1, &digit, 1);
    }
}

void generate_combinations(int arr[], int index, int n, int current)
{
    if (index == n)
    {
        print_combination(arr, n);
        if (arr[0] < 10 - n)
        {
            write(1, ", ", 2);
        }
        return;
    }

    for (int i = current; i < 10; i++)
    {
        arr[index] = i;
        generate_combinations(arr, index + 1, n, i + 1);
    }
}

void ft_print_combn(int n)
{
    if (n <= 0 || n >= 10)
    {
        return; // Invalid input
    }

    int arr[10]; // Fixed-size array
    generate_combinations(arr, 0, n, 0);
}

int main()
{
    ft_print_combn(2); // You can change the value of n here
    return 0;
}
