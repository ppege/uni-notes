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