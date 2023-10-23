/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#/* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
#/* Revised by Paul Mensonides (2002) */
#
#/* See http://www.boost.org for most recent version. */
#
#ifndef BOOST_PREPROCESSOR_FACILITIES_EXPAND_HPP
#define BOOST_PREPROCESSOR_FACILITIES_EXPAND_HPP
#
#include <boost/preprocessor/config/config.hpp>
#
#if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC() &&                       \
    ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
#define BOOST_PP_EXPAND(x) BOOST_PP_EXPAND_I(x)
#else
#define BOOST_PP_EXPAND(x) BOOST_PP_EXPAND_OO((x))
#define BOOST_PP_EXPAND_OO(par) BOOST_PP_EXPAND_I##par
#endif
#
#define BOOST_PP_EXPAND_I(x) x
#
#endif
