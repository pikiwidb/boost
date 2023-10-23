/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#/* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
#/* See http://www.boost.org for most recent version. */
#
#ifndef BOOST_PREPROCESSOR_DETAIL_IS_BINARY_HPP
#define BOOST_PREPROCESSOR_DETAIL_IS_BINARY_HPP
#
#include <boost/preprocessor/config/config.hpp>
#include <boost/preprocessor/detail/check.hpp>
#
#/* BOOST_PP_IS_BINARY */
#
#if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#define BOOST_PP_IS_BINARY(x) BOOST_PP_CHECK(x, BOOST_PP_IS_BINARY_CHECK)
#else
#define BOOST_PP_IS_BINARY(x) BOOST_PP_IS_BINARY_I(x)
#define BOOST_PP_IS_BINARY_I(x) BOOST_PP_CHECK(x, BOOST_PP_IS_BINARY_CHECK)
#endif
#
#define BOOST_PP_IS_BINARY_CHECK(a, b) 1
#define BOOST_PP_CHECK_RESULT_BOOST_PP_IS_BINARY_CHECK 0, BOOST_PP_NIL
#
#endif
