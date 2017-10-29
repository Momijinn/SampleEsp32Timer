# SampleEsp32Timer
ESP32で使用するTimerサンプルプログラム

## 解説
ESP32はTimer割り込みをするときにセマフォ管理をしなければなりません

またプリスケーラの設定も必要です

timerAttachInterrupt()にてタイムアウトしたときに呼ばれる関数を定義しています

timerAlarmWrite()にてタイマーの設定をしています

上記のプログラムは1秒毎にonTimerを呼び出しています

timerAlarmEnable()にてタイマーをスタートさせています



より深く知りたい人はexampleを参考にしてみてください

スケッチの例 -> ESP32 -> Timer -> RepeatTimer です

## Blog
[AutumnColor.com](http://www.autumn-color.com/)