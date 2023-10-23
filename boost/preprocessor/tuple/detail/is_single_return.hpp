/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#/* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
#/* See http://www.boost.org for most recent version. */
#
#ifndef BOOST_PREPROCESSOR_TUPLE_DETAIL_IS_SINGLE_RETURN_HPP
#define BOOST_PREPROCESSOR_TUPLE_DETAIL_IS_SINGLE_RETURN_HPP
#
#include <boost/preprocessor/config/config.hpp>
#
#/* BOOST_PP_TUPLE_IS_SINGLE_RETURN */
#
#if BOOST_PP_VARIADICS_MSVC
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/is_1.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#define BOOST_PP_TUPLE_IS_SINGLE_RETURN(sr, nsr, tuple)                        \
  BOOST_PP_IIF(BOOST_PP_IS_1(BOOST_PP_TUPLE_SIZE(tuple)), sr, nsr)             \
  /**/
#endif /* BOOST_PP_VARIADICS_MSVC */
#
#endif /* BOOST_PREPROCESSOR_TUPLE_DETAIL_IS_SINGLE_RETURN_HPP */
