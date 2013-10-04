/*
	Copyright (C) 2013 by Pierre Talbot <ptalbot@hyc.io>
	Part of the Battle for Wesnoth Project http://www.wesnoth.org/

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY.

	See the COPYING file for more details.
*/
#include "umcd/protocol/core/close_on_error.hpp"
#include <cassert>

namespace umcd{
namespace core{

void close_on_error(const boost::shared_ptr<boost::asio::ip::tcp::socket> &socket, const boost::system::error_code& error)
{
	assert(static_cast<bool>(error));
	assert(static_cast<bool>(socket));
	
	typedef boost::asio::ip::tcp::socket socket_type;
	boost::system::error_code unused_error;
	socket->shutdown(socket_type::shutdown_both, unused_error);
	socket->close(unused_error);
}
}} // namespace umcd::core
