![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)

# 0x19. C - Stacks, Queues - LIFO, FIFO.
<div style="text-align: justify">

# Getting Started :running:

## Table of Contents
* [AUTHORS](./AUTHORS)
* [MIT License](./LICENSE)
* [About](#about)
* [Requirements](#requirements)
* [Installing and using](https://github.com/Alexoat76/monty/blob/main/README.md#:~:text=in%20the%20project.-,Installing%20and%20Using,-%F0%9F%92%BE)
* [Commands Overview](https://github.com/Alexoat76/monty/edit/main/README.md#:~:text=in%20the%20project.-,Installing%20and%20Using,-%F0%9F%92%BE)
* [Dependences](#dependences)
* [Credits](#credits)

## About
In this project, you should be to create an interpreter for Monty ByteCode files, utilizing Stacks (LIFO) and Queues (FIFO). 
<div style="text-align: justify">
Don't forget to fully meet the following development requirements. </div>



## Requirements :page_with_curl:

### Resources

**Read or watch** :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/webhp?q=stack%20and%20queue)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/watch?v=wjI1WNcIntg)

[How do I use extern to share variables between source files in C?](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)


## General :page_with_curl:
<div style="text-align: justify">
* Allowed editors: vi, vim, emacs. </div>
<div style="text-align: justify">
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options: 
	
`-Wall -Werror -Wextra -pedantic -std=c90`. </div>
<div style="text-align: justify">
* All your files should end with a new line. </div>
<div style="text-align: justify">
	
*A `README.md` file, at the root of the folder of the project is mandatory. </div>

<div style="text-align: justify">
* Your code should use the Betty. It will be checked using</div>

`betty-style.pl` and `betty-doc.pl`.</div>

Please visit the [Betty style](https://github.com/holbertonschool/Betty/wiki) for the full specifications of Betty coding and documentation styles.

<div style="text-align: justify">
* You allowed to use a maximum of `one global variable`. </div>
<div style="text-align: justify">
* No more than 5 functions per file. </div>

<div style="text-align: justify">
	
*You are allowed to use the `C standard library`. 

<div style="text-align: justify">
			
*The prototypes of all your functions should be included in your header file called </div>

<div style="text-align: justify"> 

`monty.h` </div>

<div style="text-align: justify">
	
*Don’t forget to push your `header file`.</div>
<div style="text-align: justify">
* All your header files should be include guarded. </div>
<div style="text-align: justify">
* You are expected to do the tasks in the order shown in the project.	

## Installing and Using  :floppy_disk:

Clone the repository into a new directory:

```
$ git clone https://github.com/Alexoat76/monty.git
```
Compile with the following:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty
```

Run the interpreter on a file:

```
$ ./monty file.m
```

## Commands Overview  🔦

* The Monty Interpreter will tokenize command inputs, ignoring all whitespaces and comments which start with a `#` sign. 
* Lines can be empty and can contain any number of spaces before or after an opcode and its argument **(only the first opcode and/or argument is taken into account)**.

Potential failures and their messages will be mentioned for each operation. Failures that can occur at this time include:

- `USAGE` : *If given no file or too many arguments*
- `Error` : Can't open file <file name>.  *If given invalid file*
- `Error` : unknown instruction <opcode>.  *If unknown operation given*
- `Error`: malloc failed.   *if malloc fails*
		
## Dependences :file_folder:

* [monty.h](./monty.h): Header file containing definitions and prototypes for all types 
	and functions written for the project `0x19. C - Stacks, Queues - LIFO, FIFO`.
* [monty_main.c](./monty_main.c) - The entry point for `Monty Interpreter`.
* [start_monty.c](./start_monty.c) - Functions to initialize the `Monty Interpreter` and returns the correct operation function.
* [tokenizer.c](./tokenizer.c) - Contains the helper functions for tokenize.
* [support_funct.c](./support_funct.c) - Contains the helper functions for the correct operation of `Monty Interpreter`.
* [set_errors.c](./set_errors.c) - Functions for checking and exits given certain conditions. Other file(s): [def_errors_01.c](./def_errors_01.c) , [def_errors_02.c](./def_errors_02.c)
* [stack_core.c](./stack_core.c) - Core functions to manipulate and change the linked list.
* [opcode_functions_01.c](opcode_functions_01.c) - Functions for each `operation code`. Other file(s): [opcode_functions_02.c](opcode_functions_02.c), [opcode_functions_03.c](opcode_functions_03.c), [opcode_functions_04.c](opcode_functions_04.c)
	
## Tasks :page_with_curl:

* **0. push, pall**  :white_check_mark:
			<p><strong>The push opcode</strong></p>

	<p>The opcode <code>push</code> pushes an element to the stack.</p>

	<ul>
	<li>Usage: <code>push &lt;int&gt;</code></li>
	<li>where <code>&lt;int&gt;</code> is an integer</li>
	<li>if <code>&lt;int&gt;</code> is not an integer or if there is no argument to <code>push</code>, print the message <code>L&lt;line_number&gt;: usage: push 		integer</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code>

	<ul>
	<li>where <line_number> is the line number in the file</li>
	</ul></li>
	<li>You don&#39;t have to deal with overflows. Use the <code>atoi</code> function</li>
	</ul>
			<p><strong>The pall opcode</strong></p>

	<p>The opcode <code>pall</code> prints all the values on the stack, starting from the top of the stack.</p>

	<ul>
	<li>Usage <code>pall</code></li>
	<li>If the stack is empty, don&#39;t print anything</li>
	</ul>

* **1. pint**  :white_check_mark:
			<p>Implement the <code>pint</code> opcode.</p>

	<p><strong>The pint opcode</strong></p>

	<p>The opcode <code>pint</code> prints the value at the top of the stack, followed by a new line.</p>

	<ul>
	<li>Usage: <code>pint</code></li>
	<li>If the stack is empty, print <code>L&lt;line_number&gt;: can&#39;t pint, stack empty</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
	</ul>

* **2. pop**  :white_check_mark:
			<p>Implement the <code>pop</code> opcode.</p>

	<p><strong>The pop opcode</strong></p>

	<p>The opcode <code>pop</code> removes the top element of the stack.</p>

	<ul>
	<li>Usage: <code>pop</code></li>
	<li>if the stack is empty, print <code>L&lt;line_number&gt;: can&#39;t pop an empty stack</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
	</ul>

* **3. swap**  :white_check_mark:
			<p>Implement the <code>swap</code> opcode.</p>

	<p><strong>The swap opcode</strong></p>

	<p>The opcode <code>swap</code> swaps the top two elements of the stack.</p>

	<ul>
	<li>Usage: <code>swap</code></li>
	<li>If the stack is less than two element long, print <code>L&lt;line_number&gt;: can&#39;t swap, stack too short</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
	</ul>	

* **4. add**  :white_check_mark:
			<p>Implement the <code>add</code> opcode.</p>

	<p><strong>The add opcode</strong></p>

	<p>The opcode <code>add</code> adds the top two elements of the stack.</p>

	<ul>
	<li>Usage: <code>add</code></li>
	<li>If the stack is less than two element long, print <code>L&lt;line_number&gt;: can&#39;t add, stack too short</code>, followed by a new line, and exit with the status 	<code>EXIT_FAILURE</code></li>
	<li>The result is stored in the second top element of the stack, and the top element is removed, so that at the end:

	<ul>
	<li>the top element of the stack contains the result</li>
	<li>the stack is one element shorter</li>
	</ul></li>
	</ul>
	
* **5. nop**  :white_check_mark:
			<p>Implement the <code>nop</code> opcode.</p>

	<p><strong>The nop opcode</strong></p>

	<p>The opcode <code>nop</code> doesn&#39;t do anything.</p>

	<ul>
	<li>Usage: <code>nop</code></li>
	</ul>


	
## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.
	
## Credits

## Author(s):blue_book:

Work is owned and maintained by 
	**`Alex Orland Arévalo Tribaldos`**  and credits for `group projects` are displayed in the respective `README.md` files.

<3915@holbertonschool.com>
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Octicons-mark-github.svg/25px-Octicons-mark-github.svg.png)](https://github.com/Alexoat76)
[![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/25px-Twitter_Bird.svg.png)](https://twitter.com/aoarevalot)
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/25px-LinkedIn_logo_initials.png)](https://www.linkedin.com/in/Alexoat76/)


## Acknowledgments :mega: 

### **`Holberton School`** (*providing guidance*)
	
This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information,  please visit [this link](https://www.holbertonschool.com/).
