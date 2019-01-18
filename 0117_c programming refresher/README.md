Credit card companies use built-in checksums as added security measures when creating the account numbers on credit cards. This means that there are only certain valid credit card numbers, and validity can quickly be detected by using various mathematical operations.

In this part of the assignment, you will implement a simple validation algorithm on a credit card number. Note that this algorithm is purely made up; don’t try to use it to create fake credit card numbers! ☺

For our purposes, we will assume that the credit card is a 12-digit number, and that to be valid it must adhere to these rules:
1.	The first digit must be a 4.
2.	If the third digit is even, the fourth must be odd; if the third digit is odd, the fourth must be even.
3.	The fourth digit must be one greater than the fifth digit.
4.	The second digit must either be a zero or equal to the sum of the ninth and tenth digits.
5.	The product of the first, fifth, and ninth digits must be 24.
6.	The sum of all digits must be evenly divisible by 4.
7.	If you treat the first two digits as a two-digit number, and the seventh and eight digits as a two digit number, their sum must be 100.

Some valid credit card numbers (according to these rules) are 480760521766 and 409434602754.

#### Step 1.
First, implement the functions in **cc_rules.c**, which contains skeleton code for the different functions, one for each of the above rules. Each function takes a pointer to a **creditcard** struct (defined in **creditcard.h**) as its input, and should return 1 if the rule is satisfied, and 0 if the rule is violated; the functions should return -1 if the argument is null or any other error occurs. Implement the functions in cc_rules.c according to the rules above.

For this part of the assignment, do not change the creditcard.h or **cc_rules.h** files, including the names of the functions or their signatures (parameters and return type), and the definition of the creditcard struct; you may create additional helper functions in cc_rules.c if need be.

You do not need a main function for this part of the assignment (you will create that later), just the individual functions for the nine different rules, and the is_valid function.

To see if your cc_rules.c code compiles, you will need to use your compiler’s –c flag, since it will not be able to create an executable without a main function. 
Note that the Makefile we provided has a separate build target for cc_rules.c that creates cc_rules.o. 
You can check that your code compiles by running "make cc_rules".


#### Step 2.
Now edit **cc_validate.c** so that its main function that takes the credit card number to be validated as a command-line argument. You should not prompt the user to enter the credit card number! It should be specified when the program is run.

Create a instance of the creditcard struct and use the check_credit_card function to determine whether the card number satisfies all rules. Then display a message indicating the credit card number and whether it passed the check. If it’s invalid, don't indicate which test failed; we don’t want hackers figuring out the algorithm this way!

Sounds pretty straightforward, right? Not so fast! The check_credit_card function uses the creditcard struct as its input, but the number comes into main as a string! So the trick is, how do you convert from a string to an integer array so that you can put it in the creditcard struct’s field? The answer is not as easy as it may seem!

Hint: you may want to use the atoi function (http://www.cplusplus.com/reference/cstdlib/atoi/), which converts a string to an integer, but you’ll have to figure out how to keep the value within the bounds of the int datatype, and (more importantly) how to create the integer array. Ask a member of the instruction staff if you need help. 
