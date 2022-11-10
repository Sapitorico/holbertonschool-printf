<div id="header" align="center">
	<h1  class="page_title" align="center" width="50">C - printf</h1>
_printf is the standard function in C, and in many programming languages, for printing format strings on the screen.
It is a function that takes an indefinite number of arguments. The parameter coast of a constant string called format, and a number of additional undefined arguments

<img src="https://i2.wp.com/www.technhit.in/wp-content/uploads/2016/09/Cprintf1.gif?resize=648%2C200&ssl=1" width="500"/>
	</div>
	 
---

<div>
<details>
  <summary><h1>Functioning</h1></summary>
  <p>What this function does is to go through the constant format character by character, and according to the character it finds, it evaluates and performs a function.
To be more specific, the format string includes text to be printed literally and formats to be replaced by the text obtained from the parameters added.</p>
Example:

Input:
```c
int mian()
{
	_printf("Character:[%c]|n", 'H');
	return(0);
}
```
Output:
```
Character:[H]
```
<h2>Format indicator</h2>
<p>The symbol '%' denotes the beginning of the formatting mark.</p>
If several indicators are pickled in the format constant string, the values are included in the same order in which they appear.

As shown in the following example:

Input
```c
int main()
{
	_printf("Color %s, number %d", "red", 1234567);
	return (0);
}
```
Output:
```
Color red, number 1234567
```
<h2>Syntax</h2>

```
_printf("% [ format ]", type);
```

<details>
  <summary align="center" ><h1width="50">Format type field</h1></summary>
  <table align="center" width="50">
	<tr>
    <th>format types</th>
    <th>description </th>
  </tr>
  <tr>
    <td>%c</td>
    <td>Prints the corresponding ASCII character</td>
  </tr>
  <tr>
    <td>%s</td>
    <td>Character string (ending in '0')</td>
  </tr>
  <tr>
    <td>%d, %i</td>
    <td>Signed decimal conversion of an integer</td>
  </tr>
  <tr>
    <td>%b</td>
    <td>the unsigned int argument is converted to binary</td>
  </tr>
  <tr>
    <td>%u</td>
    <td>Unsigned decimal conversion of an integer</td>
  </tr>
  <tr>
    <td>%o</td>
    <td>Unsigned octal conversion of an integer</td>
  </tr>
  <tr>
    <td>%x, %X</td>
    <td>Unsigned hexadecimal conversion, x for lowercase, X for uppercase</td>
  </tr>
  <tr>
    <td>%r</td>
    <td>prints the reversed string</td>
  </tr>
  <tr>
    <td>%R</td>
    <td>prints the rot13'ed string</td>
  </tr>
  <tr>
    <td>%p </td>
    <td>Memory address (pointer)</td>
  </tr>
</table>
</details>

<details>
  <summary><h2>compilation and installation</h2></summary>
  
  ```c
  // clones the repository
  $ git clone https://github.com/Sapitorico/holbertonschool-printf
  $ cd holbertonschool-printf
  // creates a main call function
  $ make all
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
  ./printf
  // output examples
 Negative:[-762534]
 Unsigned:[2147484671]
 Unsigned octal:[20000001777]
 Unsigned hexadecimal:[800003ff, 800003FF]
 Character:[H]
 String:[I am a string !]
 ```
 
</details>
	
<div>
<details>

  <summary align="center"><h2 width="50">examples and tests</h2></summary>
  Compilation:
  
  ```c
  
  // You might want to look at the gcc flag -Wno-format when testing with your printf and the standard printf. Example of test file that you could use:
  $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
  
  ````
  
testing function

* INPUTS:

```c
#include "main.h"
int main(void)
{
    int len;
    unsigned int ui;
    void *addr;
	char *str = "Sapitorico";

    len = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n",  str);
	_printf("Prints the rot13'ed:[%R]\n", str);
    return (0);
}
```
* OUTPUTS:

```
Let's try to printf a simple sentence.
Length:[39, 39]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
String:[I am a string !]
Address:[0x7ffe637541f0]
Percent:[%]
Len:[12]
Unknown:[ocirotipaS]
Prints the rot13'ed:[Facvgbevpb]
```
</details>
</div>
</details>
</div>

----

<div>
<details>
<summary><h1>Files</h1></summary>
<h4>Index</h4>
	
1. [ _printf.c ](#_printf.c)
	
2. [ main.h ](#main.h)
	
3. [ get_format.c ](#get_format.c)
	
4. [ print_characters.c ](#print_characters.c)
	
5. [ printf_numbers.c ](#printf_numbers.c)

6. [ print_address.c ](#print_address.c)

7. [ aux_functions.c ](#aux_functions.c)
	
8. [ _printf.man ](#_printf.man)

<a name="_printf.c"></a>
<h2>_printf.c</h2>
This file contains the main code of the printf function.
In this one the function get_formats is invoked to look for the functions of formats, and this same function is the one that is in charge of sending the parameters to these functions to print formats.
Prototype: ```int _printf(const char *format, ...);```
	
<details>
<summary><h1 align="center">flow chart</h1></summary>
	<img width="12032" alt="diagrama de flujo de printf" src="https://user-images.githubusercontent.com/105575956/201009462-014a7d5a-0d4a-4926-bfeb-aa7a00694e03.png">
</details>

<a name="main.h"></a>
<h2>main.h</h2>
this file has all the maros headers used by the functions, function prototypes and structure.
	
```c
/**
 * struct get_formats - contains the formats
 * @f_s: format specifier
 * @f: pointer to formatting functions
 *
 * Description: this structure contains the format indicators in the f_s layer, and the functions corresponding to these formats in the field f
 */
typedef struct get_formats
{
	char f_s;
	int (*f)(va_list args);
} get_t;
```

<a name="get_format.c"></a>
<h2>get_format.c</h2>
This file contains the function that will give us the function to print the required format
Contains the format flags and their respective functions.
	
```get_t functions[ array of formats and functions ]```

<a name="print_characters.c"></a>
<h2>print_characters.c</h2>
This file contains the functions for printing strings composed of characters.

* c	
Converts an argument of type int to a value of type unsigned char and writes the corresponding ASCII character code to the output stream.

* s
Writes the characters of the string specified by an argument of type char *, up to, but not including the terminating NUL character ('\0'), to the output stream.

* x, X 
Converts an unsigned argument to unsigned hexadecimal notation, and writes it to the output stream. The default precision is 1, but if more digits are needed, leading zeros are added.
Hexadecimal notation uses the digits 0 through 9 and the characters a through f or A through F for x or X conversions, respectively, as hexadecimal digits. Subject to the control flag alternatively, 0x or 0X is prefixed to the output.

* R
Encrypt a string in ROT13, rotate 13 positions" a letter, moving any letter 13 positions in the alphabet.

<a name="printf_numbers.c"></a>
<h2>printf_numbers.c</h2>
This file contains the functions to print format strings composed of numbers

* d, i
Converts an int argument to signed decimal notation and writes it to the output stream.

* b
Converts an unsigned integer argument to binary

* u
Converts an unsigned argument to unsigned decimal notation, and writes it to the output stream.

* o
Converts an unsigned argument to unsigned octal notation and writes it to the output stream.

<a name="print_address.c"></a>
<h2>print_address.c</h2>
This file contains the function for printing memory addresses and its respective hexadecimal conversion function.

* p
Converts an argument of type void * to a value of type int, and formats the value as for a hexadecimal conversion (x).

<a name="aux_functions.c"></a>
<h2>aux_functions.c</h2>
This file contains all auxiliary functions used by other functions.

<a name="_printf.man"></a>
<h2>_printf.man</h2>
printf function manual

</details>
</div>

---

<div>
<details>
<summary><h3>Project description</h3></summary>
	
This is the first group project, carried out by Holberton students.
The goal of this assignment is to recreate the printf function, a basic version of the standard function.
It also encourages group and team work with a randomly assigned partner.

---

<details>
  <summary>Requirements</summary>
  
* Allowed editors: vi, vim, emacs.

* You are not allowed to use global variables.

* No more than 5 functions per file.

* it is not necessary to upload the test network to your repository.

* The prototypes of all your functions should be included in your header file called main.h.

* Note that we will not provide the putchar function for this project.
</details>

---

<details>
  <summary>Authorized functions and macros</summary>
  
* write (man 2 write)

* malloc (man 3 malloc)

* free (man 3 free)

* va_start (man 3 va_start)

* va_end (man 3 va_end)

* va_copy (man 3 va_copy)

* va_arg (man 3 va_arg)
</details>
</details>
</div>

---

<details>
  <summary>Resources</summary>
	
<a href="https://quizgen.doncolton.com/tut/q11.printf.p6.pdf" title="Secrets of printf" target="blank">Secrets of printf</a>

<a href="https://github.com/Sapitorico/holbertonschool-low_level_programming/tree/main/structures_typedef" target="blank">Structures, typedef</a>

<a href="https://github.com/Sapitorico/holbertonschool-low_level_programming/tree/main/function_pointers" target="blank">Function pointers</a>

<a href="https://github.com/Sapitorico/holbertonschool-low_level_programming/tree/main/variadic_functions" target="blank">Variadic functions</a>

</details>

<footer>
<p align="center">Attuores:<p>
<p align="center"><a href="https://github.com/Sapitorico" target="blank">Sapitorico</a></p>
<p align="center"><a href="https://github.com/NMenendez24" target="blank">NMenendez24</a></p>
</footer>
