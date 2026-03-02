#include <stdio.h>
#include <string.h> 
int checkLogin(char *login, char *passwd, char *logindb, char *passdb); 

int main() {

    char login[5][64] = {"user1", "user2", "user3", "user4", "user5"};
    char password[5][64] = {"pass1", "pass2", "pass3", "pass4", "pass5"};
    
    
    char inputLogin[64], inputPassword[64];
    int isMatch = 0; 

    printf("Enter login : ");
    scanf("%s", inputLogin);
    printf("Enter password : ");
    scanf("%s", inputPassword);


    for (int i = 0; i < 5; i++) {
        
        if (checkLogin(inputLogin, inputPassword, login[i], password[i]) == 1) {
            isMatch = 1; 
            break;       
        }
    }

    
    if (isMatch == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}


int checkLogin(char *login, char *passwd, char *logindb, char *passdb) {
    // strcmp จะคืนค่า 0 เมื่อข้อความเหมือนกันทุกประการ
    if (strcmp(login, logindb) == 0 && strcmp(passwd, passdb) == 0) {
        return 1; // ข้อมูลตรงกันทั้ง login และ password
    } else {
        return 0; 
    }
}
