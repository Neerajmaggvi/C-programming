# C Programming Practice

This repository contains my C programming practice, problem-solving exercises, and experiments while learning C from the fundamentals toward pointers, functions, arrays, recursion, and strings.

## How to Run

Make sure GCC is installed:

```bash
gcc --version
```

Compile a program:

```bash
gcc filename.c -o output
./output
```

For programs inside a folder:

```bash
gcc path/to/program.c -o output
./output
```

## Compiler / Environment

- GCC 13.3.0
- Ubuntu 24.04.4 LTS
- Windows 11
- Programs are mainly written and tested in C

## Repository Structure

| # | Topic | Description |
|---|---|---|
| 1 | [Basics Refresher](#1-basics-refresher) | C syntax, variables, input/output and basic operations |
| 2 | [If-Else Conditions](#2-if-else-conditions) | if, nested-if and switch-case problems |
| 3 | [Loops](#3-loops) | Number-based problems using loops |
| 4 | [Arrays](#4-arrays) | Basic array operations |
| 5 | [PET Array Questions](#5-pet-array-questions) | Additional array problem-solving practice |
| 6 | [Bubble Sort](#6-bubble-sort) | Sorting arrays using bubble sort |
| 7 | [Functions](#7-functions) | Solving problems using user-defined functions |
| 8 | [Pointers](#8-pointers) | Basic pointer operations |
| 9 | [Pass by Reference](#9-pass-by-reference) | Modifying values through addresses |
| 10 | [Recursion](#10-recursion) | Recursive functions and stack behaviour |
| 11 | [Patterns](#11-patterns) | Star, number and alphabet patterns |
| 12 | [Combining Topics](#12-combining-topics) | Problems combining arrays, pointers and functions |
| 13 | [Strings](#13-strings) | Character arrays and string manipulation |

> `a.out` files are compiler-generated executables and are not included in the practice-program lists below.

---

## 1. Basics Refresher

Folder: `Basics-refresher/`

- [`ASCII.c`](Basics-refresher/ASCII.c) - Print the ASCII value of a character.
- [`addition.c`](Basics-refresher/addition.c) - Add numbers.
- [`area-of-rectangle.c`](Basics-refresher/area-of-rectangle.c) - Calculate the area of a rectangle.
- [`arthmatic.c`](Basics-refresher/arthmatic.c) - Perform arithmetic operations.
- [`display.c`](Basics-refresher/display.c) - Practice basic input and output.
- [`floating-point.c`](Basics-refresher/floating-point.c) - Practice floating-point values.
- [`hello.c`](Basics-refresher/hello.c) - Print Hello World.
- [`last-number.c`](Basics-refresher/last-number.c) - Find the last digit of a number.
- [`literal-characters.c`](Basics-refresher/literal-characters.c) - Practice character literals.
- [`mix-data-input.c`](Basics-refresher/mix-data-input.c) - Read different data types.
- [`personal-info.c`](Basics-refresher/personal-info.c) - Read and display personal information.
- [`power.c`](Basics-refresher/power.c) - Calculate the power of a number.
- [`reverse.c`](Basics-refresher/reverse.c) - Reverse a number.
- [`size.c`](Basics-refresher/size.c) - Find the size of data types.
- [`swap.c`](Basics-refresher/swap.c) - Swap two values.
- [`test.c`](Basics-refresher/test.c) - Basic C testing/practice.
- [`var.c`](Basics-refresher/var.c) - Practice variables.
- [`var1.c`](Basics-refresher/var1.c) - Practice variables and input.

---

## 2. If-Else Conditions

Folder: `if-family/`

### If Problems

Folder: `if-family/if-problems/`

- [`compare.c`](if-family/if-problems/compare.c) - Compare values using conditions.
- [`day-num.c`](if-family/if-problems/day-num.c) - Work with a day number.
- [`div.c`](if-family/if-problems/div.c) - Check divisibility.
- [`div5.c`](if-family/if-problems/div5.c) - Check divisibility by 5.
- [`largest_of_2.c`](if-family/if-problems/largest_of_2.c) - Find the largest of two numbers.
- [`marks.c`](if-family/if-problems/marks.c) - Process marks using conditions.
- [`middle.c`](if-family/if-problems/middle.c) - Find the middle value.
- [`temp.c`](if-family/if-problems/temp.c) - Practice temperature-based conditions.
- [`test.c`](if-family/if-problems/test.c) - Basic if-condition practice.
- [`vote.c`](if-family/if-problems/vote.c) - Check voting eligibility.
- [`vowel.c`](if-family/if-problems/vowel.c) - Check whether a character is a vowel.

### Nested If

Folder: `if-family/nested-if/`

- [`leap-year.c`](if-family/nested-if/leap-year.c) - Check whether a year is a leap year.
- [`middle_number.c`](if-family/nested-if/middle_number.c) - Find the middle number.
- [`problem1.c`](if-family/nested-if/problem1.c) - Practice nested-if conditions.
- [`smallest-of-three.c`](if-family/nested-if/smallest-of-three.c) - Find the smallest of three numbers.

### Switch Case

Folder: `if-family/switch/`

- [`calculator.c`](if-family/switch/calculator.c) - Calculator using switch case.
- [`compass.c`](if-family/switch/compass.c) - Use switch case for compass directions.

---

## 3. Loops

Folder: `Loops/`

- [`Question1.c`](Loops/Question1.c) - Print numbers from 1 to N.
- [`Question2.c`](Loops/Question2.c) - Print even numbers between 1 and N.
- [`Question3.c`](Loops/Question3.c) - Find the sum of the first N natural numbers.
- [`Question4.c`](Loops/Question4.c) - Find the factorial of a number.
- [`Question5.c`](Loops/Question5.c) - Count the digits in a number.
- [`Question6.c`](Loops/Question6.c) - Reverse a number.
- [`Question7.c`](Loops/Question7.c) - Find the sum of digits.
- [`Question8.c`](Loops/Question8.c) - Find the product of digits.
- [`Question9.c`](Loops/Question9.c) - Find the largest and smallest digit.
- [`Question10.c`](Loops/Question10.c) - Count even and odd digits.
- [`Question11.c`](Loops/Question11.c) - Check whether a number contains a given digit.
- [`Question12.c`](Loops/Question12.c) - Check for a Strong Number.
- [`Question13.c`](Loops/Question13.c) - Check for an Armstrong Number.
- [`Question14.c`](Loops/Question14.c) - Check whether a number is prime.
- [`Question15.c`](Loops/Question15.c) - Check prime numbers up to a limit.
- [`Question16.c`](Loops/Question16.c) - Check for a Perfect Number.
- [`Question17.c`](Loops/Question17.c) - Check for an Automorphic Number.
- [`Question18.c`](Loops/Question18.c) - Check for a Neon Number.
- [`Question19.c`](Loops/Question19.c) - Check for a Spy Number.
- [`Question20.c`](Loops/Question20.c) - Check for a Happy Number.
- [`Question21.c`](Loops/Question21.c) - Find the Digital Root.
- [`syntax.c`](Loops/syntax.c) - Practice loop syntax.

---

## 4. Arrays

Folder: `arrays/`

- [`store-print.c`](arrays/store-print.c) - Read and print array elements.
- [`reverse-print.c`](arrays/reverse-print.c) - Print array elements in reverse order.
- [`reverse-array.c`](arrays/reverse-array.c) - Reverse an array.
- [`swap-first-last-elements.c`](arrays/swap-first-last-elements.c) - Swap the first and last elements.
- [`rotate-array-left.c`](arrays/rotate-array-left.c) - Rotate an array to the left.
- [`rotate-left-for-n-position.c`](arrays/rotate-left-for-n-position.c) - Rotate an array left by N positions.
- [`insert-array-element.c`](arrays/insert-array-element.c) - Insert an element into an array.
- [`delete-array-element.c`](arrays/delete-array-element.c) - Delete an element from an array.
- [`merge-array.c`](arrays/merge-array.c) - Merge arrays.
- [`frequency-of-elements.c`](arrays/frequency-of-elements.c) - Find element frequencies.
- [`duplicate-elements-count.c`](arrays/duplicate-elements-count.c) - Count duplicate elements.
- [`unique-elements-print.c`](arrays/unique-elements-print.c) - Print unique elements.
- [`replace-occurrence-elements.c`](arrays/replace-occurrence-elements.c) - Replace occurrences of array elements.
- [`copy-duplicate-into-unique.c`](arrays/copy-duplicate-into-unique.c) - Copy duplicate elements into a unique-element array.
- [`copy_unique_elements.c`](arrays/copy_unique_elements.c) - Copy unique elements.
- [`missing_number.c`](arrays/missing_number.c) - Find a missing number in an array.

---

## 5. PET Array Questions

Folder: `PET_Questios/ARRAY/`

- [`comine.c`](PET_Questios/ARRAY/comine.c) - Array problem-solving practice.
- [`consecutive_elements_check.c`](PET_Questios/ARRAY/consecutive_elements_check.c) - Check consecutive array elements.
- [`deficient_number.c`](PET_Questios/ARRAY/deficient_number.c) - Practice deficient-number logic.
- [`delete-position-N-times.c`](PET_Questios/ARRAY/delete-position-N-times.c) - Delete an element at a position N times.
- [`even-odd-parity.c`](PET_Questios/ARRAY/even-odd-parity.c) - Work with even/odd parity.
- [`find-first-duplicate.c`](PET_Questios/ARRAY/find-first-duplicate.c) - Find the first duplicate element.
- [`largest-smallest-element.c`](PET_Questios/ARRAY/largest-smallest-element.c) - Find largest and smallest elements.
- [`longest_consecutive_occurence.c`](PET_Questios/ARRAY/longest_consecutive_occurence.c) - Find the longest consecutive occurrence.
- [`move-array-n-position.c`](PET_Questios/ARRAY/move-array-n-position.c) - Move array elements by N positions.
- [`move-value-then-sort.c`](PET_Questios/ARRAY/move-value-then-sort.c) - Move a value and then sort the array.
- [`pair-sum.c`](PET_Questios/ARRAY/pair-sum.c) - Find array elements with a target pair sum.
- [`prime-number.c`](PET_Questios/ARRAY/prime-number.c) - Work with prime numbers in an array.
- [`replace-zero-once.c`](PET_Questios/ARRAY/replace-zero-once.c) - Replace zero once according to the problem condition.
- [`replace_once_zeros_array.c`](PET_Questios/ARRAY/replace_once_zeros_array.c) - Replace zero once in an array.

---

## 6. Bubble Sort

Folder: `bubble-sort/`

- [`ascending-order.c`](bubble-sort/ascending-order.c) - Sort an array in ascending order using bubble sort.
- [`decending-order.c`](bubble-sort/decending-order.c) - Sort an array in descending order using bubble sort.

---

## 7. Functions

Folder: `functions/`

- [`character-uppercase.c`](functions/character-uppercase.c) - Convert a character to uppercase using a function.
- [`count_digit.c`](functions/count_digit.c) - Count digits using a function.
- [`even_num.c`](functions/even_num.c) - Work with even numbers using a function.
- [`factorial.c`](functions/factorial.c) - Find factorial using a function.
- [`find-max-four.c`](functions/find-max-four.c) - Find the maximum of four numbers using a function.
- [`palindrome.c`](functions/palindrome.c) - Check for a palindrome using a function.
- [`prime-number.c`](functions/prime-number.c) - Check for a prime number using a function.
- [`reverse-of-number.c`](functions/reverse-of-number.c) - Reverse a number using a function.
- [`sum-of-digits.c`](functions/sum-of-digits.c) - Find the sum of digits using a function.
- [`sum-of-two.c`](functions/sum-of-two.c) - Find the sum of two numbers using a function.

---

## 8. Pointers

Folder: `pointers/`

- [`change-variable.c`](pointers/change-variable.c) - Change a variable using a pointer.
- [`swap.c`](pointers/swap.c) - Swap values using pointers.

---

## 9. Pass by Reference

Folder: `pass-by-reference/`

- [`add-by-10.c`](pass-by-reference/add-by-10.c) - Add 10 to a value using pass by reference.
- [`change-the-value.c`](pass-by-reference/change-the-value.c) - Change a value using pass by reference.
- [`copy-unique-elements.c`](pass-by-reference/copy-unique-elements.c) - Copy unique array elements using addresses.
- [`largest-of-two.c`](pass-by-reference/largest-of-two.c) - Find the largest of two values.
- [`min-and-max.c`](pass-by-reference/min-and-max.c) - Find minimum and maximum values.
- [`remove_duplicate_same_array.c`](pass-by-reference/remove_duplicate_same_array.c) - Remove duplicate elements from the same array.
- [`reverse-array.c`](pass-by-reference/reverse-array.c) - Reverse an array using addresses.
- [`reverse.c`](pass-by-reference/reverse.c) - Reverse a value using pass by reference.
- [`second_largest.c`](pass-by-reference/second_largest.c) - Find the second-largest element.
- [`square-cube.c`](pass-by-reference/square-cube.c) - Find square and cube values.
- [`sum-difference.c`](pass-by-reference/sum-difference.c) - Find sum and difference.
- [`swap_three_numbers.c`](pass-by-reference/swap_three_numbers.c) - Swap three numbers.
- [`swap_to_numbers.c`](pass-by-reference/swap_to_numbers.c) - Swap two numbers.

---

## 10. Recursion

Folder: `recursion/`

- [`back-trace.c`](recursion/back-trace.c) - Practice recursion and back tracing.
- [`count_digit.c`](recursion/count_digit.c) - Count digits using recursion.
- [`factorial.c`](recursion/factorial.c) - Find factorial using recursion.
- [`print-N-number.c`](recursion/print-N-number.c) - Print numbers recursively.
- [`print_reverse.c`](recursion/print_reverse.c) - Print values in reverse using recursion.
- [`stack-formation.c`](recursion/stack-formation.c) - Understand stack formation during recursion.
- [`sum-of-N-natural.c`](recursion/sum-of-N-natural.c) - Find the sum of N natural numbers recursively.
- [`sum-of-digit.c`](recursion/sum-of-digit.c) - Find the sum of digits recursively.

---

## 11. Patterns

Folder: `patterns/`

### Alphabet Patterns

- [`alphabet-trangle.c`](patterns/alphabet-trangle.c) - Print an alphabet triangle.
- [`alphbate-print.c`](patterns/alphbate-print.c) - Print alphabet patterns.
- [`alphbate-pyramid-complex.c`](patterns/alphbate-pyramid-complex.c) - Print a complex alphabet pyramid.
- [`alphbate-reverse-trangle.c`](patterns/alphbate-reverse-trangle.c) - Print a reverse alphabet triangle.
- [`alphbate-trangle.c`](patterns/alphbate-trangle.c) - Print an alphabet triangle variation.
- [`alpbate-number-mix.c`](patterns/alpbate-number-mix.c) - Print a mixed alphabet-number pattern.

### Number Patterns

- [`normal-number.c`](patterns/normal-number.c) - Print a normal number pattern.
- [`number-X.c`](patterns/number-X.c) - Print a number X pattern.
- [`number-pyramid.c`](patterns/number-pyramid.c) - Print a number pyramid.
- [`number-pyramid-mast.c`](patterns/number-pyramid-mast.c) - Print a number pyramid variation.
- [`number-trangle.c`](patterns/number-trangle.c) - Print a number triangle.
- [`odd-trangle.c`](patterns/odd-trangle.c) - Print an odd-number triangle.
- [`reverse-number.c`](patterns/reverse-number.c) - Print a reverse number pattern.
- [`reverse-odd-trangle.c`](patterns/reverse-odd-trangle.c) - Print a reverse odd-number triangle.
- [`zero-one-trangle.c`](patterns/zero-one-trangle.c) - Print a 0-1 triangle.

### Star and Shape Patterns

- [`complex-star-printing.c`](patterns/complex-star-printing.c) - Print a complex star pattern.
- [`hollow-rectangle.c`](patterns/hollow-rectangle.c) - Print a hollow rectangle.
- [`rhombus.c`](patterns/rhombus.c) - Print a rhombus pattern.
- [`solid-rectangle.c`](patterns/solid-rectangle.c) - Print a solid rectangle.
- [`solid-square.c`](patterns/solid-square.c) - Print a solid square.
- [`star-cross.c`](patterns/star-cross.c) - Print a star cross.
- [`star-plus.c`](patterns/star-plus.c) - Print a star plus.
- [`star-pyramid.c`](patterns/star-pyramid.c) - Print a star pyramid.
- [`star-trangle.c`](patterns/star-trangle.c) - Print a star triangle.
- [`star-trangle-advance.c`](patterns/star-trangle-advance.c) - Print an advanced star triangle.
- [`reverse-trangle.c`](patterns/reverse-trangle.c) - Print a reverse triangle.
- [`complex-number-printing.c`](patterns/complex-number-printing.c) - Print a complex number pattern.

---

## 12. Combining Topics

Folder: `combine-topics/`

- [`read-and-print-array-with-pointers.c`](combine-topics/read-and-print-array-with-pointers.c) - Read and print an array using pointers.
- [`reverse-array-with-two-pointers.c`](combine-topics/reverse-array-with-two-pointers.c) - Reverse an array using two pointers.
- [`sum-of-array-with-fun.c`](combine-topics/sum-of-array-with-fun.c) - Find the sum of an array using a function.

---

## 13. Strings

Folder: `strings/`

- [`check_palindrome.c`](strings/check_palindrome.c) - Check whether a string is a palindrome.
- [`consonants.c`](strings/consonants.c) - Count/process consonants in a string.
- [`count_vowels.c`](strings/count_vowels.c) - Count vowels in a string.
- [`find_the_char.c`](strings/find_the_char.c) - Find a character in a string.
- [`find_the_lenght.c`](strings/find_the_lenght.c) - Find the length of a string.
- [`first_non_repeating.c`](strings/first_non_repeating.c) - Find the first non-repeating character.
- [`my_strcat.c`](strings/my_strcat.c) - Implement string concatenation.
- [`my_strcmp.c`](strings/my_strcmp.c) - Implement string comparison.
- [`my_strcpy.c`](strings/my_strcpy.c) - Implement string copying.
- [`occurrences_of_char.c`](strings/occurrences_of_char.c) - Count occurrences of a character.
- [`remove_duplicate.c`](strings/remove_duplicate.c) - Remove duplicate characters from a string.
- [`remove_occurrences_from_str.c`](strings/remove_occurrences_from_str.c) - Remove occurrences of a character from a string.
- [`reverse_string.c`](strings/reverse_string.c) - Reverse a string.
- [`syntax.c`](strings/syntax.c) - Practice basic string syntax.
- [`upper_lower_case.c`](strings/upper_lower_case.c) - Convert/process upper and lower case characters.
- [`word_count.c`](strings/word_count.c) - Count words in a string.

---

## Current Learning Areas

- C fundamentals
- Conditional statements
- Loops
- Arrays
- Sorting
- Functions
- Pointers
- Pass by reference
- Recursion
- Pattern programming
- Strings
- Combining multiple C concepts

## Goal

Build strong C programming fundamentals through regular problem-solving and gradually move toward embedded C and systems programming.
