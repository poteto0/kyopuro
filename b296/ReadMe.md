# 解説
## [D : M<=ab](https://atcoder.jp/contests/abc296/tasks/abc296_d)

※$[a]=N (N-1 \leq a \leq N)$<br>

任意の$a$に対して$b = [M/a]$を求める<br>
これが$b \leq N$を満たせば答えの候補となる<br>
この操作を$a \leq b$が成り立つ範囲で繰り返し、答えの候補のうち最小値が答えとなる<br>

これは$O(\sqrt{N})$より全探索で間に合う。

EX: $N = 5, M = 7$<br>
$ a = 1 \Rightarrow b = [7/1] = 7 \Rightarrow × \quad (\because b > N)$<br>
$ a = 2 \Rightarrow b = [7/2] = 4 \Rightarrow ○ \quad (\because b \leq N)$<br>
$ a = 3 \Rightarrow b = [7/3] = 3 \Rightarrow ○ \quad (\because b \leq N)$<br>

公式解説<br>
https://atcoder.jp/contests/abc296/editorial/6115