#include <stdio.h>

int main(void) {
    FILE *cfPtr = NULL; // cfPtr = clients.txt file pointer

    // fopen opens the file. Exit the program if unable to open the file
    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
        puts("File could not be opened");
        return 1;
    }
    else {
        int account;
        char name[30];
        double balance;

        // Read data from the file
        while (fscanf(cfPtr, "%d%29s%lf", &account, name, &balance) == 3) {
            printf("%d %s %.2f\n", account, name, balance);
        }
        fclose(cfPtr); // fclose closes file
    }
    return 0;
}