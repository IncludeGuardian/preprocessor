# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.  Permission to copy, use,        *
#  *     modify, sell, and distribute this software is granted provided       *
#  *     this copyright notice appears in all copies.  This software is       *
#  *     provided "as is" without express or implied warranty, and with       *
#  *     no claim at to its suitability for any purpose.                      *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_SET_FIRST_N_HPP
# define BOOST_PREPROCESSOR_SET_FIRST_N_HPP
#
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/control/if.hpp>
# include <boost/preprocessor/set/detail/split.hpp>
# include <boost/preprocessor/tuple/eat.hpp>
# include <boost/preprocessor/tuple/elem.hpp>
#
# /* BOOST_PP_SET_FIRST_N */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_SET_FIRST_N(n, set) BOOST_PP_IF(n, BOOST_PP_TUPLE_ELEM, BOOST_PP_TUPLE_EAT_3)(2, 0, BOOST_PP_SET_SPLIT(n, set))
# else
#    define BOOST_PP_SET_FIRST_N(n, set) BOOST_PP_SET_FIRST_N_I(n, set)
#    define BOOST_PP_SET_FIRST_N_I(n, set) BOOST_PP_IF(n, BOOST_PP_TUPLE_ELEM, BOOST_PP_TUPLE_EAT_3)(2, 0, BOOST_PP_SET_SPLIT(n, set))
# endif
#
# endif
