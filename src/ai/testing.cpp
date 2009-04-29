/* $Id$ */
/*
   Copyright (C) 2009 by Yurii Chernyi <terraninfo@terraninfo.net>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 2
   or at your option any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

/**
 * Gather statistics important for AI testing and output them
 * @file ai/testing.cpp
 */
#include "testing.hpp"
#include "../log.hpp"

static lg::log_domain log_ai_testing("ai/testing");
#define DBG_AI_TESTING LOG_STREAM(debug, log_ai_testing)
#define LOG_AI_TESTING LOG_STREAM(info, log_ai_testing)
#define ERR_AI_TESTING LOG_STREAM(err, log_ai_testing)

void ai_testing::log_turn_start()
{
}

void ai_testing::log_draw()
{
}

void ai_testing::log_victory()
{
}

void ai_testing::log_unknown_error_while_playing_level()
{
}
