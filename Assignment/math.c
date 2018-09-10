/*
 *
 * math.c
 *
 * Created on: Sep 9, 2018
 * Last Edited: Sep 10, 2018
 * Author: Anwar Hussein
 *
 */

/* The following functions are implemented in this file.
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/


#include <stdio.h> // This library allows standard input/output operations
#include <math.h>

 int math(int num1, int num2, char operator, int result){

          /*
           *      int math: shows that the function "math" returns an integer value;
           *      int num1:  "     "    "  variable "num1"   has an integer input;
           *      int num2:  "     "    "  variable "num1"   has an integer input;
           * char Operator:  "     "    "  operator "operator" has a character input;
           */


/********** beginning of the implementation (Here we go) *************/
        switch (operator){

/********* Addition *************/
        case '+' :
            result = num1 + num2;
            return result; // The integer value result
                           //will be returned to the function.
            break;

/********* Subtraction *************/
        case '-' :
            result = num1 - num2;
            return result;
            break;

/********* Multiplication *************/
        case '*' :
            result = num1 * num2;
            return result;
            break;

/********* Division *******************/
        case '/' :
            result = num1 / num2;
            return result;
            break;

/********* Modulus *******************/
        case '%' :
            result = num1 % num2;
            return result;
            break;

/********* Left Shift ****************/
        case '<' :
            result = num1 << num2;
            return result;
            break;

/********* Right Shift ***************/
        case '>' :
            result = num1 >> num2;
            return result;
            break;

/********* Bitwise AND ***************/
        case '&' :
            result = num1 & num2;
            return result;
            break;

/********* Bitwise OR ***************/
        case '|' :
            result = num1 | num2;
            return result;
            break;

/********* Bitwise XOR ****************/
        case '^' :
            result = num1 ^ num2;
            return result;
            break;

/********* Bitwise Inverse *************/
        case '~' :
            result= ~num1;
            return result;
            break;

     } // End of math function
