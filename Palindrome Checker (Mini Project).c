#include <stdio.h>
#include <string.h>

int isNumberPalindrome(int num) {
    int rev=0, orig=num;
    while(num>0) {
        rev = rev*10 + num%10;
        num /= 10;
    }
    return rev == orig;
}

int isStringPalindrome(char str[]) {
    int len = strlen(str);
    for(int i=0;i<len/2;i++) {
        if(str[i] != str[len-i-1]) return 0;
    }
    return 1;
}

int main() {
    int choice, num;
    char str[100];

    while(1) {
        printf("\n=== Palindrome Checker ===\n");
        printf("1. Check Number\n2. Check String\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 3) {
            printf("Exiting...\n");
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                if(isNumberPalindrome(num))
                    printf("%d is a palindrome.\n", num);
                else
                    printf("%d is not a palindrome.\n", num);
                break;
            case 2:
                printf("Enter string: ");
                scanf(" %[^\n]s", str);
                if(isStringPalindrome(str))
                    printf("\"%s\" is a palindrome.\n", str);
                else
                    printf("\"%s\" is not a palindrome.\n", str);
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
