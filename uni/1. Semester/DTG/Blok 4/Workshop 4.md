![[Pasted image 20251127094257.png]]
![[Pasted image 20251127094312.png]]
$$
900000^3\approx 7.29\cdot 10^{17}
$$
![[Pasted image 20251127094317.png]]
$$
\text{900000 choose 3}\approx 1.215\cdot 10^{17}
$$
![[Pasted image 20251127094322.png]]
$$
\frac{900000^3}{\text{900000 choose 3}}\approx 6
$$
So the first one is 6 times larger than the second.
![[Pasted image 20251127094329.png]]
```c
/* This function should return 1 if x is prime and 0 otherwise */
int isPrime(int x){
  for (int i = 2; i < ceil(sqrt(x)); i++) {
    if (x % i == 0 && i != x) {
        return 0;
    }
  }
  return 1;
}

/* This function should return 1 if gcd(x,2)=1 and 0 otherwise */
int isGcd1(int x){
  return x % 2;
}

/* This function should return 1 if 9^x-2 mod 5 = 2 and 0 otherwise */
int is2mod5(int x){
  int result = 1;  // will hold 9^k mod 5 as we iterate
  int i;

  for (i = 0; i < x; i++) {
    result = (result * 9) % 5;  // keep result small by taking mod 5 each time
  }

  /* Now result == 9^x mod 5.
      (9^x - 2) % 5 == 2  is equivalent to  9^x % 5 == 4. */
  return (result == 4);
}
```
![[Pasted image 20251127094335.png]]
Nope
![[Pasted image 20251127094341.png]]
ok

![[Pasted image 20251127102836.png]]
$P(x):=p$ , $Q(x):=q$, $R(x):=r$
$$
(p\wedge\neg r)\vee\neg(p\vee\neg q\vee r)\vee(\neg p\wedge\neg q\wedge r).
$$
Disjunction of a minterm, a maxterm and a minterm
Lets De Morgan the maxterm
$$
\neg(p\vee\neg q\vee r)\equiv(\neg p\wedge q\wedge\neg r)
$$
So we have
$$
(p\wedge\neg r)\vee(\neg p\wedge q\wedge\neg r)\vee(\neg p\wedge\neg q\wedge r).
$$
Now we have a disjunction of 3 minterms. The first minterm is missing $q$, so the 3 minterms are not minterms of the same $n$ variables, so we conjunct a tautology on the first minterm to introduce $q$:
$$
\begin{aligned}
&(p\wedge\neg r)\\
\equiv&(p\wedge\neg r)\wedge T\\
\equiv&(p\wedge\neg r)\wedge(q\vee\neg q)\\
\equiv&(p\wedge\neg r\wedge q)\vee(p\wedge\neg r\wedge\neg q)
\end{aligned}
$$
Now we insert this in (6)
$$
(p\wedge q\wedge\neg r)\vee(p\wedge\neg q\wedge\neg r)\vee(\neg p\wedge q\wedge\neg r)\vee(\neg p\wedge\neg q\wedge r).
$$
Now we have a disjunction of 4 minterms of 3 variables. Which makes is a PDNF!

![[Pasted image 20251127094345.png]]
As the minterms are of 3 variables, the truth table for each minterm contains $2^3=8$ rows. Since these minterms are disjunct, the complete proposition will also be of 8 rows, and since each minterm is unique, it means the truth table will have 4 true rows and 4 false rows.
![[Pasted image 20251127110419.png]]
Here we have written out the truth table for the whole proposition. The rows that have an orange circle present are the rows that will be true for the whole disjunction of the 4 minterms since $T\vee x\vee y\vee z\equiv T$. 4 true rows and 4 false rows. 8 rows total.
![[Pasted image 20251127094352.png]]
We have two propositions:
$$
P(x):gcd(x,2)=1
$$
$$
Q(x):\text{$x$ is odd}
$$
$x$ being odd is equivalent to $x=2k+1,k\in\mathbb{Z}$, so the "iff" means we have to prove the following:
$$
gcd(x,2)=1\iff x=2k+1,k\in\mathbb{Z}.
$$
We will prove one direction (lol) at a time. First $\Leftarrow$:
> [!info] If $x$ is odd, then $gcd(x,2)=1$.
> By the definition of odd, $x=2k+1$ for some integer $k$.
> The divisors of 2 are only 1 and 2.
> Since $x$ is odd, 2 does not divide $x$.
> So the only common divisor of $x$ and $2$ is 1.
> $\therefore gcd(x,2)=1$ when $x$ is odd.

Then we prove the $\Rightarrow$:
> [!info] If $gcd(x,2)=1$, then $x$ is odd.
> Suppose $x$ is even (antithesis). Then $x=2k$ for some integer $k$, so $2\mid x$. Since $2\mid 2$, we have that 2 is a common divisor of $x$ and 2. This means $gcd(x,2)\geq 2$, which contradicts $gcd(x,2)=1$. Since $x$ cannot be even, $x$ is odd.

QED.


![[Pasted image 20251127094357.png]]
So what we must prove is that $9^2-x\mod 5=2$ if and only if $x$ is odd. Lets start with simplifying the condition:
$$
(9^x-2)\mod 5=2\iff 9^x\equiv 4\pmod 5
$$
Since $9\equiv 4\pmod 5$, we actually need to prove that
$$
4^x\equiv 4\pmod 5\iff x=2k+1,k\in\mathbb{Z}.
$$
Let's construct a proof by induction. Our propositional function is
$$
P(x):4^x\equiv 4\pmod 5
$$
### Base step
$P(1):4^1\equiv 4\pmod 5$
This is obviously true, as $4^1=4$ and any number is congruent to itself in any mod.

$P(2):4^2\equiv 4\pmod 5$
Since $4^2=16$ and $16\mod 5=1$, $P(2)$ is false.

$P(3):4^3\equiv 4\pmod 5$
Since $4^3=64$ and $64\mod 5=4$, $P(3)$ is true.

$P(4):4^4\equiv 4\pmod 5$
Since $4^4=256$ and $256\mod 5=1$, $P(4)$ is false.
### Inductive hypothesis
Assume $P(k)$ is true for some odd $k$.
$$
4^k\equiv 4\pmod 5
$$
### Inductive step
Show that $P(k)\rightarrow \neg P(k+1)$ and $P(k)\rightarrow P(k+2)$. This is because $k+1$ is by definition even and $k+2$ is by definition odd.

So in the $k+1$ (even) case we can see that 
$$
4^{k+1}=4^k\cdot 4\equiv 4\cdot 4=16\equiv 1\pmod 5
$$
So $P(k+1)$ is false. Then in the $k+2$ (odd) case we can see that
$$
4^{k+2}=4^{k+1}\cdot 4\equiv 1\cdot 4=4\pmod 5
$$
So $P(k+2)$ is true. This proves that the pattern holds for all positive integers, that $P(x)$ is true for odd numbers and false for even numbers.

### Final proof
We must show both directions of the $\iff$, so first the $\Leftarrow$ case:
> [!info] If $x$ is odd, then $(9^x-2)\mod 5=2$.
> By the pattern shown in the inductive proof, an odd $x$ does indeed give that $4^x\equiv 4\pmod 5$. Finally, this means $9^x\equiv 4\pmod 5$, meaning $(9^x-2)\mod 5=2$.

Then the $\Rightarrow$ case:
> [!info] If $(9^x-2)\mod 5=2$, then $x$ is odd.
> Suppose $x$ is even (antithesis). Then by the inductive proof, $4^x\equiv 1\pmod 5$. Recall that $9\equiv 4\pmod 5$. Then, $9^x-2\equiv 1-2=-1\equiv 4\pmod 5$. This goes against our assumption that $9^x-2\equiv 2\pmod 5$, so we have a contradiction. Therefore, $x$ must indeed be odd.

![[Pasted image 20251127094409.png]]
So $Q(x)$ is the propositional function that $x$ $gcd(x,2)=1$. We have shown that the value of $Q(x)$ is identical to the value of a new proposition, $Z(x)$ that $x$ is odd.

$R(x)$ is the propositional function that $(9^x-2)\mod 5=2$. We have also shown that the value of $R(x)$ is identical to the value of $Z(x)$. Therefore
$$
Q(x)=Z(x)\wedge R(x)=Z(x)\Rightarrow Q(x)=R(x).
$$

![[Pasted image 20251127094414.png]]
(2) is
$$
P(x)\wedge\neg Q(x).
$$
**CNF**: for it to be CNF it must be a conjunction of elementary disjunctions. This is true as it is a conjunction of two elementary disjunctions that just so happen to be disjunctions of one proposition.
**DNF**: for it to be DNF it must be a disjunction of elementary conjunctions. This is FALSE since it is NOT a disjunction at all.
**PCNF**: it is currently not PCNF since the two propositions not being maxterms of the same variables. Could be rewritten into PCNF though.
**PDNF**: it is not PDNF because it is not even DNF cmon man.
![[Pasted image 20251127094422.png]]
so true bestie
![[Pasted image 20251127094426.png]]
We define:
$$
\begin{aligned}
P(x):&\text{ $x$ is prime.}\\
Q(x):&\text{ }gcd(x,2)=1.\\
\neg Q(x):&\text{ }gcd(x,2)\neq 1.
\end{aligned}
$$
We want to show that
$$
\forall x>2\in\mathbb{Z}:P(x)\wedge\neg Q(x)\equiv\bot.
$$
Assume that there exists some integer $x > 2$ such that $P(x)\wedge\neg Q(x)$. This means that $x$ is prime and $gcd(x,2)\neq 1$. We know that the only divisors of 2 that exist are precisely 1 and 2. Since $gcd(x,2)\neq 1$, we must then have that $gcd(x,2)=2$. This means that $x\mid 2$, or in other words that $x$ is even. Sadly, our first proposition $P(x)$ being true means that $x$ has to be prime, and for $x$ to be prime it must by definition only have 1 and $x$ as its divisors. The only even prime number is 2, so since $x>2$, we have a contradiction. Because our antithesis leads to contradiction, we can conclude that the thesis must be true, ie that 
$$
\forall x>2\in\mathbb{Z}:P(x)\wedge\neg Q(x)\equiv\bot.
$$
QED.