<div id="header" align="center">
	<h1  class="page_title" align="center" width="50">C - printf</h1>
	<img src="https://i2.wp.com/www.technhit.in/wp-content/uploads/2016/09/Cprintf1.gif?resize=648%2C200&ssl=1" width="500"/>
	 </div>
<details>
    
  <summary>overview</summary>
</details>

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

---

<details>
    
  <summary>Compilation</summary>
	$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
* You might want to look at the gcc flag -Wno-format when testing with your printf and the standard printf. Example of test file that you could use:
### cat main.c 
```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
* OUTPUTS:
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
</details>

---

<details>
    
  <summary>flow chart</summary>
</details>

---

<details>
    
  <summary>Resources</summary>
* <a href="https://quizgen.doncolton.com/tut/q11.printf.p6.pdf" title="Secrets of printf" target="blank">Secrets of printf</a>
* <a href="https://github.com/Sapitorico/holbertonschool-low_level_programming/tree/main/structures_typedef" target="blank">Structures, typedef</a>
* <a href="https://github.com/Sapitorico/holbertonschool-low_level_programming/tree/main/function_pointers" target="blank">Function pointers</a>
* <a href="https://github.com/Sapitorico/holbertonschool-low_level_programming/tree/main/variadic_functions" target="blank">Variadic functions</a>
</details>

---

<details>
