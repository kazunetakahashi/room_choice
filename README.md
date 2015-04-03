# room_choice
院生室の抽選用

うちの部屋を希望した人の抽選に使います。
なるべくプライバシーに配慮しつつ、なるべく公平に抽選するためのものです。

使い方
* 室長が院生室名簿を受け取る。N人の希望者がいるとする。
* N枚のカードを用意し、表に0からN-1までの数字を書き、裏に氏名を書く。
* 私がこのプログラムを使って抽選する。(このプログラム自体はH氏にソースコードを確認してもらい、コンパイルまでその場で行う)
* 当選したカードをその場でオープンし、氏名を部屋の人で確認する。当選しなかったカードはクローズドのまま室長が捨てる。

考察
* プログラムは、乱数調整しないかぎり公平。乱数調整したところで、私が室長と共謀しないかぎり何の意味もない。
つまり、不正が起るには、私が乱数調整をしつつ、かつ、室長・該当候補者と密約を結び共謀する必要があるが、
そんな大掛かりなことは他の人の前ではまずしないだろう。
* 室長は同じ人のカードを複数枚書くこともできなくはない。
しかし、結果によっては複数枚がオープンになる危険性と隣合わせ。実際は問題にならないだろう。
* 当選しなかったカードはクローズドのまま捨てるのは、プライバシーに配慮してのことである。
室長のみ落選者を知ることになるが、室長が候補者を全員知るのは仕方がないことであるので、プライバシーの意味ではこれが最善である。
