This is about bitwise operators and bit manipulation 


<operator/>	<Meaning of operator/>
&		Bitwise AND operator
|		Bitwise OR operator
^		Bitwise exclusive OR operator
~		One's complement operator (unary operator)
<<		Left shift operator
>>		Right shift operator



Let's look at the truth table of the bitwise operators.

X	Y	X&Y	X|Y	X^Y
0	0	0	0	0
0	1	0	1	1
1	0	0	1	1
1	1	1	1	1


<Precedence and associativity of C operators/>
Symbol 1	Type of operation	Associativity
[ ] ( ) . ->
++ -- (postfix)	Expression	Left to right
sizeof & * + - ~ !
++ -- (prefix)	Unary		Right to left
typecasts	Unary		Right to left
* / %	Multiplicative		Left to right
+ -	Additive		Left to right
<< >>	Bitwise shift		Left to right
< > <= >=	Relational	Left to right
== !=	Equality		Left to right
&	Bitwise-AND		Left to right
^	Bitwise-exclusive-OR	Left to right
|	Bitwise-inclusive-OR	Left to right
&&	Logical-AND		Left to right
||	Logical-OR		Left to right
? :	Conditional-expression	Right to left
= *= /= %=
+= -= <<= >>= &=
^= |=	Simple and compound assignment 2	Right to left
,	Sequential evaluation	Left to right
