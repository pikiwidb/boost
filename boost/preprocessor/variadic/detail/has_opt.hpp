/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#/* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
#/* See http://www.boost.org for most recent version. */
#
#ifndef BOOST_PREPROCESSOR_VARIADIC_DETAIL_HAS_OPT_HPP
#define BOOST_PREPROCESSOR_VARIADIC_DETAIL_HAS_OPT_HPP
#
#include <boost/preprocessor/config/config.hpp>
#
#if defined(__cplusplus) && __cplusplus > 201703L
#
#if BOOST_PP_VARIADICS_MSVC
#include <boost/preprocessor/cat.hpp>
#endif
#
#define BOOST_PP_VARIADIC_HAS_OPT_FUNCTION(...) __VA_OPT__(, ), 1, 0 /**/
#
#if BOOST_PP_VARIADICS_MSVC
#define BOOST_PP_VARIADIC_HAS_OPT_ELEM0(e0, ...)                               \
  BOOST_PP_CAT(BOOST_PP_VARIADIC_HAS_OPT_ELEM_0(e0, __VA_ARGS__), )
#define BOOST_PP_VARIADIC_HAS_OPT_ELEM2(e0, ...)                               \
  BOOST_PP_CAT(BOOST_PP_VARIADIC_HAS_OPT_ELEM_2(e0, __VA_ARGS__), )
#else
#define BOOST_PP_VARIADIC_HAS_OPT_ELEM0(e0, ...)                               \
  BOOST_PP_VARIADIC_HAS_OPT_ELEM_0(e0, __VA_ARGS__)
#define BOOST_PP_VARIADIC_HAS_OPT_ELEM2(e0, ...)                               \
  BOOST_PP_VARIADIC_HAS_OPT_ELEM_2(e0, __VA_ARGS__)
#endif
#define BOOST_PP_VARIADIC_HAS_OPT_ELEM_0(e0, ...) e0
#define BOOST_PP_VARIADIC_HAS_OPT_ELEM_2(e0, e1, e2, ...) e2
#
#endif
#
#endif
