volatile SemaphoreHandle_t timerSemaphore;

void IRAM_ATTR onTimer(){
  Serial.println("time");

  //loopを確認できるセマフォを与える(安全にdigitalRead/writeするため)
  xSemaphoreGiveFromISR(timerSemaphore, NULL);
}

void setup() {
  Serial.begin(115200);

  //セマフォ管理
  timerSemaphore = xSemaphoreCreateBinary();

  //プリスケーラを80分周器にする(ESP Reference参照)
  hw_timer_t * timer = timerBegin(0, 80, true);
  //タイムアウトした時に行う処理(関数)を定義
  timerAttachInterrupt(timer, &onTimer, true);
  //何秒毎に行うか定義
  timerAlarmWrite(timer, 1000000, true);
  //タイマースタート
  timerAlarmEnable(timer);

}

void loop() {
}
