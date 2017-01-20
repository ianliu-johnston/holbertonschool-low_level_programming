[ The following is the program in one line.
NULL
End Comment ]

,                a0 add x  getchar()     Only reads the first character
>,               a1 add x  getchar()     Only reads the second character
<                a0
[                start loop
>+               a1 add 1

<-               a0 sub 1
]                end loop
>>+++ ++++       a2 add 7                a2 set loop to 7
[                start loop
<--- ----        a1 sub 7                a1 subtracts by 7 each time
>-               a2 sub 1                a2 decrements by 1 until nothing left
]                end loop
<+.              a1 add 1  Print         To get to 50
>>>++++++++++.   a4 add 10 Print         To print a new line
