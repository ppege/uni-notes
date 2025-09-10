> [!info]
> The course is split into 4 blocks, each ending with a *workshop* in which you and your group spend 6 hours working on a massive sheet about the contents of the block. During the exam you will present one of the four workshops, so be sure to write things down!

**Propositions** are declarative sentences that can be true or false. These are typically denoted with small letters, usually $p$, $q$, and $r$.

## Operations
**Negation** is the "not" operator, using the symbol $\neg$. $\neg p$ is "not $p$", and this flips the truth value of the proposition $p$.
**Conjunction** is the "and" operator, which connects two propositions with the symbol $\wedge$. The conjunction of $p$ and $q$ is subsequently $p\wedge q$. $p\wedge q$ is true if, and only if, both $p$ and $q$ have a truth value of $T$, ie $v(p)=T\wedge v(q)=T$.
**Disjunction** is the "or" operator, connecting two propositions with the symbol $\vee$. The conjunction of $p$ and $q$ is $p\vee q$, and is true if $p$ or $q$ have a truth value of $T$, ie $v(p)=T\vee v(q)=T$.
**Implication** is the "if ... then" operator, connecting two propositions with the symbol $\rightarrow$. The implication $p\rightarrow q$ is true if $p$ "implicates" $q$. This is best understood by the truth tables.
**Bi-implication** is the "if and only if" operator, connecting two propositions with the symbol $\leftrightarrow$. The bi-implication $p\leftrightarrow q$ is true if the truth values of $p$ and $q$ are identical, ie $v(p)=v(q)$.
## Truth tables
A truth table can be used to show the relations between different propositions.

| $p$ | $\neg p$ |
| --- | -------- |
| $T$ | $F$      |
| $F$ | $T$      |

| $p$ | $q$ | $p\wedge q$ | $p\vee q$ | $p\rightarrow q$ | $p\leftrightarrow q$ |
| --- | --- | ----------- | --------- | ---------------- | -------------------- |
| $T$ | $T$ | $T$         | $T$       | $T$              | $T$                  |
| $T$ | $F$ | $F$         | $T$       | $F$              | $F$                  |
| $F$ | $T$ | $F$         | $T$       | $T$              | $F$                  |
| $F$ | $F$ | $F$         | $F$       | $T$              | $T$                  |
## Bit operations
It's common to associate the bit value 1 with $T$ and 0 with $F$. These operations are extended to bit strings of the same length by applying them to each component separately:
$$
01100 \oplus 00111 = 01011
$$
## Tautology and contradiction
A compound proposition that is always true is called a **tautology**.
A compound proposition that is always false is called a **contradiction**.

| $p$ | $\neg p$ | $p\vee\neg p$ | $p\wedge\neg p$ |
| --- | -------- | ------------- | --------------- |
| $T$ | $F$      | $T$           | $F$             |
| $F$ | $T$      | $T$           | $F$             |
## Logical equivalence
If two compound propositions $p$ and $q$ have the same truth values for all possible cases, we call these propositions equivalent. This is denoted by $p\equiv q$. For example:
$$
(p\rightarrow q)\wedge (q\rightarrow p)\equiv (p\leftrightarrow q)
$$
### De Morgan's laws
$$
\neg (q\vee p)\equiv\neg p\wedge\neg q
$$
$$
\neg (q\wedge p)\equiv\neg p\vee\neg q
$$

### Conditional disjunction equivalence
$$
(p\rightarrow q)\equiv (\neg p\vee q)
$$
## Propositional functions
A propositional function is an expression, containing one of more variables, which becomes a proposition when each of the variables is replaced by some one of its values from a discourse domain (universe) of individuals.
## Quantors
### Universal quantor
The universal quantification of a propositional function $P(x)$ is the proposition
> $P(x)$ is true for all values of $x$ in the domain.

We denote this by $\forall x P(x)$. This proposition is true if and only if $P(x)$ is true for all possible values of $x$. It is false as soon as in the domain one counterexample $x$ exists for which $P(x)$ is false.
### Existential quantor
The existential quantification of a propositional function $P(x)$ is the proposition
> There exists an element in $x$ in the domain such that $P(x)$ is true.

We denote this by $\exists x P(x)$. This proposition is true if and only if $P(x)$ is true for at least one possible value of $x$. It is false if $P(x)$ is false for all $x$ in the domain. $\exists !x P(x)$ means there exists *exactly* one $x$ where $P(x)$ is true.

# Sets
A **set** is an unordered collection of distinct objects, called elements or members. We write $e\in S$ if the element $e$ is in the set $S$. A set is usually denoted by listing its elements: 
$$
B=\set{0, 1}
$$
The empty set is the set that contains no elements: 
$$
\emptyset=\set{}
$$
A set can contain other sets: 
$$
S=\set{\set{},\set{0},\set{1},\set{0,1}}
$$
### Important sets
$\R=$

## Set builder notation
Not all sets can be described by listing the elements. The set builder notation can be used to describe which elements belong to the set in this case. Let $D$ be a domain of discourse and $P$ be a propositional function, then 
$$
S=\{e\in D|Q(e)\}
$$
is the set of all elements in $D$ for which $Q(e)$ is true.
## Subsets
The set $A$ is a subset of the set $B$ if and only if every element of $A$ is also an element of $B$. 
$$
\forall x\in A, x\in B
$$
$$
\forall x(x\in A\rightarrow x\in B)
$$
For any set $S$ it holds that $\emptyset\subseteq S$ and $S\subseteq S$. 
### Proper subsets
$A$ is a proper subset of $B$ if $A\subseteq B$, but $A\neq B$. Here we use the notation $A\subset B$.
## Cardinality of sets
A set $S$ is finite if it contains a finite number $n$ of elements. The size $|S|$ (cardinality) of a finite set $S$ is then defined to be the number $n$ of elements it contains. For example: 
$$
S=\{1,2,3\}
$$
$$
|S|=3
$$
## Set operations
### Union
The union of two sets $A$ and $B$ is the set containing all elements that are in $A$ or $B$, denoted by $A\cup B$. In set builder notation (*SBN*):
$$
A\cup B=\{x|x\in A\vee x\in B\}
$$
### Intersection
The intersection of two sets $A$ and $B$ is the set containing all elements that are in $A$ and $B$, denoted by $A\cap B$. In SBN:
$$
A\cap B=\{x|x\in A\wedge x\in B\}
$$
#### Cardinality of intersection and union
If $A$ and $B$ are finite sets, then the following equation holds:
$$
|A\cup B|=|A|+|B|-|A\cap B|
$$
### Difference
The difference of two sets $A$ and $B$ is the set containing all elements that are in $A$ but not in $B$, denoted by $A-B$ or $A\setminus B$. In SBN:
$$
A\setminus B=\{x|x\in A\wedge x\notin B\}
$$
### Complement 
Let $U$ be the universal set. The complement of a set $A$ is the set containing all elements in $U$ that are not in $A$ ($U\setminus A$), denoted by $\overline{A}$. In SBN:
$$
\overline{A}=\{x\in U|x\notin A\}
$$
It always holds true that $\overline{\overline{S}}=S$, ie the complement of the complement of a set is merely the set.
## Set identities
Set identities are analogous to predicate logic, so sets follow De Morgan's laws, the conditional disjunction equivalence, the distributive laws and all other laws of logic.