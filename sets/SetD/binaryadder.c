#include <stdio.h>
void eightBitAdder(int a[], int b[], int sum[]) {
    int carry = 0;
    for (int i = 7; i >= 0; i--) {
        int bitSum = a[i] + b[i] + carry;
        sum[i] = bitSum % 2; 
        carry = bitSum / 2;  
    }
}

void displayBinary(int num[]) {
    for (int i = 0; i < 8; i++) {
        printf("%d", num[i]);
    }
}

int main() {
    int num1[8], num2[8], sum[8];
    printf("Enter the first 8-bit binary number: ");
    for (int i = 0; i < 8; i++) {
        scanf("%1d", &num1[i]); 
    }
    printf("Enter the second 8-bit binary number: ");
    for (int i = 0; i < 8; i++) {
        scanf("%1d", &num2[i]); // Read one digit at a time
    }
	eightBitAdder(num1, num2, sum);
	printf("The sum of the two binary numbers is: ");
    displayBinary(sum);
    printf("\n");
}
