#include <stdio.h>

void printTop() {
    printf("%c", 201);
    for (int i = 0; i < 30; i++) printf("%c", 205); 
    printf("%c\n", 187); 
}

void printSeparator() {
    printf("%c", 204); 
    for (int i = 0; i < 30; i++) printf("%c", 205); 
    printf("%c\n", 185); 
}

void printBottom() {
    printf("%c", 200); 
    for (int i = 0; i < 30; i++) printf("%c", 205); 
    printf("%c\n", 188); 
}

void printPascalsTriangle(int rows){
    for(int i=0; i<rows; i++){
        int value=1;
        
        for(int j=0; j<=i; j++){
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

void fibonacci(int n){
    int first=0, second=1, next;
    
    printf("%d %d ", first, second);
    
    for(int i= 2; i<n; i++){
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int getValidInput() {
    int input;
    while (1) {
        if (scanf("%d", &input) != 1) { 
            printf("Invalid input! Please enter a valid number: ");
            while(getchar() != '\n'); 
        } else {
            break;
        }
    }
    return input;
}

int main() {
    int choice;
    int i=0, j=0, k=0, n=0, rows=0, num=0;

    while(1){
        printf("\n");
        printTop();
        printf("%c          MAIN MENU           %c\n", 186, 186);
        printSeparator();

        printf("%c 1. Shape 1                   %c\n", 186, 186);
        printf("%c 2. Shape 2                   %c\n", 186, 186);
        printf("%c 3. Fibonacci Sequence        %c\n", 186, 186);
        printf("%c 4. Pascals Triangle          %c\n", 186, 186);
        printf("%c 5. Exit                      %c\n", 186, 186);

        printBottom();

        printf("Enter Choice: ");
        choice = getValidInput();
        
        switch(choice){
            case 1: 
                for(i=1; i<6; i++){
                    for(j=1; j<=i; j++){
                        printf(" ");   
                    }
                    for(k=5; k>=i; k--){
                        printf("*");
                    }
                    printf("\n");
                }    
                break;
        
            case 2:
                for(i=1; i<6; i++){
                    for(j=5; j>=i; j--){
                        printf(" ");
                    }
                    for(k=1; k<=i; k++){
                        printf("*");
                    }
                    printf("\n");
                }
                break;
        
            case 3:
                printf("Enter the number of Fibonacci numbers you want: ");
                n = getValidInput();
                fibonacci(n);
                break;
        
            case 4:
                printf("Enter the number of rows: ");
                rows = getValidInput();
                printPascalsTriangle(rows);
                break;
        
            case 5:
                printf("Exiting program...\n");
                printf("Do you want to try again?\n0=Yes 1=No: ");
                num = getValidInput();
                if (num == 1){
                    printf("Goodbye!\n");
                    return 0;
                }
                break;
            
            default:
                printf("Invalid Choice. Please try again\n");
                break;
        }
    }
    return 0;

}
