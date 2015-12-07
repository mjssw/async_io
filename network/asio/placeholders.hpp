//
// placeholders.hpp
// ~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2015 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_PLACEHOLDERS_HPP
#define ASIO_PLACEHOLDERS_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/config.hpp"
#include <functional>
#include "asio/detail/push_options.hpp"

namespace asio {
namespace placeholders {

namespace
{
	std::_Ph<1>& error = std::placeholders::_1;
	std::_Ph<2>& bytes_transferred = std::placeholders::_2;
	std::_Ph<2>& iterator = std::placeholders::_2;
	std::_Ph<2>& signal_number = std::placeholders::_2;
} // namespace

} // namespace placeholders
} // namespace asio

#include "asio/detail/pop_options.hpp"

#endif // ASIO_PLACEHOLDERS_HPP
