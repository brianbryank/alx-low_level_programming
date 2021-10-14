Resource


Number Systems Introduction
How to add and minus binary numbers
Binary ..
Binary Addition and Subtraction With Negative Numbers
Bitwise Operators in C part 1
Bitwise Operators in C part 2
Bitwise Operators in C part 3
Bitwise Operators in C part 4
Algorithms: Bit Manipulation
Below are some notes on ~, >> and << bitwise operators.

NOT operator ~

Result is 0 when bit is 1 and 1 when bit is 0
Right Shift >>

leftOperand >> rightOperand
leftOperand: whose bits get right shifted
rightOperand: Decides number of places to shift the bits
Example: 0x02 >> 1 = 0x01
When bits are shifted right the leading positions are filled with zeros
It is equivalent to division by 2rightOperand
Example: 0x02 >> 1 == 0x02 / 21
Left Shift <<

leftOperand << rightOperand
leftOperand: whose bits get right shifted
rightOperand: Decides number of places to shift the bits
Example: 0x01 << 1 = 0x02
When bits are shifted left the trailing positions are filled with zeros
It is equivalent to multiplication by 2rightOperand
Example: 0x01 << 1 == 0x01 / 21
