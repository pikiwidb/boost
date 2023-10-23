/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#/* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
#/* See http://www.boost.org for most recent version. */
#
#ifndef BOOST_PREPROCESSOR_FACILITIES_CHECK_EMPTY_HPP
#define BOOST_PREPROCESSOR_FACILITIES_CHECK_EMPTY_HPP
#include <boost/preprocessor/variadic/has_opt.hpp>
#if BOOST_PP_VARIADIC_HAS_OPT()
#include <boost/preprocessor/facilities/is_empty_variadic.hpp>
#define BOOST_PP_CHECK_EMPTY(...) BOOST_PP_IS_EMPTY_OPT(__VA_ARGS__)
#endif /* BOOST_PP_VARIADIC_HAS_OPT() */
#endif /* BOOST_PREPROCESSOR_FACILITIES_CHECK_EMPTY_HPP */
