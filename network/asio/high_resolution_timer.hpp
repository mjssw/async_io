//
// high_resolution_timer.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2015 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_HIGH_RESOLUTION_TIMER_HPP
#define ASIO_HIGH_RESOLUTION_TIMER_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/config.hpp"
# include <chrono>

#include "asio/basic_waitable_timer.hpp"

namespace asio {

typedef basic_waitable_timer<
    std::chrono::high_resolution_clock>
  high_resolution_timer;
} // namespace asio

#endif // ASIO_HIGH_RESOLUTION_TIMER_HPP
