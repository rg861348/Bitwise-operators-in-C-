Aim: To study and implement C++ Bitwise Operators

Tool: VS Code

Theory: Bitwise operators directly perform operations on binary representations of integers. These operators manipulate individual bits of data, enabling efficient computation especially useful in low-level programming, optimization, and hardware-level tasks. The two provided programs demonstrate bitwise manipulation using various operators.

Basic Bitwise Operations:

AND (&): Compares each bit of two numbers and returns 1 only if both bits are 1. OR (|): Compares each bit and returns 1 if either of the bits is 1. NOT (~): Inverts each bit of the number, turning 1 into 0 and 0 into 1, also known as complement. XOR (^): Returns 1 if the corresponding bits of operands are different. Left Shift (<<): Shifts bits of a number to the left, effectively multiplying the number by powers of 2. Right Shift (>>): Shifts bits to the right, effectively dividing the number by powers of 2.

Bit Manipulation (Setting and Resetting Bits)

Setting a Bit: To set (turn on) a particular bit, the program uses OR (|) with a left-shifted mask where the desired bit is set to 1. This ensures that the target bit is set without affecting other bits.

Resetting a Bit: To reset (turn off) a bit, the program uses AND (&) with the complement of the left-shifted mask, ensuring only the targeted bit is cleared.

Program 1: Bitwise Operations

 Step-wise Algorithm

1. Start the program.


2. Initialize two integers:

a = 13

b = 14



3. Perform and store the following bitwise operations:

and_result = a & b → Bitwise AND

or_result = a | b → Bitwise OR

not_a = ~a → Bitwise NOT of a

not_b = ~b → Bitwise NOT of b

xor_result = a ^ b → Bitwise XOR

left_shift_a = a << 1 → Left Shift a by 1

left_shift_b = b << 1 → Left Shift b by 1

right_shift_a = a >> 1 → Right Shift a by 1

right_shift_b = b >> 1 → Right Shift b by 1



4. Display all results:

AND, OR, NOT, XOR, Left Shift, and Right Shift values



5. End the program.




Program 2: Bit Set and Bit Reset

Step-wise Algorithm

1. Start the program.


2. Initialize an integer a = 230.


3. Prompt the user to enter the bit position to set.


4. Read input into bit_set.


5. Set the specified bit using:

set_result = a | (1 << bit_set)



6. Prompt the user to enter the bit position to reset.


7. Read input into bit_reset.


8. Reset the specified bit using:

reset_result = a & (~(1 << bit_reset))



9. Display the results:

Result after setting the bit

Result after resetting the bit



10. End the program.


Conclusion: Hence, we performed the Bitwise Operations on numbers given as input and we have reset and set the given digits of a binary number.
