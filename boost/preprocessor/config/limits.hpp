/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
# /* Revised by Edward Diener (2011,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_CONFIG_LIMITS_HPP
# define BOOST_PREPROCESSOR_CONFIG_LIMITS_HPP
#
# include <boost/preprocessor/config/config.hpp>
#
# if defined(BOOST_PP_LIMIT_DIM)
# undef BOOST_PP_LIMIT_DIM
# endif
# if defined(BOOST_PP_LIMIT_ITERATION_DIM)
# undef BOOST_PP_LIMIT_ITERATION_DIM
# endif
# if defined(BOOST_PP_LIMIT_SLOT_SIG)
# undef BOOST_PP_LIMIT_SLOT_SIG
# endif
# if defined(BOOST_PP_LIMIT_SLOT_COUNT)
# undef BOOST_PP_LIMIT_SLOT_COUNT
# endif
# if defined(BOOST_PP_LIMIT_WHILE)
# undef BOOST_PP_LIMIT_WHILE
# endif
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#
# if defined(BOOST_PP_LIMIT_MAG)
# undef BOOST_PP_LIMIT_MAG
# endif
# if defined(BOOST_PP_LIMIT_VARIADIC)
# undef BOOST_PP_LIMIT_VARIADIC
# endif
# if defined(BOOST_PP_LIMIT_TUPLE)
# undef BOOST_PP_LIMIT_TUPLE
# endif
# if defined(BOOST_PP_LIMIT_FOR)
# undef BOOST_PP_LIMIT_FOR
# endif
# if defined(BOOST_PP_LIMIT_REPEAT)
# undef BOOST_PP_LIMIT_REPEAT
# endif
# if defined(BOOST_PP_LIMIT_SEQ)
# undef BOOST_PP_LIMIT_SEQ
# endif
# if defined(BOOST_PP_LIMIT_ITERATION)
# undef BOOST_PP_LIMIT_ITERATION
# endif
#
# define BOOST_PP_LIMIT_MAG 256
# define BOOST_PP_LIMIT_WHILE 256
# define BOOST_PP_LIMIT_VARIADIC 64
# define BOOST_PP_LIMIT_TUPLE 64
# define BOOST_PP_LIMIT_FOR 256
# define BOOST_PP_LIMIT_SEQ 256
# define BOOST_PP_LIMIT_REPEAT 256
# define BOOST_PP_LIMIT_ITERATION 256
#
#else
#
# if defined(BOOST_PP_LIMIT_MAG)
# if !(BOOST_PP_LIMIT_MAG == 256 || BOOST_PP_LIMIT_MAG == 512 || BOOST_PP_LIMIT_MAG == 1024)
# undef BOOST_PP_LIMIT_MAG
# define BOOST_PP_LIMIT_MAG 256
# define BOOST_PP_LIMIT_WHILE 256
# else
# define BOOST_PP_LIMIT_WHILE BOOST_PP_LIMIT_MAG
# if !defined(BOOST_PP_LIMIT_SEQ)
# define BOOST_PP_LIMIT_SEQ BOOST_PP_LIMIT_MAG
# endif
# endif
# else
# define BOOST_PP_LIMIT_MAG 256
# define BOOST_PP_LIMIT_WHILE 256
# endif
#
# if defined(BOOST_PP_LIMIT_VARIADIC)
# if !(BOOST_PP_LIMIT_VARIADIC == 64 || BOOST_PP_LIMIT_VARIADIC == 128 || BOOST_PP_LIMIT_VARIADIC == 256)
# undef BOOST_PP_LIMIT_VARIADIC
# define BOOST_PP_LIMIT_VARIADIC 64
# endif
# else
# define BOOST_PP_LIMIT_VARIADIC 64
# endif
#
# if defined(BOOST_PP_LIMIT_TUPLE)
# if !(BOOST_PP_LIMIT_TUPLE == 64 || BOOST_PP_LIMIT_TUPLE == 128 || BOOST_PP_LIMIT_TUPLE == 256)
# undef BOOST_PP_LIMIT_TUPLE
# define BOOST_PP_LIMIT_TUPLE 64
# elif BOOST_PP_LIMIT_TUPLE > BOOST_PP_LIMIT_VARIADIC
# undef BOOST_PP_LIMIT_VARIADIC
# define BOOST_PP_LIMIT_VARIADIC BOOST_PP_LIMIT_TUPLE
# endif
# else
# define BOOST_PP_LIMIT_TUPLE 64
# endif
#
# if defined(BOOST_PP_LIMIT_FOR)
# if !(BOOST_PP_LIMIT_FOR == 256 || BOOST_PP_LIMIT_FOR == 512 || BOOST_PP_LIMIT_FOR == 1024)
# undef BOOST_PP_LIMIT_FOR
# define BOOST_PP_LIMIT_FOR 256
# elif BOOST_PP_LIMIT_FOR > BOOST_PP_LIMIT_MAG
# undef BOOST_PP_LIMIT_FOR
# define BOOST_PP_LIMIT_FOR BOOST_PP_LIMIT_MAG
# endif
# else
# define BOOST_PP_LIMIT_FOR 256
# endif
#
# if defined(BOOST_PP_LIMIT_REPEAT)
# if !(BOOST_PP_LIMIT_REPEAT == 256 || BOOST_PP_LIMIT_REPEAT == 512 || BOOST_PP_LIMIT_REPEAT == 1024)
# undef BOOST_PP_LIMIT_REPEAT
# define BOOST_PP_LIMIT_REPEAT 256
# elif BOOST_PP_LIMIT_REPEAT > BOOST_PP_LIMIT_MAG
# undef BOOST_PP_LIMIT_REPEAT
# define BOOST_PP_LIMIT_REPEAT BOOST_PP_LIMIT_MAG
# endif
# else
# define BOOST_PP_LIMIT_REPEAT 256
# endif
#
# if defined(BOOST_PP_LIMIT_SEQ)
# if !(BOOST_PP_LIMIT_SEQ == 256 || BOOST_PP_LIMIT_SEQ == 512 || BOOST_PP_LIMIT_SEQ == 1024)
# undef BOOST_PP_LIMIT_SEQ
# define BOOST_PP_LIMIT_SEQ 256
# elif BOOST_PP_LIMIT_SEQ > BOOST_PP_LIMIT_MAG
# undef BOOST_PP_LIMIT_SEQ
# define BOOST_PP_LIMIT_SEQ BOOST_PP_LIMIT_MAG
# endif
# else
# define BOOST_PP_LIMIT_SEQ 256
# endif
#
# if defined(BOOST_PP_LIMIT_ITERATION)
# if !(BOOST_PP_LIMIT_ITERATION == 256 || BOOST_PP_LIMIT_ITERATION == 512 || BOOST_PP_LIMIT_ITERATION == 1024)
# undef BOOST_PP_LIMIT_ITERATION
# define BOOST_PP_LIMIT_ITERATION 256
# elif BOOST_PP_LIMIT_ITERATION > BOOST_PP_LIMIT_MAG
# undef BOOST_PP_LIMIT_ITERATION
# define BOOST_PP_LIMIT_ITERATION BOOST_PP_LIMIT_MAG
# endif
# else
# define BOOST_PP_LIMIT_ITERATION 256
# endif
#
# endif
#
# define BOOST_PP_LIMIT_DIM 3
# define BOOST_PP_LIMIT_ITERATION_DIM 3
# define BOOST_PP_LIMIT_SLOT_SIG 10
# define BOOST_PP_LIMIT_SLOT_COUNT 5
#
# endif