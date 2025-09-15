## Ordered pairs
An ordered pair $(a, b)$ is a set
$$
\{\{a\},\{a,b\}\}.
$$
This structure ensures that $(a,b)\neq(b,a)$, since
$$
\{\{a\},\{a,b\}\}\neq\{\{b\},\{b,a\}\}.
$$
This holds true despite sets being unordered, since only one singleton, $\{a\}$ or $\{b\}$, is in the set. So while the subsets are the same ($\{a,b\}=\{b,a\}$), the standalone elements are unique. Effectively, this means the pair is *ordered*, since the order of appearance in $(a,b)$ changes the meaning.
## Cartesian products
The cartesian product $A\bigtimes B$ is the set
$$
\{(a,b)|a\in A\wedge b\in B\}.
$$
In other words, it's the set containing all possible ordered pairs constructed from the elements of two sets, where the element of the first set must come first in the ordered pair. Example:
$$
(A=\{0,1,2\})\wedge (B=\{0,1\})\iff A\bigtimes B=\{(0,0),(0,1),(1,0),(1,1),(2,0),(2,1)\}
$$
Note that $A\neq B\implies A\bigtimes B\neq B\bigtimes A$:
$$
\begin{align}
A\bigtimes B\neq B\bigtimes A\iff&
\{(0,0),(0,1),(1,0),(1,1),(2,0),(2,1)\}\neq\\
&\{(0,0),(0,1),(0,2),(1,0),(1,1),(1,2)\}
\end{align}
$$
This is once again due to the order of appearance being relevant in an ordered pair.
### Cardinality of cartesian products
The following statement about cardinalities of cartesian products holds true:
$$
|A|=n\wedge|B|=m\implies|A\bigtimes B|=nm
$$
In other words:
> If the cardinality of a set $A$ is $n$ and the cardinality of a set $B$ is $m$, then the cardinality of the cartesian product between $A$ and $B$ (in either order) must be $nm$.

### Cartesian products of >2 sets
An ordered pair is also called a tuple of two elements. A tuple can contain more elements, however. A tuple is simply an ordered collection of things. Cartesian products between more than 2 sets produce tuples with more than 2 elements:
$$
A\bigtimes B\bigtimes C = \{(a,b,c)|a\in A\wedge b\in B\wedge c\in C\}
$$
$$
A_1\bigtimes A_2\bigtimes\ldots\bigtimes A_n=\{(a_1,a_2,\ldots,a_n)|a_1\in A_1\wedge a_2\in A_2\wedge\ldots\wedge a_n\in A_n\}
$$
### Properties of tuples
>[!warning] **Not from course**: This section contains information gathered from sources other than what the DTG course provides.

The general rule for the identity of two $n$-tuples is
$$
(a_1,a_2,\ldots,a_n)=(b_1,b_2,\ldots,b_n)\iff a_1=b_1\wedge a_2=b_2\wedge\ldots\wedge a_n=b_n.
$$
This means that
1. A tuple can contain duplicates, ie $(1,2,2,3)\neq (1,2,3)$; conversely, a set $\{1,2,2,3\}=\{1,2,3\}$.
2. Tuple elements are ordered, ie $(1,2,3)\neq(3,2,1)$; conversely, a set $\{1,2,3\}=\{3,2,1\}$.
3. A tuple has a finite number of elements; conversely, a set may have an infinite number of elements, for example the set of all natural numbers.
#### Construction of $n$-tuples as ordered pairs
A tuple of 3 elements can be constructed as ordered pairs and therefore notated as a set:
$$
(a,b,c)
:=((a,b),c)
=(\{\{a\},\{a,b\}\},c)
=\{\{\{\{a\},\{a,b\}\}\},\{\{\{a\},\{a,b\}\},c\}\}
$$
This process can be applied to a tuple of any $n$ elements, for example a tuple of 6 elements has the recursive definition
$$
(a,b,c,d,e,f):=(((((a,b),c),d),e),f).
$$
Note that the "reverse" can also be used to represent an $n$-tuple as an ordered pair:
$$
(a,b,c,d,e,f):=(a,(b,(c,(d,(e,f)))))
$$
Any $n$-tuple can, in this way, be expanded to being expressed purely as a set, though it will look ridiculous.
### Cartesian square
$A\bigtimes A$ can be written as $A^2$. For example, let $A=\{a,b\}$, then
$$
A^2=\{(a,a),(a,b),(b,a),(b,b)\}
$$
### Cartesian products involving the empty set
When the empty set is involved in a cartesian product, we get the empty set:
$$
\begin{align}
\text{Example: }A&=\{a,b,c\} \\
A\bigtimes\emptyset&=\emptyset \\
\emptyset\bigtimes A&=\emptyset
\end{align}
$$
