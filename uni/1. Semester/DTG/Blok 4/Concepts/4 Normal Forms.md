# Normal Forms
Normal forms are standardized ways to write propositions, making them easier to compare and evaluate. This is necessary because there are many different ways one could write entirely equivalent propositions.

## Elementary conjunctions
A conjunction of several terms in $n$ variables is considered to be an elementary conjunction if every term is either a variable or the negation of a variable. 

**Examples**
$p\wedge q$,
$p$,
$p\wedge\neg q\wedge\neg r$,
$p\wedge\neg p$.

**Non-example**
fuck

### Disjunctive normal form (DNF)
A proposition is said to be in DNF if it consists of the disjunction of elementary conjunctions.
**Examples**
$p\vee(p\wedge q)\vee\neg r$,
$\neg t\vee(\neg s\wedge v)$,
$q$.

#### Rewriting into DNF
$$
p\wedge(q\rightarrow\neg p)\equiv p\wedge(\neg q\vee\neg p)
$$
(using the fact that $a\rightarrow b\equiv\neg a\vee b$)
$$
\equiv(p\wedge\neg q)\vee(p\wedge\neg p)
$$
(using the fact that $a\wedge(b\vee c)\equiv(a\wedge b)\vee(a\wedge c)$). This is now in DNF though it can be simplified:
$$
	\equiv (p\wedge\neg q)\vee \bot\equiv p\wedge\neg q.
$$
(using the fact that $\neg p\wedge p\equiv\bot$ and $p\vee \bot\equiv p$). $\bot$ means contradiction btw.

## Elementary disjunction
A disjunction of several terms in $n$ variables is considered to be an elementary disjunction if every term is either a variable or the negation of a variable.
**Example**


**Non-example**
$(p\rightarrow q)\vee \neg p$ (as there is an arrow)

### Conjunctive normal form (CNF)
A proposition is said to be in CNF if it consists of the conjunction of elementary disjunctions.
**Example**

#### Rewriting into CNF
$$
p\wedge(q\rightarrow\neg p)\equiv p\wedge(\neg q\wedge \neg p)
$$
Easy, this is in CNF now. Can be simplified tho:
$$
\equiv(p\wedge\neg q)\vee(p\wedge\neg p)\equiv(p\wedge\neg q)\vee\bot\equiv p\wedge\neg q.
$$
Distributive laws used here.

## Minterm & maxterm
A minterm of $n$ variables is a conjunction that for each variable either contains it or its negation. Note that a minterm is true for exactly one realization of the involved variables.
**Example**
$p\wedge\neg q\wedge r$ 
The truth table for this contains $2^k=2^3=8$ rows, and only one of these rows will have $T$ at the end.

A maxterm of $n$ variables is a disjunction that for each variable either contains it or its negation. Note that a maxterm is false for exactly one realization of the involved variables.
**Example**
$\neg p\vee q\vee\neg r$
The truth table for this proposition, having 8 rows, will have only one row with $F$ at the end.

Note that a minterm is just an elementary conjunction and a maxterm is just an elementary disjunction.

## Principal disjunctive normal form (PDNF)
A proposition is said to be in PDNF if it consists of the disjunction of minterms.
**Example**
$$
p\wedge(q\rightarrow\neg p)\equiv(p\wedge\neg q)\vee(p\wedge\neg q)\equiv p\wedge\neg q
$$
This is in PDNF at the final equivalence, and in the middle it is only in DNF. So we can turn a DNF into a PDNF.
### Turning DNFs into PDNFs

## Principal conjunctive normal form (PCNF)
A proposition is said to be in PCNF if it consists of the conjunction of maxterms.
**Example**
$$
\begin{aligned}
&p\wedge(q\rightarrow\neg p)\\
\equiv& p\wedge(\neg q\vee\neg p)\\
\equiv&(p\vee\bot)\wedge(\neg q\vee\neg p)\\
\equiv&(p\vee(q\wedge\neg q))\wedge(\neg q\vee\neg p)\\
\equiv&(p\vee q)\wedge(p\vee\neg q)\wedge(\neg p\vee\neg q)
\end{aligned}
$$

The second equivalence is a CNF while the final equivalence we arrive at is a PCNF. So we can turn a CNF into a PCNF.