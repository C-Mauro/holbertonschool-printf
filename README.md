### NAME:

&emsp;\_printf()

### SYNOPSIS

&emsp;#include <main.h>

&emsp;**int printf(const char \*_format_, ...);**

### DESCRIPTION

&emsp; This _printf() function pretend work like printf(3), recibes 
 multiple arguments, and print it in order, when the function have this
special character **%** following by a valid specifier, for example **s** 
convert this argument and produce the output acording to the 
format.

 ##### Requiments:
1. Linux
2. git
3. gcc

### Installation:

&emsp; Clone repository to your local testfile directory.

```git clone https://github.com/C-Mauro/holbertonschool-printf.git ```

### compilation:

``` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c ```

#### Specifiers and the spected formats:

&emsp; Always before to a specifier you have a %, so: 

&emsp; **%s**   convert to a character string (end whit a \0)

&emsp; **%c**   character.

&emsp; **%i**   integer.

&emsp; **%d**   signed integer decimal.

&emsp; Note if you use **%%** only **%** it's gona be printed.

<img src="https://github.com/C-Mauro/holbertonschool-printf/blob/master/flowchart.jpg?raw=true">

#### Usage example

&emsp; **%c**

&emsp;\_printf("Mi name start with %c", 'C'); 

&emsp; Output: Mi name start with C 

&emsp;**%s**

&emsp;\_printf("Hello %s", "world!");

&emsp; Output: Hello world!

&emsp;**%i, %d**

&emsp;\_printf("My age is %d", 23);

&emsp; Output: My age is 23

##### But can usit without a specifier:

&emsp;\_printf("Hello World!");

&emsp; Output: Hello world!

#### When you use %%:

&emsp; \_printf("%%");
&emsp; Output: %

###FILES

```_printf.c```

```functions.c```

```main.h```

## Authors

- [@Camila Mauro ](https://github.com/C-Mauro)
- [@Mauro Trenche]()
