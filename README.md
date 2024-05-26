This program is a C++ application that provides a menu-driven interface for solving various problems.
The main menu allows the user to choose from eight different problems, each implemented as a separate function. 
Here’s a detailed explanation of each part of the code:



Main Menu and Program Structure
Main Function:

 -The main function displays a welcome message and then prompts the user to start the program or exit.
 
 -If the user chooses to start, they are presented with a menu of eight problems to choose from.
 
 -After selecting a problem, the corresponding function is called to solve the problem.
 
 -The user can choose to keep running the main program or exit after each problem.


Problem 1: Prime Number Check:

-Function is_prime(int n): Checks if a given integer n is a prime number. Prints 1 if prime, 0 otherwise.
 
 -Function problem_1(): Handles user interaction for repeatedly checking prime numbers until the user decides to stop.



Problem 2: Character Array Matching:

 -Function number_of_matches(char arr1[], char arr2[], int char1): Counts and returns the number of matching characters between two arrays arr1 and arr2 up to length char1.
 
 -Function problem_2(): Manages input for two character arrays and calls number_of_matches to find and display the number of matching characters.



problem 3: Positive Divisors:

 -Prompts the user for a positive integer and prints all its divisors in decreasing order. It repeats this process until the user decides to stop.



Problem 4: Array Shift:

 -Function shift_right(float nums[], int len, int l, int r, int dis): Shifts elements in the subarray nums[l] to nums[r] to the right by dis positions.
 
 -Function problem_4(): Manages input for the array and the parameters for shifting, then calls shift_right and displays the shifted array.



Problem 5: Matrix Multiplication:

 -Function matrixMultiplication(int mat_1[3][3], int mat_2[3][3]): Multiplies two 3x3 matrices and prints the result.
 
 -Function problem_5(): Manages input for two 3x3 matrices and calls matrixMultiplication to display the product.



Problem 6: Calculate Hanzalah's Age:

 -Function calculateHanzalahAge(int month, int year): Calculates and prints the age of Hanzalah based on the provided month and year, considering special conditions.
 
 -Function problem_6(): Handles user interaction for repeatedly calculating Hanzalah's age until the user decides to stop.



Problem 7: Encrypt/Decrypt Messages:

 -Function encryptMessages(char arr1[], int len): Encrypts a message by shifting each character by 5 positions and returns the encrypted message.
 
 -Function decryptMessages(char arr1[], int len): Decrypts a message by reversing the shift of 5 positions and returns the decrypted message.
 
 -Function problem_7(): Handles user interaction for encrypting or decrypting messages based on user choice.



Problem 8: Graph Matrix Construction:

 -Function getGraphMatrix(string arr1[][3], int edges): Constructs and prints an adjacency matrix for a graph based on user-provided edges.
 
 -Function problem_8(): Manages input for the number of edges and their details, then calls getGraphMatrix to display the adjacency matrix.
