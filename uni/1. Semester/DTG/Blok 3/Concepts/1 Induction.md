# Proof by induction
Proof by induction is a method of proof where we prove that $P(n)\implies P(n+1)$ to prove that $P(n)$ is true for every $n\in\mathbb{Z}_+$. In logical terms: let $P(n)$ be a propositional function defined on $\mathbb{Z}_+$, Then
$$
P(1)\wedge\forall k(P(k)\rightarrow P(k+1))\rightarrow \forall n P(n)
$$

Consider the statement
$$
P(n):\text{The sum of the first $n$ positive integers is equal to $\frac{n(n+1)}{2}$.}
$$
This means for example for $n=2$
$$
P(2):1+2=\frac{2(2+1)}{2}=\frac{6}2=3
$$
We can check the validity of $P(n)$ for any number of $n$'s we want, but to prove $P(n)$ is true for *every* $n\in\mathbb{Z}_+$, we can use proof by induction by proving
$$
P(n)\implies P(n+1)
$$
## Induction in 3 steps
Standardly a proof by induction is split into a specific set of steps.
### Theorem
Show that the statement $P(n)$ is true for all integers $n\geq b$.
### Step 1: basis step
Show that $P(b)$ is true.
### Step 2: induction hypothesis
Assume that $P(k)$ is true for some $k$.
### Step 3: inductive step
Prove the statement $P(k+1)$ is true using the induction hypothesis.
## Continuing the example
Again we consider the statement
$$
P(n):\text{The sum of the first $n$ positive integers is equal to $\frac{n(n+1)}{2}$.}
$$
### Basis step
$$
P(1): \frac{1(1+1)}2=1
$$
### Induction step
Assume:
$$
P(k):1+\ldots+k=\frac{k(k+1)}2
$$
Then we must show
$$
P(k+1):1+\ldots+(k+1)=\frac{(k+1)(k+2)}2.
$$
The left hand side contains the left hand side of the hypothesis:
$$
1+\ldots+k+(k+1)=\frac{k(k+1)}2+(k+1)
$$

