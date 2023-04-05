#ifndef MAIN_H
#define MAIN_H


int _putchar(char c);
/**

_puts_recursion - prints a string followed by a new line using recursion
@s: pointer to the string to be printed
*/
void _puts_recursion(char *s);
/**

_print_rev_recursion - prints a string in reverse using recursion
@s: pointer to the string to be printed
*/
void _print_rev_recursion(char *s);
/**

_strlen_recursion - calculates the length of a string using recursion
@s: pointer to the string
Return: the length of the string
*/
int _strlen_recursion(char *s);
/**

factorial - calculates the factorial of a number using recursion
@n: the number to calculate the factorial of
Return: the factorial of n
*/
int factorial(int n);
/**

_pow_recursion - calculates the value of x raised to the power of y
@x: the base value
@y: the exponent value
Return: the result of x raised to the power of y
*/
int _pow_recursion(int x, int y);
/**

_sqrt_recursion - calculates the square root of a number using recursion
@n: the number to calculate the square root of
Return: the square root of n
*/
int _sqrt_recursion(int n);
/**

is_prime_number - checks if a number is prime using recursion
@n: the number to check
Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n);
/**

is_palindrome - checks if a string is a palindrome using recursion
@s: pointer to the string to check
Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s);
/**

wildcmp - compares two strings and checks if they match using recursion
@s1: pointer to the first string to compare
@s2: pointer to the second string to compare
Return: 1 if the strings match, 0 otherwise
*/
int wildcmp(char *s1, char *s2);
#endif /* MAIN_H */
