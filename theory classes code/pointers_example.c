// pointers are used in C to store a memory address

int main() 
{
    int num = 42;       // num is declared as an int with value 42
    int *ptr = &num;    // ptr is a pointer variable that stores the address of the num variable
    // pointer for ptr made to address of num; stores same value as num

    printf("Value of num: %d\n", num);     // Output: Value of num: 42
    printf("Value at ptr: %d\n", *ptr);    // Output: Value at ptr: 42
    printf("Address of num: %p\n", &num);  // Output: Address of num: <memory address>
    printf("Value of ptr: %p\n", ptr);     // Output: Value of ptr: <memory address>

    return 0;
}
