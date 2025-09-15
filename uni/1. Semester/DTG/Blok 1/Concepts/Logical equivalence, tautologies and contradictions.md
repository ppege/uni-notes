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
There exist many useful, established logical equivalences which can be proven.
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
### Distributive laws
$$
p\wedge (q\vee r)\equiv (p\wedge q)\vee (p\wedge r)
$$
$$
p\vee (q\wedge r)\equiv (p\vee q)\wedge (p\vee r)
$$
