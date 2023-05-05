## [B: Same Map in the RPG World]（https://atcoder.jp/contests/abc300/tasks/abc300_b）

H * W の場合には横シフトW回、縦シフトH回までなので、全探索する。

A[i][j]を横にs,縦にtシフトすると

A[(i−t)mod H][(j−s)mod W]

に移る

公式解説
https://atcoder.jp/contests/abc300/editorial/6281