# 解説
## [D : Change UserName](https://atcoder.jp/contests/abc285/tasks/abc285_d)
グラフ構造の中に閉路ができる場合には名前の変更ができなくなる。よってこの閉路の有無を判定すれば良い。これはUnionFoundで実装できる。<br>
1. 繋がっている頂点のグループを繋げる(merge)<br>
2. 頂点を繋げる際に、2頂点同士のグループが同じであれば閉路あり