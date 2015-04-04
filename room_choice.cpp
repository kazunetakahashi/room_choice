#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main() {
  int N, M, X;
 EXIT:
  N = 0 , M = -1, X = -1;
  while (N <= 1) {
    cout << "抽選希望の人数は？ ＞ ";
    cin >> N;
  }
  while (M <= 0 || M > N) {
    cout << "当選人数は？ ＞ ";
    cin >> M;
  }
  cout << N << "人中" << M << "人が当選します。" << endl;
  cout << "カードに、0から" << N-1 << "までの数字が書かれていますか？" << endl;
  cout << "問題ないなら、0を入力してください。 ＞ ";
  cin >> X;
  if (X != 0) {
    cout << "はじめに戻ります。" << endl;
    goto EXIT;
  }
  bool ischosen[1000];
  fill(ischosen, ischosen+N, false);
  int chosen_n = 0;
  random_device rd;
  mt19937 mt(rd());
  cout << "当選番号：";
  while (chosen_n < M) {
    int x = mt()%N;
    if (!ischosen[x]) {
      cout << x << " ";
      ischosen[x] = true;
      chosen_n++;
    }
  }
  cout << endl;
  return 0;
}
