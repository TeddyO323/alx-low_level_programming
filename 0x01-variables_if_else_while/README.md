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
      
   
 # 1. The last digit
   
This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.

<ul>
<li>You can find the source code <a href="/rltoken/5HWhPDsq3jq1yCRQFrLl4Q" title="here" target="_blank">here</a></li>
<li>The variable <code>n</code> will store a different value every time you run this program</li>
<li>You don&rsquo;t have to understand what <code>rand</code>, <code>srand</code>, and <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The string <code>Last digit of</code>, followed by</li>
<li><code>n</code>, followed by</li>
<li>the string <code>is</code>, followed by

<ul>
<li>if the last digit of <code>n</code> is greater than 5: the string <code>and is greater than 5</code></li>
<li>if the last digit of <code>n</code> is 0: the string <code>and is 0</code></li>
<li>if the last digit of <code>n</code> is less than 6 and not 0: the string <code>and is less than 6 and not 0</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>


 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>1-last_digit.c</code></li>
        </ul>
   
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
      
   
# 4. When I was having that alphabet soup, I never thought that it would pay off
  
 Write a program that prints the alphabet in lowercase, followed by a new line.

<ul>
<li>Print all the letters except <code>q</code> and <code>e</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>

        <strong>Repo:</strong>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>4-print_alphabt.c</code></li>
        </ul>

# 5. Numbers
  
 Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.

<ul>
<li>All your code should be in the <code>main</code> function</li>
</ul>


        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>5-print_numbers.c</code></li>
        </ul>

 # 6. Numberz
  
 Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.

<ul>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>You can only use <code>putchar</code> twice in your code</li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>6-print_numberz.c</code></li>
        </ul>
      
#  7. Smile in the mirror
   
 Write a program that prints the lowercase alphabet in reverse, followed by a new line.

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>



        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>7-print_tebahpla.c</code></li>
        </ul>
      
#   8. Hexadecimal
   
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>

   <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>8-print_base16.c</code></li>
        </ul>

#  9. Patience, persistence and perspiration make an unbeatable combination for success
  
 Write a program that prints all possible combinations of single-digit numbers.

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>Numbers should be printed in ascending order</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> four times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
</ul>

        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>9-print_comb.c</code></li>
        </ul>

 #  10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
   
 Write a program that prints all possible different combinations of two digits.

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The two digits must be different</li>
<li><code>01</code> and <code>10</code> are considered the same combination of the two digits <code>0</code> and <code>1</code></li>
<li>Print only the smallest combination of two digits</li>
<li>Numbers should be printed in ascending order, with two digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>You can only use <code>putchar</code> five times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>100-print_comb3.c</code></li>
        </ul>

#  11. The success combination in business is: Do what you do better... and: do more of what you do...
    
 Write a program that prints all possible different combinations of three digits.

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The three digits must be different</li>
<li><code>012</code>, <code>120</code>, <code>102</code>, <code>021</code>, <code>201</code>, <code>210</code> are considered the same combination of the three digits <code>0</code>, <code>1</code> and <code>2</code></li>
<li>Print only the smallest combination of three digits</li>
<li>Numbers should be printed in ascending order, with three digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>You can only use <code>putchar</code> six times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>101-print_comb4.c</code></li>
        </ul>

# 12. Software is eating the World
 
 <p>Write a program that prints all possible combinations of two two-digit numbers.</p>

<ul>
<li>The numbers should range from <code>0</code> to <code>99</code></li>
<li>The two numbers should be separated by a space</li>
<li>All numbers should be printed with two digits. <code>1</code> should be printed as <code>01</code></li>
<li>The combination of numbers must be separated by comma, followed by a space</li>
<li>The combinations of numbers should be printed in ascending order</li>
<li><code>00 01</code> and <code>01 00</code> are considered as the same combination of the numbers <code>0</code> and <code>1</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc&hellip;) is forbidden)</li>
<li>You can only use <code>putchar</code> eight times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>102-print_comb5.c</code></li>
        </ul>
      
