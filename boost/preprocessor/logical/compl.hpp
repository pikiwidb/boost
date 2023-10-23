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
#ifndef BOOST_PREPROCESSOR_LOGICAL_COMPL_HPP
#define BOOST_PREPROCESSOR_LOGICAL_COMPL_HPP
#
#include <boost/preprocessor/config/config.hpp>
#
#/* BOOST_PP_COMPL */
#
#if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#define BOOST_PP_COMPL(x) BOOST_PP_COMPL_I(x)
#else
#define BOOST_PP_COMPL(x) BOOST_PP_COMPL_OO((x))
#define BOOST_PP_COMPL_OO(par) BOOST_PP_COMPL_I##par
#endif
#
#if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()
#define BOOST_PP_COMPL_I(x) BOOST_PP_COMPL_##x
#else
#define BOOST_PP_COMPL_I(x) BOOST_PP_COMPL_ID(BOOST_PP_COMPL_##x)
#define BOOST_PP_COMPL_ID(id) id
#endif
#
#define BOOST_PP_COMPL_0 1
#define BOOST_PP_COMPL_1 0
#
#endif
