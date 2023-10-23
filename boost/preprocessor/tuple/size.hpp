/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_TUPLE_SIZE_HPP
# define BOOST_PREPROCESSOR_TUPLE_SIZE_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/control/if.hpp>
# include <boost/preprocessor/variadic/has_opt.hpp>
# include <boost/preprocessor/variadic/size.hpp>
#
# if BOOST_PP_VARIADIC_HAS_OPT()
#     if BOOST_PP_VARIADICS_MSVC
#         define BOOST_PP_TUPLE_SIZE(tuple) BOOST_PP_TUPLE_SIZE_CHECK(BOOST_PP_CAT(BOOST_PP_VARIADIC_SIZE tuple,))
#     else
#         define BOOST_PP_TUPLE_SIZE(tuple) BOOST_PP_TUPLE_SIZE_CHECK(BOOST_PP_VARIADIC_SIZE tuple)
#     endif
#     define BOOST_PP_TUPLE_SIZE_CHECK(size) BOOST_PP_IF(size,size,1)
# elif BOOST_PP_VARIADICS_MSVC
#     define BOOST_PP_TUPLE_SIZE(tuple) BOOST_PP_CAT(BOOST_PP_VARIADIC_SIZE tuple,)
# else
#     define BOOST_PP_TUPLE_SIZE(tuple) BOOST_PP_VARIADIC_SIZE tuple
# endif
#
# endif
