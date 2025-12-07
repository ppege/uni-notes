![[Pasted image 20251207163857.png]]
![[Pasted image 20251207163908.png]]
$$
\begin{aligned}
S=&\{(Dee, Eve),(Eve, Fey),(Fey,Gil),(Fey,Cam),\\
&(Gil,Cam),(Abe,Fey),(Abe,Bob),(Abe,Cam),\\
&(Dee,Dee),(Eve,Eve),(Fey,Fey),(Gil,Gil),\\
&(Abe,Abe),(Bob,Bob),(Cam,Cam)\}.
\end{aligned}
$$
![[Pasted image 20251207163926.png]]
$$
|S|=15
$$
Since there are 15 elements in $S$, each element being an ordered pair.
![[Pasted image 20251207163933.png]]
The relation is between the universe $U$ and itself, so it is a subset of the cartesian product $U\bigtimes U$ or $U^2$. The cardinality of a cartesian product is defined by 
$$
|A|=n\wedge|B|=m\implies|A\bigtimes B|=nm.
$$
So here we can apply
$$
|U|=7\Rightarrow |U^2|=7^2=49
$$
![[Pasted image 20251207163941.png]]
#### Is it reflexive?
A homogenous relation $R$ on a set $A$ is **reflexive** if
$$
\forall a\in A:a\, R\, a.
$$
For all elements $a$ in the set $A$, $a$ is $R$-related to $a$. So a reflexive relation is one wherein there is an ordered pair $(a,a)$ for every element $a$ in $A$. Every element of $A$ is $R$-related to itself.

Our relation $S$ is reflexive, as every element $\forall a\in U$ is $S$-related to itself:
$$
\forall a\in U: a\, S\, a.
$$
#### Is it symmetric?
A relation $R$ is **symmetric** if
$$
\forall a,b\in A:a\, R\, b\iff b\, R\, a.
$$
A relation is therefore symmetric whenever the existence of an ordered pair $(a,b)$ in the relation implies the presence of the reverse, $(b,a)$.

$S$ is not symmetric, as we can see in Figure 1 there are actually no bidirectional arrows.

#### Is it antisymmetric?
A homogenous relation $R$ on a set $A$ is **antisymmetric** if
$$
\forall a,b\in A:a\, R\, b\wedge b\, R\, a\implies a=b
$$
In other words, a relation on a set is considered antisymmetric when there are no symmetric, distinct pairs in the relation. 

$S$ is antisymmetric since there are no symmetric, distinct pairs. There are only symmetric, nondistinct pairs, since everyone follows themselves.

#### Is it transitive?
A relation $R$ on a set $A$ is **transitive** if
$$
\forall a,b,c,\in A:a\, R\, b\wedge b\, R\, c\implies a\, R\, c.
$$
This is the same logic as a syllogism. If $a$ is $R$-related to $b$, and $b$ is $R$-related to $c$, then $a$ is $R$-related to $c$.

$S$ is not transitive; we can prove this by counterexample. Dee is $S$-related to Eve, and Eve is $S$-related to Fey, but Dee is not $S$-related to Fey. This violates the definition of transitivity and therefore $S$ is not transitive.

![[Pasted image 20251207163956.png]]

For option a), we can use the above text to infer that the ability to see ones post is analog to following them -- therefore, anytime $x_n$ posts something, then $x_{n-1}$ (who follows $x_n$) re-publishes it; then, $x_{n-2}$ can see anytime $x_n$ posts through the re-publishing of $x_{n-1}$.
$$
x_{n-1}\ S\ x_n\ \wedge x_{n-2}\ S\ x_{n-1}\ \Rightarrow x_{n-2}\ S\ x_n.
$$
We operate here under the assumption that "x follows y" is entirely equivalent to "y's posts are visible to x."

For option b), where we have a chain reaction, it becomes inductive in nature
$$
x_{n-k}\ S\ x_{n-k+1}\ \wedge x_{n-k+1}\ S\ x_{n-k+2}\ \wedge\ldots\wedge x_{n-1}\ S\ x_n\ \Rightarrow x_{n-k}\ S\ x_n. 
$$
This option is related to the transitive closure $S^*$ of our relation $S$, which is the smallest transitive relation containing $S$. The definition of the transitive closure is as follows:
$$
S^*=\bigcup\limits_{n=1}^{\infty} S^n
$$
So it is the union of every power of the relation.

![[Pasted image 20251207164002.png]]

So this is figure 1
![[Pasted image 20251207192725.png]]
In order to draw $S^*$ we must draw arrows to from every node to every node that has a path to it
![[Pasted image 20251207193106.png]]
Beautiful.

![[Pasted image 20251207164011.png]]
The set $F_{name}$ contains every person who can see name's posts (name's effective "followers"). Since we are using the relation $S^*$, it is of course where we go with option b) in exercise 2, where there is this chain reaction such that the whole follower chain can see your posts. 
$$
\begin{aligned}
F_{Cam}&=\{Cam, Abe, Gil, Fey, Eve, Dee\}\\
F_{Fey}&=\{Fey, Abe, Eve, Dee\}\\
F_{Cam}\cap F_{Fey}&=\{Fey, Abe, Eve, Dee\}
\end{aligned}
$$
![[Pasted image 20251207164028.png]]
$$
T\subseteq U\Rightarrow\{t\in T|(t,Cam)\in S^*\}\subseteq\{u\in U|(u,Cam)\in S^*\}
$$
So to prove this, let $x\in G_{Cam}$ be arbitrary. It then follows that $x\in T$ and $(x,Cam)\in S^*$. Since $T\subseteq U$ and $x\in T$ then it must follow that $x\in U$. By the definition of $F_{Cam}$
$$
F_{Cam}=\{x\in U|(x, Cam)\in S^*\},
$$
and the fact that $x$ is arbitrary, we can conclude that $G_{Cam}\subseteq F_{Cam}$.
![[Pasted image 20251207164034.png]]
This is the directed graph for $R$:
![[Pasted image 20251207200708.png]]
Its matrix representation is
$$
M_R = \begin{pmatrix}
 & w & x & y & z \\
w & 1 & 1 & 0 & 0 \\
x & 0 & 0 & 1 & 0 \\
y & 0 & 0 & 0 & 0 \\
z & 0 & 0 & 1 & 0
\end{pmatrix}
$$

![[Pasted image 20251207164042.png]]
The reflexive closure of a relation $R$ is defined by $R\cup\Delta$ where
$$
\begin{aligned}
\Delta&=\{(a,a)\mid a\in R\}\\
\tilde{R}&=R\cup\Delta\\
&=\{(w,w),(w,x),(x,y),(z,y)\}\\
&\cup\{(w,w),(x,x),(y,y),(z,z)\}\\
&=\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y)\}
\end{aligned}
$$
![[Pasted image 20251207164047.png]]
So we have
$$
\tilde{R}=\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y)\}
$$
To create the symmetric closure $S$ of this, we must find $\tilde{R}\cup\tilde{R}^{-1}$. We define $\tilde{R}^{-1}$ by
$$
\tilde{R}^{-1}=\{(b,a) \mid (a,b) \in R\},
$$
so in our case it is
$$
\tilde{R}^{-1}=\{(w,w),(x,x),(y,y),(z,z),(x,w),(y,x),(y,z)\}.
$$
Then the union becomes
$$
\begin{aligned}
\tilde{R}\cup\tilde{R}^{-1}&=\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y)\}\\
&\cup\{(w,w),(x,x),(y,y),(z,z),(x,w),(y,x)(y,z)\}\\
&=\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y),(x,w),(y,x),(y,z)\}
\end{aligned}
$$
This is the symmetric closure $S$
$$
S=\tilde{R}\cup\tilde{R}^{-1}=\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y),(x,w),(y,x),(y,z)\}.
$$


![[Pasted image 20251207164052.png]]
To construct the transitive closure we need to find
$$
S^*=\bigcup\limits_{n=1}^{\infty} S^n
$$
We'll stop at the point where $S^n=S^{n-1}$. So first we'll find $S\circ S$:
$$
S\circ S=\{\}
$$

![[Pasted image 20251207164058.png]]
![[Pasted image 20251207164103.png]]
![[Pasted image 20251207164106.png]]
