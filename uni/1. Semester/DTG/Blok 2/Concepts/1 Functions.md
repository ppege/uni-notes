# Functions
Let $A$ and $B$ be non-empty sets. A **function** from $A$ to $B$ is an assignment of exactly one element in $B$ to each element of $A$. We write $f(a)=b$ if the element $b\in B$ is assigned to $a\in A$ by the function $f$. We write $f : A\rightarrow B$ when $f$ is a function from $A$ to $B$. If we let $f : A\rightarrow B$ be a function, then:
 - $A$ is the **domain** of $f$.
 - $B$ is the **codomain** of $f$.
 - If $f(a)=b$ then $b$ is the **image** of $a$, and
 - $a$ is a **preimage** of $b$.
 - The set of all images is called the **image** of $f$ (or the **range**). $f(A):=\{f(a)|a\in A\}$

## Properties of functions
### Injective property
A function $f : A\rightarrow B$ is **injective** if and only if for all $x,y\in A$ it holds that $f(x)=f(y)$ implies that $x=y$. This effectively means that each image can only have one preimage. No two elements in $A$ can map to the same element in $B$. Equivalently, a function $f : A \rightarrow B$ is injective if
$$
\forall x,y\in A, f(x)=f(y)\implies x=y.
$$
### Surjective property
A function $f:A\rightarrow B$ is **surjective** if the image of $f$ is the whole codomain. This effectively means that every element of $B$ is the image of an element in $A$. Equivalently, a function $f:A\rightarrow B$ is surjective if
$$
\forall y\in B,\exists x\in A, f(x)=y.
$$
### Bijective property
A function $f:A\rightarrow B$ is **bijective** if it is both injective and surjective. We then say $f$ is a **bijection**. This effectively means that every element in $B$  is the image of exactly one element in $A$.
## Increasing and decreasing functions
Let $A,B\subseteq \mathbb{R}$ be two subsets of $\mathbb{R}$ and $f : A \rightarrow B$ a function from $A$ to $B$.
 - $f$ is **increasing** if $f(x)\leq f(y)$ for all $x<y$.
 - $f$ is **strictly increasing** if $f(x)<f(y)$ for all $x<y$.
 - $f$ is **decreasing** if $f(x)\geq f(y)$ for all $x<y$.
 - $f$ is **strictly decreasing** if $f(x)>f(y)$ for all $x<y$.

**Theorem**: If a function $f:A\rightarrow B$ is strictly increasing, then it is injective.

Assuming $f$ is strictly increasing, then we need to show $x\neq y\implies f(x)\neq f(y)$.

If $x\neq y$, then $x<y$ or $y<x$, without loss of generality

We assume $x<y$, then $f(x)<f(y)$ since $f$ is strictly increasing. Hence $f(x)\neq f(y)$. QED

## Identity functions
The function $\iota_A:A\rightarrow A$ that assigns each element to itself is called the identity function. It is sometimes also denoted by $id_A$. For an identity function $\iota_A$, it is always true that
$$
\iota_A(a)=a.
$$
## Inverse functions
Let $f:A\rightarrow B$ be a bijection. The **inverse function** $f^{-1}:B\rightarrow A$ is the function that assigns to each element $b\in B$ the unique element $a\in A$ for which $f(a)=b$. Hence $f^{-1}(b)=a$ if and only if $f(a)=b$. Bijections are also called **invertible functions**, since they are precisely the functions that have an inverse. To find the inverse function of a function we simply solve for $x$ in the function definition, such that $f(x)$ is no longer isolated. Example:
$$
f(x)=x+1\Leftrightarrow f^{-1}(x)=x-1
$$
because
$$
y=x+1\Leftrightarrow x=y-1.
$$
We simply chance the labels of $x$ and $y$ such that $x$ is now $f^{-1}(x)$ and $y$ is now $x$.
## Composition of functions
Let $g:A\rightarrow B$ and $f:B\rightarrow C$,  then the **composition** of $f$ and $g$ is $f\circ g:A\rightarrow C$, which is function from $A$ to $C$ defined by
$$
(f\circ g)(a)=f(g(a)).
$$
Here we are simply inserting the formula for the function $g$ into $f$, so for example if
$$
g(x)=2x+1
$$
and
$$
f(x)=x^2,
$$
then
$$
f(g(x))=f(2x+1)=(2x+1)^2.
$$
If we look at the compositions between a bijective function $f:A\rightarrow B$ and its inverse $f^{-1}$, we get
$$
\begin{aligned}
f\circ f^{-1}&=\iota_B, \\
f^{-1}\circ f&=\iota_A.
\end{aligned}
$$
# Useful functions
There are a few functions that Gnilke for some reason want to be made known lol
## Floor and Ceiling
**Floor and Ceiling** are functions from the reals $\mathbb{R}$ to the integers $\mathbb{Z}$. Floor assigns to each real number $x$ the **largest integer that is equal or smaller than** $x$. It is denoted by $\lfloor x\rfloor$. For example,
$$
\lfloor 2.5\rfloor=2,\lfloor -5.1\rfloor=-6,\lfloor\pi\rfloor=3.
$$
Ceiling does the opposite, assigning to each real number $x$ the **smallest integer that is equal or greater than** $x$. This is denoted by $\lceil x\rceil$. For example,
$$
\lceil 2.5\rceil=3,\lceil -5.1\rceil=-5,\lceil\pi\rceil=4.
$$
## Factorial
The **factorial function** is a function from $\mathbb{N}$ to $\mathbb{N}$. It assigns to each natural number $n$ the product of all positive integers smaller than or equal to $n$. We write $n!=1\cdot 2\cdot\ldots\cdot n$ and define $0!=1$.
## Exponential functions
For any positive real number $b\in\mathbb{R}_{>0}$, we can define an **exponential function** with base $b$ as $f_b(x)$. For a natural number $n$ it is defined as $f_b(n)=b^n=b\cdot b\cdot\ldots\cdot b\text{ (n times)}$. This function can be extended to allow any real number $x$ in the exponent. Some exponent rules that are important to remember are:
$$
b^{x+y}=b^x\cdot b^y
$$
$$
b^\frac{1}n=\sqrt[n]{b}
$$
$$
(b^x)^y=b^{xy}
$$
## Logarithms
The inverse function to the exponential functions with base $b\neq 1$ is called the logarithm to the base $b$, written as $\log_b(x)$. Its domain are the positive real numbers $\mathbb{R}_{>0}$. So $\log_b(b^x)=x$. Some logarithmic rules that are important to remember are:
$$
\log_b(xy)=\log_b(x)+\log_b(y)
$$
$$
\log_b(x^y)=y\log_b(x)
$$
$$
\log_a(x)=\frac{\log_b(x)}{\log_b(a)}
$$