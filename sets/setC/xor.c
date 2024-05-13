#include <stdio.h>
int XORGATE(int input1, int input2) {
    return (input1 && !input2) || (!input1 && input2);}//xor= AB'+BA'
int main() {
    int input1, input2;
    printf("Enter input 1 (0 or 1): ");
    scanf("%d", &input1);
    printf("Enter input 2 (0 or 1): ");
    scanf("%d", &input2);
     // Check for valid binary inputs
    if ((input1 != 0 && input1 != 1) || (input2 != 0 && input2 != 1)) {
        printf("Invalid input! Please enter 0 or 1 only.\n");
        return 1;
    }
    printf("Output: %d\n", XORGATE(input1, input2));
}
