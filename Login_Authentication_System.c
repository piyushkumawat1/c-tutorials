#include <stdio.h>
#include <string.h>

#define MAX_USERNAME 50
#define MAX_PASSWORD 50
#define DATA_FILE "users.dat"

struct User {
    char username[MAX_USERNAME];
    char passwordHash[MAX_PASSWORD];
};
// Simple XOR-based hashing function
void hashPassword(const char *password, char *hashed) {
    const char key = 7;   // key used for XOR operation
size_t len = strlen(password);
    size_t i;

    for (i = 0; i < len; i++) {
        hashed[i] = password[i] ^ key;
    }
    hashed[len] = '\0';
}
// Function to register a new user
void registerUser() {
    struct User user;
    char password[MAX_PASSWORD];

    printf("\n--- User Registration ---\n");
    printf("Enter username: ");
    scanf("%49s", user.username);

    printf("Enter password: ");
    scanf("%49s", password);

    // Hash the password before storing
    hashPassword(password, user.passwordHash);

    // Open file in append-binary mode
    FILE *fp = fopen(DATA_FILE, "ab");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fwrite(&user, sizeof(struct User), 1, fp);
    fclose(fp);

    printf("Registration successful!\n");
}

// Function to login user
int loginUser() {
    struct User user;
    char username[MAX_USERNAME];
    char password[MAX_PASSWORD];
    char hashedPassword[MAX_PASSWORD];
    int found = 0;

    printf("\n--- User Login ---\n");
    printf("Enter username: ");
    scanf("%49s", username);

    printf("Enter password: ");
    scanf("%49s", password);

    // Hash entered password
    hashPassword(password, hashedPassword);

    FILE *fp = fopen(DATA_FILE, "rb");
    if (fp == NULL) {
        printf("No registered users found or error opening file.\n");
        return 0;
    }

    // Read all users and compare
    while (fread(&user, sizeof(struct User), 1, fp) == 1) {
        if (strcmp(username, user.username) == 0 &&
            strcmp(hashedPassword, user.passwordHash) == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found) {
        printf("Login successful!\n");
        return 1;
    } else {
        printf("Invalid credentials.\n");
        return 0;
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Login Authentication System =====\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            // Clear invalid input
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            choice = 0;
        }

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
