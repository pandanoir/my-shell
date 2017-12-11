# MyShellとは
MyShellとは、シェルを自作してみようという企画で作っているシェルです。

# ビルド

```sh
$ g++ shell.cpp
```

# 機能
現在実装されている機能は次のとおりです

* 入力されたコマンドがパスが通っていた場合、実行する
* 入力されたコマンドがパスが通っていない場合「not found」と表示する
* exitが入ったら抜ける

単独のコマンドを実行する分にはまあまあ普通に使えるかな、というくらいです。

# 実装するかもしれない
しないかもしれない

* パイプ
* リダイレクト
* 入力履歴

# 実装しない
ここまで実装し出したら時間が足りなくなること必死だしそこまでする必要ないだろと思うのでやらない

* 補完
* シェルスクリプトの解釈
* ブレース展開
