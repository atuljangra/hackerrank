Setting all first five places to minus 45 and 6th one to be next line
Algorithm is simple
Consider a:0
b:1
c:2
z:25

lets call the number N
now the cypher is generated as follows
_  _  _  _  _
p1 p2 p3 p4 p5
p5 is toggled N times
p4 is toggled n/2 times
p3 n/4
p4 n/8
p5 n/16

>>>>>>>+++++++++           p7v9
[
  <<<<<<+++++
  >+++++
  >+++++
  >+++++
  >+++++
  >>-
]

p6 is newline ie 10
++
[
  <+++++
  >-
]

>++
[
  >, p8 takes the input
  subtract 97 from p8
  >+++++ +++++ ++ p8v12
  [
    <----- ---
    >-
  ]

  <-  p8v\97

  p8 now has the value as a:0 b:1 c:2
  >++  p9v2
  <
  copying p8 to p12
  [>>>>>+<<<<<-] p8 to p13
  >>>>>
  p13 to p12 and p8
  [<+<<<<+>>>>>-]

  <<<<<
  back at p8
  
  [->-[>+>>]>[+[-<+>]>+>>]<<<<<]
    p11 contains N/2
   back at p8
    copying p11 to p13
  >>>
  [>>+<<-]
  P13 contains N/2
  <<<
  back at p8

  go to p12 to change p5
  >>>>
  [
    <<<<< << ---
    >>>>> >> -
  ]

  go to p13 to change p4
  >
  [
    <<<<< <<<< ---
    >>>>> >>>> -
  ]

  <<<<< back to p8




  <-
]


p7
<.   p6
<.   p5
>.    p6
<<.   p4
>>.   p6
<<<.    p3
>>>.    p6
<<<<.   p2
>>>>.   p6
<<<<<.  p1









>>>>>>>+++++++++           p7v9
[
  <<<<<<+++++
  >+++++
  >+++++
  >+++++
  >+++++
  >>-
]

p6 is newline ie 10
++
[
  <+++++
  >-
]


p7 as iterator
>+
[
  >>>>>>, store input in p13 directly
  Subtract 97
------------------------
------------------------
------------------------
------------------------

  p8 is now having a:0 b:1 z:25

  Now creating binary for the same
  copying p8 into p13
  
  so p13 has the input

  <<<<<[-] making p8 - p12 0
  >[-]
  >[-]
  >[-]>[-]
  >
  now we are at p13
  making p15 to p27 1 for allowing random jumps
  >[-]
  >+>+>+ >+>+>+>+>+ >+>+>+>+>+

  <<<<< <<<<< <<<
  [-] p14v0

  < coming to input p13

  [-<
    [-<]
    +
    >>>>> >>>>>
    [<]
    <
  ]
  pointing to p13 now
  
  <<<<<<-  
  back at p7
]

