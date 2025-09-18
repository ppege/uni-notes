## Binary relations
Let $A$ and $B$ be sets. A **relation** from $A$ to $B$ is a subset of $A\bigtimes B$. That is to say, a relation from $A$ to $B$ is a set containing some amount of ordered pairs $(a,b)$ that fulfil the condition
$$
a\in A\wedge b\in B.
$$
For example, for
$$
\begin{align}
A&=\set{1,2,3}\\
B&=\set{a,b,c},\\
\end{align}
$$
a relation can be
$$
R=\set{(1,a),(1,b),(2,b),(2,c),(3,a)}.
$$

^e8055c

This is, of course, some subset of the cartesian product $A\bigtimes B$:
$$
A\bigtimes B=\set{(1,a),(1,b),(1,c),(2,a),(2,b),(2,c),(3,a),(3,b),(3,c)}.
$$
We can see that the elements of $R$ are also in $A\bigtimes B$, which is the definition of a subset, so
$$
R\subseteq A\bigtimes B.
$$
This verifies that $R$ is a relation from $A$ to $B$. Obviously, the relation $R$ in [[#^e8055c]] is not the only possible relation from $A$ to $B$. When $(s,b)\in R$, we say that $a$ **is $R$-related to** $b$, and this can also be notated as
$$
(a,b)\in R\iff a\, R\, b
$$
A binary relation encodes the common concept of relation: an element $x$ is related to an element $y$, if and only if the pair $(x,y)$ belongs to the set of ordered pairs that defines the binary relation. 
### Homogenous relations
A binary relation on a set $A$ is a subset of $A\bigtimes A$ or $A^2$. This is also called an **endorelation**, or a **homogenous relation**. For example, let $A$ be a set, and
$$
\begin{align}
A&=\set{1,2} \\
A^2&=\set{(1,1),(1,2),(2,1),(2,2)}.
\end{align}
$$
In this case, any subset of this cartesian square is a binary relation on the set $A$, for example:
$$
\begin{align}
R_1&=\set{(1,1),(2,2)} \\
R_2&=\set{(1,2),(2,1)}.
\end{align}
$$
Both $R_1$ and $R_2$ are binary relations on $A$, since they are both subsets of $A^2$. We can also construct a binary relation using set builder notation:
$$
R=\set{(a,b)|a \bmod b=0}
$$
Or with the infix $a\, R\, b$ notation:
$$
a\, R\, b \iff a\bmod b=0
$$
Here, we are using the modulo operator to express that $R$ is the binary relation on $A$ where $a$ is divisible by $b$. The contents of this set, in our example, would simply be
$$
R=\set{(1,1),(2,1),(2,2)}.
$$
The ordered pair $(1,2)$ is not in this relation, since 1 is not divisible by 2. Homogenous relations are especially useful as they can model a wide variety of concepts. For example, "is greater than", or $>$, is the relation on the reals $\mathbb{R}$ which encodes the concept of one number being greater than another. With this relation, and using the $a\, R\, b$ syntax, it very clearly encodes mappings like $5>3$, since $(5,3)\in>$.
### All possible relations between two sets
The set containing every possible relation between a set $A$ and a set $B$ is the power set of the cartesian product of $A$ and $B$:
$$
R_{A,B}=\mathcal{P}(A\bigtimes B)
$$
This is of course because the power set of a set $A$ is the set containing every possible subset of $A$. By definition, a relation is a subset of $A$ where $A$ is the cartesian product of two sets.
## Properties of relations
There are different properties that a relation $R$ may have.
### Reflexive property
A homogenous relation $R$ on a set $A$ is **reflexive** if
$$
\forall a\in A:a\, R\, a.
$$
For all elements $a$ in the set $A$, $a$ is $R$-related to $a$. So a reflexive relation is one wherein there is an ordered pair $(a,a)$ for every element $a$ in $A$. Every element of $A$ is $R$-related to itself. For example, let $\mathbb{R}$ be the set of real numbers, then a reflexive relation $R$ could be
$$
R=\set{(a,b)|a\leq b},
$$
or alternatively
$$
a\, R\, b\iff a\leq b.
$$
This relation is reflexive since any real number is always lesser than or equal to itself. This also means that a relation does not have to only contain ordered pairs where both elements are the same, but that it must satisfy that condition for every element in $A$, so $5\leq10$, $999\leq9999$ and so on obviously still apply even though the relation is reflexive. It is worth noting that reflexivity cannot be a property of a relation between two distinct sets $A$ and $B$, since $(a,a)$ existing for all $a\in A$ would only be possible if $B$ were a superset of $A$.
### Symmetric property
A relation $R$ is **symmetric** if
$$
\forall a,b\in A:a\, R\, b\iff b\, R\, a.
$$
A relation is therefore symmetric whenever the existence of an ordered pair $(a,b)$ in the relation implies the presence of the reverse, $(b,a)$. For example, let $A$ and $B$ be sets, and
$$
\begin{align}
A&=\set{1,2,3}\\
B&=\set{1,2}\\
A\bigtimes B&=\set{(1,1),(1,2),(2,1),(2,2),(3,1),(3,2)},
\end{align}
$$
then a symmetric relation from $A$ to $B$ could be
$$
R=\set{(1,1),(1,2),(2,1)},
$$
as every ordered pair has a "reverse order" equivalent in the set. If, for example, $(3,1)\in R$, then the relation would no longer be symmetric, since there would be no $(1,3)\in R$. For a more general example, let $R$ be a relation on the natural numbers $\mathbb{N}$, and
$$
R=\set{(a,b)|(\exists k\in\mathbb{N}:a=2k+1)\wedge(\exists m\in\mathbb{N}: b=2m+1)}.
$$
Here, we are describing the relation that both $a$ and $b$ are odd. This relation is of course symmetric, since if 3 and 5 are odd, then 5 and 3 are also odd. "and" is commutative, so to speak.
### Antisymmetric property
A homogenous relation $R$ on a set $A$ is **antisymmetric** if
$$
\forall a,b\in A:a\, R\, b\wedge b\, R\, a\implies a=b
$$

^1dabfe

In other words, a relation on a set is considered antisymmetric when there are no symmetric, distinct pairs in the relation. It can also be explained as
$$
a\neq b\implies\neg(a\, R\, b\wedge b\, R\, a),
$$
which essentially states that if $a$ and $b$ are distinct, then $a$ being $R$-related to $b$ and $b$ being $R$-related to $a$ must not both hold. So a relation containing no examples of $\set{(a,b),(b,a)}$ where $a\neq b$ is antisymmetric. For example, let $A$ be a set
$$
A=\set{a,b,c},
$$
and let $R$ be a relation
$$
R=\set{(a,b),(a,c)}.
$$
Here, $R$ is an antisymmetric relation simply because it does not contain any two symmetric ordered pairs $\set{(a,b),(b,a)}$, where $a$ and $b$ would be distinct elements. If $(b,a)$ or $(c,a)$ were to be added to the set, $R$ would no longer be antisymmetric, as it would violate the condition for antisymmetry as stated in [[#^1dabfe]].
### Transitive property
A relation $R$ on a set $A$ is **transitive** if
$$
\forall a,b,c,\in A:a\, R\, b\wedge b\, R\, c\implies a\, R\, c.
$$

^76e7eb

This is the same logic as a syllogism. If $a$ is $R$-related to $b$, and $b$ is $R$-related to $c$, then $a$ is $R$-related to $c$. An example of a transitive relation on the set of reals $\mathbb{R}$ could be
$$
R=\set{(a,b)|a\leq b}.
$$
Here, we can observe that if $a$ is lesser than $b$ which is lesser than $c$, then $a$ is obviously also lesser than $c$. This satisfies the requirement [[#^76e7eb]]. It turns out to be true that all of the following relations on the reals are transitive: $>$, $<$, $\geq$, $\leq$, and $=$. The proofs for each of these follow the same structure, here I will prove the greater-than relation:
$$
a>b\iff a-b>0
$$
$$
b>c\iff b-c>0
$$
$$
(a-b)+(b-c)>0
$$
$$
a-c>0
$$
$$
a>c
$$
