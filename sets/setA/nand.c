#include <stdio.h>

int nand_gate(int a, int b) {
    // Return the NAND of inputs a and b
    return !(a && b);
}

int main() {
    int input1, input2;

    // Prompt user to enter two binary values
    printf("Enter first binary input (0 or 1): ");
    scanf("%d", &input1);
    printf("Enter second binary input (0 or 1): ");
    scanf("%d", &input2);

    // Check for valid binary inputs
    if ((input1 != 0 && input1 != 1) || (input2 != 0 && input2 != 1)) {
        printf("Invalid input! Please enter 0 or 1 only.\n");
        return 1;
    }

    // Compute NAND and display the result
    int result = nand_gate(input1, input2);
    printf("NAND(%d, %d) = %d\n", input1, input2, result);

    return 0;
}
