#include <stdio.h>

int main() {
    FILE *file;
    double amount;
    double totalSales = 0;

    // Open sales file for reading
    file = fopen("sales.txt", "r");

    if (file == NULL) {
        printf("Error opening sales.txt file!\n");
        return 1;
    }

    // Read all transaction amounts
    while (fscanf(file, "%lf", &amount) == 1) {
        totalSales = totalSales + amount;
    }

    // Display total sales
    printf("Total Sales for the Day: %.2f\n", totalSales);

    // Close the file
    fclose(file);

    printf("File closed successfully.\n");

    return 0;
}
