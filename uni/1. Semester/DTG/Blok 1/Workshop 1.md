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

For option a), we can see that the change in our relation $S$ looks very similar to what would happen in the first generation of the transitive closure, ie a composition between $S$ and itself, or the second power of $S$:
$$
S^2=S\circ S
$$
Here we draw "transitivity arrows" in only one generation, so for any example of $(a,b)\vee(b,c)$ in $S$, we add $(a,c)$ to the set (without having this new $(a,c)$ count in the following looking for examples). 

For option b), we do the full transitive closure where we basically keep compositing S onto itself until they no longer change anything. The definition of the transitive closure is as follows:
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
The reflexive closure of a relation $R$ on a set $A$ is defined by $R\cup\Delta$ where
$$
\begin{aligned}
\Delta&=\{(a,a)\mid a\in A\}\\
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
\tilde{R}^{-1}=\{(b,a) \mid (a,b) \in \tilde{R}\},
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
We'll stop at the point where $S^n=S^{n-1}$. It is wayyyy more simple to do this with a graph than to do this with just sets in text, so first we'll draw $S^1$:
![[Pasted image 20260115204555.png]]
Then we must draw $S^2$, which essentially means for every instance of an arrow from a to b and another arrow from b to c, we must ensure there is an arrow from a to c:
![[Pasted image 20260115205235.png]]
Then we must draw $S^3$, where we can transitivity-ify a pink arrow with a blue arrow:
![[Pasted image 20260115205405.png]]
Now, let's attempt to draw $S^4$, where we can transitivity-ify a pink/blue arrow with a green arrow... we cannot add more arrows that aren't already there. So in conclusion,
$$
\begin{aligned}
S^*=&\{(w,w),(y,y),(x,x),(z,z),(w,x),\\
&(x,w),(w,y),(y,w),(w,z),(z,w),\\
&(x,y),(y,x),(x,z),(z,x),(y,z),(z,y)\}.
\end{aligned}
$$


![[Pasted image 20251207164058.png]]
Again,
$$
\tilde{R}=\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y)\}.
$$
It is once again much easier to construct $T$ with a graph. We start by drawing $\tilde{R}$:
![[Pasted image 20260115210410.png]]
Then we draw $\tilde{R}^2$:
![[Pasted image 20260115210631.png]]
Now, observe that if we were to attempt a $\tilde{R}^3$ or $\tilde{R}^2\circ\tilde{R}$, there will be no arrows added. The pink arrow that was added previously points to $y$, which does not itself point to anything else. Therefore we can conclude that the transitive closure $T$ of the reflexive closure $\tilde{R}$ is
$$
T=\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y),(w,y)\}.
$$

![[Pasted image 20251207164103.png]]
To construct the symmetric closure $T'$ of $T$, we must find $T\cup T^{-1}$. We define $T^{-1}$ by
$$
T^{-1}=\{(b,a) \mid (a,b) \in T\},
$$
which then must be
$$
T^{-1}=\{(w,w),(x,x),(y,y),(z,z),(x,w),(y,x),(y,z),(y,w)\}.
$$
The symmetric closure must then be
$$
\begin{aligned}
T' = &T\cup T^{-1}\\
= &\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y),(w,y)\}\\
\cup&\{(w,w),(x,x),(y,y),(z,z),(x,w),(y,x),(y,z),(y,w)\}\\
= &\{(w,w),(x,x),(y,y),(z,z),(w,x),(x,y),(z,y),(w,y),(x,w),(y,x),(y,z),(y,w)\}.

\end{aligned}
$$
To help with the next question, let's draw $T'$:
![[Pasted image 20260115212136.png]]
![[Pasted image 20251207164106.png]]
An equivalence relation is a relation which is reflexive, symmetrical and transitive. Both $S^*$ and $T'$ are reflexive. They are also both symmetrical since any arrow has an arrow going the opposite way (ie $(a,b)\iff (b,a)$). However only $S^*$ is transitive since it satisfies the condition $\forall a,b,c \in A: (a,b)\in R\wedge (b,c)\in R\Rightarrow (a,c)\in R$. Meanwhile, we can simply prove by counterexample that $T'$ is *not* transitive since we have $(x,y)$ and $(y,z)$ but no $(x,z)$.