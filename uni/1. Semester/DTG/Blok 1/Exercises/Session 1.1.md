# Exercise 13
![[Screenshot 2025-09-10 at 10.29.30.png]]
![[Screenshot 2025-09-10 at 10.31.09.png]]
I will use the fact that:
$$
A\cup B=\{x|x\in A\vee x\in B\}
$$
$$
A\cap B=\{x|x\in A\wedge x\in B\}
$$
This would mean
$$
A\cap (A\cup B)=\{x|x\in A\wedge x\in\{y|y\in A\vee y\in B\}\}
$$
So it is true for all members $x$ of this intersection that
$$
x\in A\wedge (x\in A\vee x\in B)
$$
This is equivalent to this logical statement
$$
p\wedge (p\vee q)
$$
Using a truth table this can be proven to be equivalent to $p$:

| $p$ | $q$ | $p\vee q$ | $p\wedge q$ | $p\wedge (p\vee q)$ |
| --- | --- | --------- | ----------- | ------------------- |
| $T$ | $T$ | $T$       | $T$         | $T$                 |
| $T$ | $F$ | $T$       | $F$         | $T$                 |
| $F$ | $T$ | $T$       | $F$         | $F$                 |
| $F$ | $F$ | $F$       | $F$         | $F$                 |
Here we can see that the $p$ column and the $p\wedge (p\vee q)$ column are identical.

I realize the intention of this exercise was probably to use membership tables and not truth tables, so:

| $A$ | $B$ | $A\cup B$ | $A\cap B$ | $A\cap (A\cup B)$ |
| --- | --- | --------- | --------- | ----------------- |
| 1   | 1   | 1         | 1         | 1                 |
| 1   | 0   | 1         | 0         | 1                 |
| 0   | 1   | 1         | 0         | 0                 |
| 0   | 0   | 0         | 0         | 0                 |
Here we can see that the $A$ column and the $A\cap (A\cup B)$ column are identical.

# Exercise 21
![[Screenshot 2025-09-10 at 11.07.07.png]]

| $A$ | $B$ | $\mathbf{A-B}$ | $\overline{B}$ | $\mathbf{A\cap\overline{B}}$ |
| --- | --- | -------------- | -------------- | ---------------------------- |
| 1   | 1   | 0              | 0              | 0                            |
| 1   | 0   | 1              | 1              | 1                            |
| 0   | 1   | 0              | 0              | 0                            |
| 0   | 0   | 0              | 1              | 0                            |
The $A-B$ and $A\cap\overline{B}$ columns are identical, showing that $A-B=A\cap\overline{B}$.

| $\mathbf{A}$ | $B$ | $\overline{B}$ | $A\cup B$ | $A\cap B$ | $A\cap\overline{B}$ | $\mathbf{(A\cap B)\cup (A\cap\overline{B})}$ |
| ------------ | --- | -------------- | --------- | --------- | ------------------- | -------------------------------------------- |
| 1            | 1   | 0              | 1         | 1         | 0                   | 1                                            |
| 1            | 0   | 1              | 1         | 0         | 1                   | 1                                            |
| 0            | 1   | 0              | 1         | 0         | 0                   | 0                                            |
| 0            | 0   | 1              | 0         | 0         | 0                   | 0                                            |
The $A$ and $(A\cap B)\cup (A\cap\overline{B})$ columns are identical, showing that $(A\cap B)\cup (A\cap\overline{B})=A$.