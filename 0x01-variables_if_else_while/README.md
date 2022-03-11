# Resources

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/42507f7938ddf9b8963bc903bac7d75f88ca8881.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220311%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220311T205001Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=7480e5b9179f74f0a43809cce289d2804300486e5f4f22ae1552f6e08f042b2a" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if&hellip;else”, “while loops”.</em>)</li>
<li><a href="https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html" title="Keywords and identifiers" target="_blank">Keywords and identifiers</a> </li>
<li><a href="https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html" title="integers" target="_blank">integers</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm" title="Arithmetic Operators in C" target="_blank">Arithmetic Operators in C</a> </li>
<li><a href="https://www.cprogramming.com/tutorial/c/lesson2.html" title="If statements in C" target="_blank">If statements in C</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm" title="if...else statement" target="_blank">if&hellip;else statement</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm" title="Relational operators" target="_blank">Relational operators</a> </li>
<li><a href="https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/" title="Logical operators" target="_blank">Logical operators</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_while_loop.htm" title="while loop in C" target="_blank">while loop in C</a> </li>
<li><a href="https://www.youtube.com/watch?v=Ju1LYO9pkaI" title="While loop" target="_blank">While loop</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>ascii</code> (<em>You do not need to learn about <code>scanf</code>, <code>getc</code>, <code>getchar</code>, <code>EOF</code>, <code>EXIT_SUCCESS</code>, <code>time</code>, <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code>, <code>for</code> loops, <code>do...while</code> loops, functions.</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are the arithmetic operators and how to use them</li>
<li>What are the logical operators (sometimes called boolean operators) and how to use them</li>
<li>What the the relational operators and how to use them</li>
<li>What values are considered TRUE and FALSE in C</li>
<li>What are the boolean operators and how to use them</li>
<li>How to use the <code>if</code>, <code>if ... else</code> statements</li>
<li>How to use comments</li>
<li>How to declare variables of types <code>char</code>, <code>int</code>, <code>unsigned int</code></li>
<li>How to assign values to variables</li>
<li>How to print the values of variables of type <code>char</code>, <code>int</code>, <code>unsigned int</code> with <code>printf</code></li>
<li>How to use the <code>while</code> loop</li>
<li>How to use variables with the <code>while</code> loop</li>
<li>How to print variables using <code>printf</code></li>
<li>What is the <code>ASCII</code> character set</li>
<li>What are the purpose of the <code>gcc</code> flags <code>-m32</code> and <code>-m64</code></li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

</div>

---
# Tasks
# 0. Positive anything is better than negative nothing
   
 This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.

<ul>
<li>You can find the source code <a href="https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c" title="here" target="_blank">here</a></li>
<li>The variable <code>n</code> will store a different value every time you will run this program</li>
<li>You don&rsquo;t have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The number, followed by

<ul>
<li>if the number is greater than 0: <code>is positive</code></li>
<li>if the number is 0: <code>is zero</code></li>
<li>if the number is less than 0: <code>is negative</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>


        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>0-positive_or_negative.c</code></li>
        </ul>
      </div>
   
# 1. The last digit

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

- You can find the source code here
- The variable n will store a different value every time you run this program
- You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
- The output of the program should be:
The string Last digit of, followed by<br>
n, followed by<br>
the string is, followed by<br>
- if the last digit of n is greater than 5: the string and is greater than 5
- if the last digit of n is 0: the string and is 0
- if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line

**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 1-last_digit.c
   
 #  2. I sometimes suffer from insomnia. And when I can&#39;t fall asleep, I play what I call the alphabet game
    

  


  
 Write a program that prints the alphabet in lowercase, followed by a new line.

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>
  <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>2-print_alphabet.c</code></li>
        </ul>
   
  # 3. alphABET
 
   Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>

 <p><strong>Repo:</strong></p>
       <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>3-print_alphabets.c</code></li>
        </ul>
      
   
4. When I was having that alphabet soup, I never thought that it would pay off
mandatory
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 4-print_alphabt.c
   
5. Numbers
mandatory
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

All your code should be in the main function
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 5-print_numbers.c
   
6. Numberz
mandatory
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

You are not allowed to use any variable of type char
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar twice in your code
All your code should be in the main function
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 6-print_numberz.c
   
7. Smile in the mirror
mandatory
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 7-print_tebahpla.c
   
8. Hexadecimal
mandatory
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 8-print_base16.c
   
9. Patience, persistence and perspiration make an unbeatable combination for success
mandatory
Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar four times maximum in your code
You are not allowed to use any variable of type char
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 9-print_comb.c

10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
#advanced
Write a program that prints all possible different combinations of two digits.

Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar five times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 100-print_comb3.c
   
11. The success combination in business is: Do what you do better... and: do more of what you do...
#advanced
Write a program that prints all possible different combinations of three digits.

Numbers must be separated by ,, followed by a space
The three digits must be different
012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
Print only the smallest combination of three digits
Numbers should be printed in ascending order, with three digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar six times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 101-print_comb4.c
   
12. Software is eating the World
#advanced
Write a program that prints all possible combinations of two two-digit numbers.

The numbers should range from 0 to 99
The two numbers should be separated by a space
All numbers should be printed with two digits. 1 should be printed as 01
The combination of numbers must be separated by comma, followed by a space
The combinations of numbers should be printed in ascending order
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar eight times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x01-variables_if_else_while
File: 102-print_comb5.c
   

   
