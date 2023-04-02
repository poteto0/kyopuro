# 解説

## [D : Range Add Query](https://atcoder.jp/contests/abc288/tasks/abc288_d)

数列$A_i =A_1, ... A_N$において<br>
$j = i \mod K$の成分における部分和$S_j = S_0, ... S_{K-1}$を考える<br>
$K$連続成分にある整数$M$を足すと、全ての$S_j$が$M$だけ増加する<br>
$\therefore $ 任意の$j,k$に対して以下が成り立つ<br>
$ C = S_j - S_k$<br>
ここで良い数列になるのは $ C = 0$ の時<br>
つまりは $ S_0 = S_2 = ... = S_{K-1}$<br>
よってこれを判定してけばいい

公式解説<br>
https://atcoder.jp/contests/abc288/editorial/5664