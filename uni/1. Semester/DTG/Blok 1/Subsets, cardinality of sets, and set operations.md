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