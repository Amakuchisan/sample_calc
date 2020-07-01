## sample_calc

四則演算のプログラムを使ったGit演習

### 1. ローカルリポジトリクローンする

```
$ git clone https://github.com/Amakuchisan/sample_calc.git
```

### 2. 実行する

```
$ cd sample_calc
$ gcc calc.c -Wall
$ ./a.out
```

### 3. multiply関数を実装する

#### 3-1 ブランチを作成する

```
$ git branch impl-multiply
```

#### 3-2 ブランチを移動する

```
$ git switch impl-multiply
```

#### 3-3 ソースコードを変更する

関数add、関数subtractを参考に、関数multiplyにかけ算を実装する。

#### 4. add と commit をする

変更内容は、自分で決めて書く。

```
$ git add calc.c
$ git commit -m "変更内容"
```

### 5. masterブランチに戻って、作成した関数をmergeする

```
$ git switch master
$ git merge impl-multiply
```

### 6. divide関数に0除算を判定させる

0で割ってはいけない。
0で割ろうとしたら，`[Error!] 0で割ってはいけません`などとメッセージを出してプログラムを終了させる。

ヒント: メッセージを出す時に、error関数を使う

### 7. divide関数を、小数対応させる

divide関数は、9/4=2のように、整数を返すようになっている。
9/4=2.25のように、小数で表示されるように変更する。
※ masterブランチから、新しくブランチを作ること

ヒント: intをdoubleに変更する

```
$ gcc calc.c -Wall
$ ./a.out
入力された2値の計算ができます。a + b のように入力してください。
[足し算: +], [引き算: -], [かけ算: *], [わり算: /]
入力してください: 9/4
答えは 2.250000 です。
```
