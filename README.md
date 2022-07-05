# Printf

![índice](https://user-images.githubusercontent.com/105948301/177329737-624ffd16-7683-4821-bffb-6f2cd1f5c5b0.png)

Ft_utils

ft_utils contains a number of short functions that can be reused throughout the program.

numb_len
is a function used in putnbr, to know how many numbers in decimal base, to be printed in putnbr.

ft_char

is used simply to print a single character, this function is used to replicate the %c of the original printf.

ft_percent

is basically to print the % symbol after it is called in ft_printf like this "%%".

ft_putchar

a void function that is used in several places to do a process and write at the same time

ft_putnbr_base

a function that prints numbers receiving as parameter the number to print and in which type of base you want it, this one is used several times in the program, and it is the most important function.
it works with a function called checkbase, that checks that the base that has been passed as parameter is correct (that no character is repeated) and then returns the length of the base to be used in putnbr_base, it is a very basic program using recursion!

ft_printf_utils

in this file are the rest of the functions that make up my printf function

ft_putstr (%s)

this is a function that writes a string received as a parameter, and returns null in case of receiving an empty string

ft_ptr (%p)

function to print the address in memory of a pointer, it is made using putnbr_base and a hexadecimal base

ft_unsigned_number(%u)

same function as ft_ptr but this time using a decimal base, and a cast to unsigned long long!

I hope I have explained well the operation of this program and thank you very much for reading!
