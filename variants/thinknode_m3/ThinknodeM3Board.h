#pragma once

#include <MeshCore.h>
#include <Arduino.h>

class ThinknodeM3Board : public mesh::MainBoard {
protected:
  uint8_t startup_reason;
  uint8_t btn_prev_state;

public:
  void begin();

  uint16_t getBattMilliVolts() override {
  }

  uint8_t getStartupReason() const override { return startup_reason; }

  const char* getManufacturerName() const override {
    return "Elecrow ThinkNode M3";
  }

  int buttonStateChanged() {
  #ifdef BUTTON_PIN
    uint8_t v = digitalRead(BUTTON_PIN);
    if (v != btn_prev_state) {
      btn_prev_state = v;
      return (v == LOW) ? 1 : -1;
    }
  #endif
    return 0;
  }

  void powerOff() override {
    sd_power_system_off();
  }

  void reboot() override {
    NVIC_SystemReset();
  }

  void onBeforeTransmit() override {
    digitalWrite(PIN_LED_BLUE, LOW);
  }
  void onAfterTransmit() override {
    digitalWrite(PIN_LED_BLUE, HIGH);
  }

//  bool startOTAUpdate(const char* id, char reply[]) override;
};