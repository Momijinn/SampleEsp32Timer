SampleEsp32Timer
====
ESP32で使用するTimerサンプルプログラム

## Description
ESP32のTimer割り込みを使うときに自己的な解釈でまとめたサンプルプログラム

## Requirement
Arduino上でESP32を書き込めるようにしておく

http://www.autumn-color.com/archives/673

## Usage
ESP32はTimer割り込みをするときにセマフォ管理をしなければなりません

またプリスケーラの設定も必要です

timerAttachInterrupt()にてタイムアウトしたときに呼ばれる関数を定義しています

timerAlarmWrite()にてタイマーの設定をしています

上記のプログラムは1秒毎にonTimerを呼び出しています

timerAlarmEnable()にてタイマーをスタートさせています

## Install
SampleEsp32Timer.inoをESP32へ書き込む

## Licence
This software is released under the MIT License, see LICENSE.

## Author
[Twitter](https://twitter.com/momijinn_aka)

[Blog](http://www.autumn-color.com/)