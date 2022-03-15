# Resources

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.youtube.com/watch?v=Z3iGeQ1gIss" title="Nested while loops" target="_blank">Nested while loops</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_functions.htm" title="C - Functions" target="_blank">C - Functions</a> </li>
<li><a href="https://www.youtube.com/watch?v=qMlnFwYdqIw" title="Learning to Program in C (Part 06)" target="_blank">Learning to Program in C (Part 06)</a> (<em>stop at 14:00</em>)</li>
<li><a href="https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/" title="What is the purpose of a function prototype?" target="_blank">What is the purpose of a function prototype?</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_header_files.htm" title="C - Header Files" target="_blank">C - Header Files</a> (<em>stop before the &ldquo;Once-Only Headers&rdquo; paragraph</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are nested loops and how to use them</li>
<li>What is a function and how do you use functions</li>
<li>What is the difference between a declaration and a definition of a function</li>
<li>What is a prototype</li>
<li>Scope of variables</li>
<li>What are the <code>gcc</code> flags <code>-Wall -Werror -pedantic -Wextra -std=gnu89</code></li>
<li>What are header files and how to to use them with <code>#include</code></li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
</ul>

<h2>More Info</h2>

<p>You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.</p>

</div>


---

# TASKS

# 0. _putchar
  

<p>Write a program that prints <code>_putchar</code>, followed by a new line.</p>

<ul>
<li>The program should return <code>0</code></li>
</ul>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>0-putchar.c</code></li>
        </ul>
      
# 1. I sometimes suffer from insomnia. And when I can&#39;t fall asleep, I play what I call the alphabet game

<p>Write a function that prints the alphabet, in lowercase, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_alphabet(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>



   
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>1-alphabet.c</code></li>
        </ul>

# 2. 10 x alphabet

<p>Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_alphabet_x10(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>


 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>2-print_alphabet_x10.c</code></li>
        </ul>

# 3. islower
  
<p>Write a function that checks for lowercase character. </p>

<ul>
<li>Prototype: <code>int _islower(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is lowercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>islower</code>. Run <code>man islower</code> to learn more.</p>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>3-islower.c</code></li>
        </ul>

# 4. isalpha
  
<p>Write a function that checks for alphabetic character. </p>

<ul>
<li>Prototype: <code>int _isalpha(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is a letter, lowercase or uppercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>isalpha</code>. Run <code>man isalpha</code> to learn more.</p>


 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>4-isalpha.c</code></li>
        </ul>

# 5. Sign
  
<p>Write a function that prints the sign of a number.</p>

<ul>
<li>Prototype: <code>int print_sign(int n);</code></li>
<li>Returns <code>1</code> and prints <code>+</code> if <code>n</code> is greater than zero</li>
<li>Returns <code>0</code> and prints <code>0</code> if <code>n</code> is zero</li>
<li>Returns <code>-1</code> and prints <code>-</code> if <code>n</code> is less than zero</li>
</ul>


<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>5-sign.c</code></li>
        </ul>

# 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
   
 <p>Write a function that computes the absolute value of an integer.</p>

<ul>
<li>Prototype: <code>int _abs(int);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>abs</code>. Run <code>man abs</code> to learn more.</p>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>6-abs.c</code></li>
        </ul>

# 7. There are only 3 colors, 10 digits, and 7 notes; it&#39;s what we do with them that&#39;s important
    
<p>Write a function that prints the last digit of a number.</p>

<ul>
<li>Prototype: <code>int print_last_digit(int);</code></li>
<li>Returns the value of the last digit</li>
</ul>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>7-print_last_digit.c</code></li>
        </ul>

#  8. I&#39;m federal agent Jack Bauer, and today is the longest day of my life
   
<p>Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.</p>

<ul>
<li>Prototype: <code>void jack_bauer(void);</code></li>
<li>You can listen to <a href="https://www.youtube.com/watch?v=btAfXqgMkPs" title="this soundtrack" target="_blank">this soundtrack</a> while coding :)</li>
</ul>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>8-24_hours.c</code></li>
        </ul>

#  9. Learn your times table

<p>Write a function that prints the 9 times table, starting with 0.</p>

<ul>
<li>Prototype: <code>void times_table(void);</code></li>
<li>Format: see example</li>
</ul>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>9-times_table.c</code></li>
        </ul>

# 10. a + b
    
<p>Write a function that adds two integers and returns the result.</p>

<ul>
<li>Prototype: <code>int add(int, int);</code></li>
</ul>

 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>10-add.c</code></li>
        </ul>

# 11. 98 Battery Street, the OG
   
<p>Write a function that prints all natural numbers from <code>n</code> to <code>98</code>, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_to_98(int n);</code></li>
<li>Numbers must be separated by a comma, followed by a space</li>
<li>Numbers should be printed in order</li>
<li>The first printed number should be the number passed to your function</li>
<li>The last printed number should be <code>98</code></li>
<li>You are allowed to use the standard library</li>
</ul>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>11-print_to_98.c</code></li>
        </ul>

# 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself
    
 <p>Write a function that prints the <code>n</code> times table, starting with 0.</p>

<ul>
<li>Prototype: <code>void print_times_table(int n);</code></li>
<li>If <code>n</code> is greater than <code>15</code> or less than <code>0</code> the function should not print anything</li>
<li>Format: see example</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 100-main.c
#include &quot;main.h&quot;

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar(&#39;\n&#39;);
    print_times_table(5);
    _putchar(&#39;\n&#39;);
    print_times_table(98);
    _putchar(&#39;\n&#39;);
    print_times_table(12);  
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
julien@ubuntu:~/0x02$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
julien@ubuntu:~/0x02$ ./100-times_table | tr &#39; &#39; . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
julien@ubuntu:~/0x02$ 
</code></pre>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>100-times_table.c</code></li>
        </ul>

# 13. Nature made the natural numbers; All else is the work of women
   
<p>If we list all the natural numbers below <code>10</code> that are multiples of <code>3</code> or <code>5</code>, we get <code>3</code>, <code>5</code>, <code>6</code> and <code>9</code>. The sum of these multiples is <code>23</code>. Write a program that computes and prints the sum of all the multiples of <code>3</code> or <code>5</code> below <code>1024</code> (excluded), followed by a new line.</p>

<ul>
<li>You are allowed to use the standard library</li>
</ul>

  
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>101-natural.c</code></li>
        </ul>

# 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A
   
<p>Write a program that prints the first 50 Fibonacci numbers, starting with <code>1</code> and <code>2</code>, followed by a new line.</p>

<ul>
<li>The numbers must be separated by comma, followed by a space <code>, </code></li>
<li>You are allowed to use the standard library</li>
</ul>

 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>102-fibonacci.c</code></li>
        </ul>

# 15. Even Liber Abbaci
  
<p>Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with <code>1</code> and <code>2</code>, the first 10 terms will be: <code>1, 2, 3, 5, 8, 13, 21, 34, 55, 89</code>. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.</p>

<ul>
<li>You are allowed to use the standard library</li>
</ul>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>103-fibonacci.c</code></li>
        </ul>
      
 # 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
    
<p>Write a program that finds and prints the first 98 Fibonacci numbers, starting with <code>1</code> and <code>2</code>, followed by a new line.</p>

<ul>
<li>The numbers should be separated by comma, followed by a space  <code>,</code></li>
<li>You are allowed to use the standard library</li>
<li>You are not allowed to use any other library (You can&rsquo;t use <code>GMP</code> etc&hellip;)</li>
<li>You are not allowed to use <code>long long</code>, <code>malloc</code>, pointers, arrays/tables, or structures</li>
<li>You are not allowed to hard code any Fibonacci number (except for <code>1</code> and <code>2</code>)</li>
</ul>

 
 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x02-functions_nested_loops</code></li>
            <li>File: <code>104-fibonacci.c</code></li>
        </ul>


