# 30 Beginner C Programs

A curated collection of 30 fundamental C programs covering basic syntax, arithmetic operations, conditionals (`if-else`, `switch-case`), iteration (`for`, `while` loops), functions, arrays, and strings.

---

## Program Index

| # | File Name | Concepts Covered | Description |
|---|-----------|------------------|-------------|
| 01 | [01_hello_world.c](ccode/01_hello_world.c) | Basic I/O | Standard "Hello, World!" program |
| 02 | [02_sum_two_numbers.c](ccode/02_sum_two_numbers.c) | `scanf`, `printf` | Input two integers and print their sum |
| 03 | [03_basic_arithmetic.c](ccode/03_basic_arithmetic.c) | Arithmetic operators | Addition, subtraction, multiplication, division, modulus |
| 04 | [04_odd_even.c](ccode/04_odd_even.c) | `if-else`, Modulus (`%`) | Check if a number is even or odd |
| 05 | [05_positive_negative_zero.c](ccode/05_positive_negative_zero.c) | `if-else if-else` | Identify positive, negative, or zero |
| 06 | [06_largest_of_two.c](ccode/06_largest_of_two.c) | Relational operators | Find the larger of two numbers |
| 07 | [07_largest_of_three.c](ccode/07_largest_of_three.c) | Logical `&&` operators | Find the greatest of three numbers |
| 08 | [08_leap_year.c](ccode/08_leap_year.c) | Compound conditionals | Determine whether a year is a leap year |
| 09 | [09_print_1_to_n.c](ccode/09_print_1_to_n.c) | `for` loop | Print sequence from 1 to N |
| 10 | [10_sum_natural_numbers.c](ccode/10_sum_natural_numbers.c) | `for` loop, Accumulator | Compute sum of first N natural numbers |
| 11 | [11_multiplication_table.c](ccode/11_multiplication_table.c) | `for` loop, Formatted output | Print multiplication table of a number |
| 12 | [12_factorial.c](ccode/12_factorial.c) | `for` loop, Large integer | Factorial calculation with input validation |
| 13 | [13_fibonacci_series.c](ccode/13_fibonacci_series.c) | Iteration, Variables | Print first N terms of Fibonacci sequence |
| 14 | [14_reverse_number.c](ccode/14_reverse_number.c) | `while` loop, Modulo / Division | Reverse digits of an integer |
| 15 | [15_palindrome_number.c](ccode/15_palindrome_number.c) | `while` loop, Conditionals | Check if a number reads the same reversed |
| 16 | [16_prime_number.c](ccode/16_prime_number.c) | Loops, Flags, `break` | Determine whether a number is prime |
| 17 | [17_swap_two_numbers.c](ccode/17_swap_two_numbers.c) | Arithmetic, Temp variable | Swap numbers with and without third variable |
| 18 | [18_simple_calculator.c](ccode/18_simple_calculator.c) | `switch-case`, `char` input | Menu-driven basic 4-function calculator |
| 19 | [19_vowel_or_consonant.c](ccode/19_vowel_or_consonant.c) | `ctype.h`, Conditionals | Check if an alphabet is a vowel or consonant |
| 20 | [20_celsius_to_fahrenheit.c](ccode/20_celsius_to_fahrenheit.c) | Floating-point math | Convert between Celsius and Fahrenheit |
| 21 | [21_area_and_perimeter_rectangle.c](ccode/21_area_and_perimeter_rectangle.c) | Geometric formulas | Calculate rectangle area and perimeter |
| 22 | [22_area_and_circumference_circle.c](ccode/22_area_and_circumference_circle.c) | Preprocessor `#define` | Calculate circle area and circumference |
| 23 | [23_armstrong_number.c](ccode/23_armstrong_number.c) | Digit manipulation | Check if a 3-digit number is an Armstrong number |
| 24 | [24_gcd_and_lcm.c](ccode/24_gcd_and_lcm.c) | Euclidean algorithm | Find GCD (HCF) and LCM of two integers |
| 25 | [25_count_digits.c](ccode/25_count_digits.c) | `while` loop | Count the total number of digits in an integer |
| 26 | [26_power_of_number.c](ccode/26_power_of_number.c) | Exponentiation | Compute $base^{exponent}$ without `pow()` |
| 27 | [27_star_pattern_pyramid.c](ccode/27_star_pattern_pyramid.c) | Nested `for` loops | Print right-angled triangle and centered pyramid |
| 28 | [28_array_sum_and_average.c](ccode/28_array_sum_and_average.c) | 1D Arrays, Float math | Calculate sum and average of array elements |
| 29 | [29_find_max_min_array.c](ccode/29_find_max_min_array.c) | Array traversal | Find maximum and minimum elements in an array |
| 30 | [30_string_length_and_reverse.c](ccode/30_string_length_and_reverse.c) | Character arrays, Strings | Find length and reverse string without string.h |

---

## How to Compile and Run

Using `gcc` (MinGW / GCC):

```bash
# Compile
gcc 01_hello_world.c -o 01_hello_world.exe

# Run
.\01_hello_world.exe
```

Or compile and run in a single command on Windows PowerShell:
```powershell
gcc 01_hello_world.c -o app; .\app; Remove-Item app.exe
```
