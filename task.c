#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char username[20];
    char password[20];
    union {
        int active;     
        bool isActive;   
    } status;
} User;

int main() {
    User user;
    printf("In Case You Want To Sign In ,Press 1 If You Want To Create New Account ,Press 2 :\n");
    char num[2];
    gets(num);
    if (num[0] == '2')
    {
    printf("Registration\n");
    printf("Enter username: ");
    scanf("%s", user.username);
    printf("Enter password: ");
    scanf("%s", user.password);
    printf("Set active flag (1 for active, 0 for inactive): ");
    scanf("%d", &user.status.active);
    }
    else if (num[0] == '1'){
    printf("\nLogin\n");
    printf("Enter username: ");
    scanf("%s", user.username);
    printf("Enter password: ");
    scanf("%s", user.password);
    
    if (user.status.active == 1) {
        printf("Login successful!\n");
        user.status.isActive = true;   
    } else {
        printf("Login failed!\n");
        user.status.isActive = false;  
    }

    
    if (user.status.isActive) {
        printf("User is active\n");
    } else {
        printf("User is notactive\n");
    }
    }
     else
    {
        printf("please enter 1 to sign in or enter 2 to create new account\n");
    }

    return 0;
}