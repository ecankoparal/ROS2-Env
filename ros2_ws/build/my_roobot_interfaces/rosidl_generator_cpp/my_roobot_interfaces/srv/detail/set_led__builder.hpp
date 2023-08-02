// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_roobot_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef MY_ROOBOT_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define MY_ROOBOT_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_roobot_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_roobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_state
{
public:
  explicit Init_SetLed_Request_state(::my_roobot_interfaces::srv::SetLed_Request & msg)
  : msg_(msg)
  {}
  ::my_roobot_interfaces::srv::SetLed_Request state(::my_roobot_interfaces::srv::SetLed_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_roobot_interfaces::srv::SetLed_Request msg_;
};

class Init_SetLed_Request_led_number
{
public:
  Init_SetLed_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Request_state led_number(::my_roobot_interfaces::srv::SetLed_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLed_Request_state(msg_);
  }

private:
  ::my_roobot_interfaces::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_roobot_interfaces::srv::SetLed_Request>()
{
  return my_roobot_interfaces::srv::builder::Init_SetLed_Request_led_number();
}

}  // namespace my_roobot_interfaces


namespace my_roobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_success
{
public:
  Init_SetLed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_roobot_interfaces::srv::SetLed_Response success(::my_roobot_interfaces::srv::SetLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_roobot_interfaces::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_roobot_interfaces::srv::SetLed_Response>()
{
  return my_roobot_interfaces::srv::builder::Init_SetLed_Response_success();
}

}  // namespace my_roobot_interfaces

#endif  // MY_ROOBOT_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
