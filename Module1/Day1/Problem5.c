#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1: // Set 1st bit
            num |= 1; // OR
            break;
        case 2: // Clear 31st bit
            num &= ~(1 << 31); // AND
            break;
        case 3: // Toggle 16th bit
            num ^= (1 << 16); // XOR 
            break;
        default:
            printf("Error: Invalid operation type.\n");
            break;
    }

    return num;
}

int main() {
    int num, oper_type, result;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
