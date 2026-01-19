![[Pasted image 20251023093033.png]]
$$f:A\bigtimes\mathbb{Z}\rightarrow\mathbb{Z}_{\geq -1}$$
$$f((3,4,4,5),4)=\{1,2\}$$
A function by definition must return only one value. A **function** from $A$ to $B$ is an assignment of EXACTLY ONE element in $B$ to each element of $A$. 

![[Pasted image 20251023093043.png]]
Recall the definitions of injective, surjective and bijective functions
### Injective property
A function $f : A\rightarrow B$ is **injective** if and only if for all $x,y\in A$ it holds that $f(x)=f(y)$ implies that $x=y$. This effectively means that each image can only have one preimage. No two elements in $A$ can map to the same element in $B$. Equivalently, a function $f : A \rightarrow B$ is injective if
$$
\forall x,y\in A, f(x)=f(y)\implies x=y.
$$
$f$ is not injective, as its domain is $A\bigtimes\mathbb{Z}$, means we can supply any finite list of integers to the function. It's entirely possible to have two situations:
$$
f((1,2,3),3)=2
$$
$$
f((3,1,2),2)=2
$$
Where the condition
$$
\forall x,y\in A,f(x)=f(y)\wedge x\neq y
$$
Since we have two different values in the domain giving the same value from the codomain.
### Surjective property
A function $f:A\rightarrow B$ is **surjective** if the image of $f$ is the whole codomain. This effectively means that every element of $B$ is the image of an element in $A$. Equivalently, a function $f:A\rightarrow B$ is surjective if
$$
\forall y\in B,\exists x\in A, f(x)=y.
$$
To see if the result $-1$ can by found with some input into $f$, we just use the example of $f((), 0)=-1$, since searching for $0$ in an empty list will find no matches. For all remaining $n\geq 0$, ie the rest of the codomain, we can simply observe that $f((0,1,2,\ldots,n),n)=n$. So in conclusion, every element in the codomain has an element in the domain such that $f(x)$ where $x$ is in the domain gives this element. $f$ is surjective.
### Bijective property
A function $f:A\rightarrow B$ is **bijective** if it is both injective and surjective. We then say $f$ is a **bijection**. This effectively means that every element in $B$  is the image of exactly one element in $A$.

$f$ is not injective, so it is obviously also not bijective.

![[Pasted image 20251023093123.png]]
Done!
![[Pasted image 20251023093143.png]]
7000 does not appear in any of the files.
![[Pasted image 20251023093153.png]]
Finding 7 took BinSearch 0.0507s and LinSearch 0.0048s
Finding 899 took BinSearch 0.0578s and LinSearch 0.7070s
Finding 3000 took BinSearch 0.0594s and LinSearch 2.349s
Finding 8991 took BinSearch 0.0578s and LinSearch 6.9593s
![[Pasted image 20251023093201.png]]

| List size | Linear search time | Binary search time |
| --------- | ------------------ | ------------------ |
| 500       | 0.3725640s         | 0.0281510s         |
| 1000      | 0.7308030s         | 0.0302280s         |
| 2000      | 1.4481610s         | 0.0323800s         |
| 6000      | 4.5116670s         | 0.0349930s         |
| 9000      | 6.7518970s         | 0.0391740s         |
![[Pasted image 20251023123728.png]]
As we can see, the blue line (BinSearch) is slightly better than the red line (LinSearch).
This is because binary search has an average case time complexity of $\log{n}$, while linear search's average case time complexity is $n$.
![[Pasted image 20251023093210.png]]
In the while loop, we make 2 comparisons for every element up to $n$ in the worst case. We then, when the element is reached, make the `i < size` comparison and the other `i < size` comparison, totaling to $2n+2$ comparisons.
![[Pasted image 20251023104113.png]]
![[Pasted image 20251023093216.png]]
If we see the witnesses as $C=3, k=2$, then our big O case is $|f(x)|\leq C|g(x)|\Leftrightarrow |2n+2|\leq 3\cdot n$ where $x>2$. Our big Omega case, with witnesses $C=2,k=0$ is $|f(x)| \geq C|g(x)|\Leftrightarrow |2n+2| \geq 2\cdot n$ where $x>0$. With this we have shown that the worst case for linear search is in Theta of $n$.
![[Pasted image 20251023093240.png]]
So true bestie
![[Pasted image 20251023093247.png]]
$i=0$
$j=2^k-1$
$m=\lfloor\frac{2^k-1}{2}\rfloor$ 
It is a rule that $\frac{2^x}{2}=2^{x-1}$. We can split $m$ such that
$m=\lfloor 2^{k-1}\rfloor + \lfloor - \frac{1}{2}\rfloor$
Here -1⁄2 floored becomes -1, so
$m=2^{k-1}-1$
![[Pasted image 20251023093253.png]]
Either the starting point $i$ or the ending point $j$  becomes $m$ after the first iteration, and $m$ is at the middle point of the list. This of course means the area of the list we are searching within becomes halved.
![[Pasted image 20251023093258.png]]
$$\frac{2^k}{2}=2^{k-1}$$
This means if we want to turn $2^k$ into 1, we must halve $2^k$ enough times to reach the case where $k=0$, so $k$ times. $log_2(n)$ when $n=2^k$ gives $log_2(2^k)=k$. So when $n$ is not of the formula $2^k$, we can safely assume that $log_2(n)$ halves of $n$ should still give us 1, when using floor.
![[Pasted image 20251023093512.png]]
In the below code, we can see that each iteration has 2 comparisons: `i < j` and `x > array[m]`. After the iterations, we have the final comparison in while `i < j` which will return false, and then at the end we have `x == array[i]`. We have $log_2(n)$ because we in the worst case will run the loop $log_2(n)$ times.
![[Pasted image 20251023115447.png]]
![[Pasted image 20251023093352.png]]
If we see the witnesses as $C=3, k=3$, then our big O case is $|f(x)|\leq C|g(x)|\Leftrightarrow |2log_2(n)+2|\leq 3\cdot log_2(n)$ where $x>3$. Our big Omega case, with witnesses $C=2,k=0$ is $|f(x)| \geq C|g(x)|\Leftrightarrow |2log_2(n)+2| \geq 2\cdot log_2(n)$ where $x>0$. With this we have shown that the average case for binary search is in Theta of $log_2(n)$.
![[Pasted image 20251023093411.png]]
The results from our implementation of linear search graph to this:
![[Pasted image 20251023123826.png]]
This looks like $f(x)=x$, which fits our mathematically derived asymptotic bounding of $\Theta(n)$. For our binary search implementation, the graph is this:
![[Pasted image 20251023123930.png]]
This doesn't look exactly like $f(x)=log_2(x)$, but this can be explained by small inaccuracies in the test environment. With a large enough data set, the graph should be asymptotically bounded by $\Theta(log_2(n))$.

![[Pasted image 20251023093418.png]]
![[Pasted image 20251023093523.png]]
$$mn$$
![[Pasted image 20251023093530.png]]
$$n\log_2{n}+m\log_2{n}$$
![[Pasted image 20251023093536.png]]
We solve for the point at which the amount operations of linear search becomes greater than the amount of operations of binary search, and solve for $m$
![[Pasted image 20251023125222.png]]
We get that once $m$ is greater than or equal to $\frac{n\log_2{n}}{n-\log_2{n}}$, the same inequality is satisfied. So before this inequality is true, linear search is better, and after, binary search is better.

In our scenario, the list has 10000 elements. So we plug in $n=10000$ into the formula we found, to find the concrete $m$ that must be compared with to figure out whether to use linear search on the unsorted list, or to sort the list and use binary search.
$$
\frac{10000\log_2{10000}}{10000-\log_2{10000}}\approx13.305
$$
So, in the case of the 10000-element list, we must use linear search if we are looking for 13 elements or less, and sort the list and use binary search if we are looking for 14 elements or more.
