//// Creating a sequential file
#include <stdio.h>

int main(void) {
    FILE* cfPtr = NULL; // cfPtr = clients.txt file pointer

    // fopen opens the file. Exit the program if unable to create the file
    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        // the file could not be opened, possibly because the program does not have permission to create a file in the specified folder
        puts("File could not be opened");
    }
    else {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        int account = 0; // account number
        char name[30] = ""; // account name
        double balance = 0.0; // account balance

        // read account, name, and balance from input
        while (scanf("%d%29s%lf", &account, name, &balance) == 3) {
            // write account, name, and balance into file with fprintf
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("%s", "? ");
        }
        fclose(cfPtr); // fclose closes file
    }   
    return 0;
}