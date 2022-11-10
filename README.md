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
</details>
</div>
