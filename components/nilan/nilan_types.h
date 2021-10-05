#pragma once

namespace esphome {
namespace nilan {

struct WriteableData
{
  uint16_t register_value;
  uint16_t write_value;
  bool ignore_response;
};

enum class ReadRegister {
  device_input,
  discrete_io_input,
  analog_io_input,
  alarm_input,
  user_functions_holding,
  control_input,
  airflow_input,
  airtemp_input,
  central_heat_input,
  user_panel_input,
  time_holding,
  airtemp_holding,
  control_state_holding,
  flaps_data,
  fan_data
};

enum class ReadWriteMode {
  read,
  write,
  idle
};

enum class NilanNumberType {
  UNKNOWN,
  USER_TEMP_SET,
  USER_VENT_SET,
  USER_TIME_SET,
};

struct ReadInfo {
  uint8_t function;
  uint16_t register_address;
  sensor::Sensor* sensor;
  binary_sensor::BinarySensor* binary_sensor;
  text_sensor::TextSensor* text_sensor;
};

} // namespace nilan
} // namespace esphome
