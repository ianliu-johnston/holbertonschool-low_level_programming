[ 

This is the program compressed into one line:

++++[>+++[>++++++>++++++<<-]<-]>>.<+++++[>+++++++<-]>++++.[>>+>+>+>+<<<<<-]>>---.<<+++++[>+++++<-]>+.+++.>>+++.++.>.>-.[<]<+++[>+++<-]>+.

The rest down there are notes
p = plus
m = minus
a# = the index of the array 
]

++++            a0 add 4
[               start loop. 
 >+++           a1 add 3
 [              start nested loop.
  >++++++       a2 add 6
  >++++++       a3 add 6
  <<-           a1 sub 1
 ]              end nested loop.
 <-             a0 sub 1
]               end loop.
>>.             a2       Print                  a2 and a3 are currently 'H' (72) 'H' is printed to stdout with putchar
<+++++          a1 add 5
[               start loop
 >+++++++       a2 add 7
 <-             a1 sub 1
]               end loop
>++++.          a2 add 4 Print                  a2 = 'o' (111)
[               start loop
 >>+            a4 add 1                        = 'o' after loop
 >+             a5 add 1                        = 'o' after loop
 >+             a6 add 1                        = 'o' after loop
 >+             a7 add 1                        = 'o' after loop
 <<<<<-         a2 sub 1                        decrements until end of loop.
]               end loop
>>---.          a4 sub 3 Print                  Prints 'l'
<<+++++         a2 add 5
[               start loop
 >+++++         a3 add 5
 <-             a2 sub 1
]               end loop
>+.             a3 add 1 Print                  Prints 'b'
+++.            a3 add 3 Print                  Prints 'e'
>>+++.          a5 add 3 Print                  Prints 'r'
++.             a5 add 2 Print                  Prints 't'
>.              a6       Print                  Prints 'o'
>-.             a7 sub 1 Print
[<]             a2                              start loop and go to a register whose value is zero then end loop.
<+++            a1 add 3
[               start loop
>+++            a2 add 3                        will be 9 at the end of the loop.
<-              a1 sub 1
]               end loop
>+.             a2 add 1 Print                  Prints '\n'
