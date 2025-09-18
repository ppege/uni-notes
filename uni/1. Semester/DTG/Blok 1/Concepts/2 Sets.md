# Set theory
A **set** is an unordered collection of distinct objects, called elements or members. We write $e\in S$ if the element $e$ is in the set $S$. A set is usually denoted by listing its elements: 
$$
B=\set{0, 1}
$$
The empty set, $\emptyset$, is the set that contains no elements: 
$$
\emptyset=\set{}
$$
A set can contain other sets: 
$$
S=\set{\set{},\set{0},\set{1},\set{0,1}}
$$
A set containing a single element is often referred to as a singleton. For example, $\{a\}$ is a singleton of $a$.
### Important sets
There are a few important sets denoted by double-lined capital letters:
$$
\begin{aligned}
\mathbb{N}_0&=\set{0,1,2,3,\ldots}\text{ (the natural numbers including 0)} \\
\mathbb{N}&=\set{1,2,3,\ldots}\text{ (the natural numbers excluding 0)} \\
\mathbb{Z}&=\set{\ldots,-1,-2,0,1,2,\ldots}\text{ (all integers, including 0 and negative numbers)} \\
\mathbb{Q}&\text{ is the set of all rational numbers, so excluding $\pi$, for example.} \\
\mathbb{R}&\text{ is the set of all real numbers, so including $\pi$, but excluding all complex numbers.} \\
\mathbb{C}&\text{ is the set of all complex numbers.}
\end{aligned}
$$
This styling of the symbols is called blackboard bold. Not relevant but good to know.
## Set builder notation
Not all sets can be described by listing the elements. The set builder notation can be used to describe which elements belong to the set in this case. Let $D$ be a domain of discourse and $P$ be a propositional function, then 
$$
S=\{e\in D|Q(e)\}
$$
is the set of all elements in $D$ for which $Q(e)$ is true. For example, we can describe the set of all even naturals as
$$
\mathbb{E}=\set{x\in\mathbb{N}|\exists k\in\mathbb{N},x=2k}.
$$
Here, we are essentially saying: "the set, $\mathbb{E}$, is the set of all natural numbers $x$ where it is true that for some natural number $k$, $x=2k$." Of course, this makes $x$ even, as $2k$ is obviously divisible by 2.