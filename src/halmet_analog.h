#ifndef __SRC_HALMET_ANALOG_H__
#define __SRC_HALMET_ANALOG_H__

#include <Adafruit_ADS1X15.h>

#include "sensesp/sensors/sensor.h"

using namespace sensesp;


FloatProducer* ConnectTankSender(Adafruit_ADS1115* ads1115, int channel, String name);
FloatProducer* ConnectPressureSender(Adafruit_ADS1115* ads1115, int channel, String name, int zero_pres_resistance, int max_press, int max_press_resistance);

#endif
