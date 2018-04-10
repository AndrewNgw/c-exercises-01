# C Programming - Exercises Session 01

*Do the following exercises using the STK600 development board.  
Commit your solution at the end of each exercise.*

1. Hello World (or turn on a led)
    * Open the "HelloWorld" Atmel Studio project. (if no files are opening, open the `main.c` file in the *Solution Explorer*)
    * Make sure that port A and the led's are connected
    * Build the project, and program the stk600 board
    * Verify that the rightmost led got turned on

1. Try to change the program so that led 3 is turned on instead  
    (commit changes when done)

1. Modify the program so that the led is turned on and off continuously with a delay of 500 ms.  
    Hint: you can use `__delay_ms(double _ms)` defined in `util/delay.h` (`#include <util/delay.h>`)  

1. Create a new *GCC C Executable* project in Atmel Studio. (You can creat it within the same solution by right clicking the solution in the *Solution Explorer* and then selecting *Add* > *New Project...*)  
Create a program that does the following:
    * Light up each led - one by one - from led0 to led7.
    * Each led should be on for 1 second and there should be no visible delay between turning off one led and turning on the next one.
    * When the sequence are done the program should halt.

1. Write a program that prints all the prime numbers in 2 through 100 in binary notation on the led's (one by one with a 1 second delay).   
A prime number is an integer that is greater than 1 and is divisible only by 1 and itself. For example, 2 is the only even prime.  
Pseudocode for finding primes:  
    ```
        for n = 2 until 100 
            for i = 2 until the square root of n 
                if n % i == 0 
                    the number is divisible by i 
            otherwise n is prime
    ```

1. Change the program so that a new prime is displayed only when a button is pressed.

1. Write a timer application for the STK600 board. The timer should be able to count down from 255 seconds displaying a recognizable flashing pattern on the leds when done. Use the buttons to control the timer.  

    * Functional requirements:
        * the leds should show the current time in seconds in binary notation.
        * when the timer is started the time displayed on the leds should update every second.
        * sw7 and 6 should be used to count the time up and down when the timer is not started.
        * sw0 should start and stop the timer.
        * pressing sw7 and sw6 simultaniously should reset the time (optional)

    * Non-functional requirements
        * you should use functions wherever possible to abstract away the details of your program. I would expect to se functions for manipulating the time (like increment and decrement time), controlling the timer (start, stop, reset) and for input and output (like getting input and displaying numbers and patterns)
        * the variable you will use to store the time should not be global but provided to functions by reference (pointer).
