# 解説

## [E: Karuta](https://atcoder.jp/contests/abc287/tasks/abc287_e)

Trie木を利用する。1文字目から順番に、ノードを作る。新しい並びの時は新しいノードを作成し、既存の並びの場合には既存のノードを利用する。<br>

実装には、各文字並びをidにして挿入する`insert`と、被っているnodeを計算する`search`を用いる<br>

EX: abc, abd<br>
<img width="266" alt="fig_e1" src="https://user-images.githubusercontent.com/67512297/230014475-041e1ac9-c591-414b-aa49-d7f900ecb880.png">

公式解説<br>
https://www.youtube.com/watch?v=CH1bid_H7XA