# チャレンジ3

スタックの基本データ構造として `std::vector`、`std::list`、`std::deque` を使用した場合のパフォーマンスを比較します。スタックで一連のプッシュ操作とポップ操作を実行する小さなプログラムを作成し、コンテナの種類ごとに実行時間を計ります。このアプリケーションに最適なコンテナを判断し、その理由を説明してください。コンパイラがコードを最適化しないように、必ず-O0を指定してコンパイルしてください。最適化されたベンチマークの値では適切に比較できません。


# 計測結果

vector:: Push Time: 9 ms
Pop Time: 4 ms

list:: Push Time: 33 ms
Pop Time: 62 ms

deque:: Push Time: 14 ms
Pop Time: 6 ms

- vectorはメモリが連続しているため、プッシュとポップが最も高速
- Listはノードベースのデータ構造であり、要素の挿入と削除は高速だが、ランダムアクセスは遅いため、一番遅い。