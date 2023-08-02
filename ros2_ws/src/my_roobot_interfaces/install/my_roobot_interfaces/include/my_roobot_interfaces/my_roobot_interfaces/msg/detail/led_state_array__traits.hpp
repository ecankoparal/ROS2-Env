// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_roobot_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef MY_ROOBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__TRAITS_HPP_
#define MY_ROOBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_roobot_interfaces/msg/detail/led_state_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_roobot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedStateArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_states
  {
    if (msg.led_states.size() == 0) {
      out << "led_states: []";
    } else {
      out << "led_states: [";
      size_t pending_items = msg.led_states.size();
      for (auto item : msg.led_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedStateArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.led_states.size() == 0) {
      out << "led_states: []\n";
    } else {
      out << "led_states:\n";
      for (auto item : msg.led_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedStateArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_roobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_roobot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_roobot_interfaces::msg::LedStateArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_roobot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_roobot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_roobot_interfaces::msg::LedStateArray & msg)
{
  return my_roobot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_roobot_interfaces::msg::LedStateArray>()
{
  return "my_roobot_interfaces::msg::LedStateArray";
}

template<>
inline const char * name<my_roobot_interfaces::msg::LedStateArray>()
{
  return "my_roobot_interfaces/msg/LedStateArray";
}

template<>
struct has_fixed_size<my_roobot_interfaces::msg::LedStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_roobot_interfaces::msg::LedStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_roobot_interfaces::msg::LedStateArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROOBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__TRAITS_HPP_
