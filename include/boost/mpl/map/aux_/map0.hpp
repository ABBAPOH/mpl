
#ifndef BOOST_MPL_MAP_AUX_MAP0_HPP_INCLUDED
#define BOOST_MPL_MAP_AUX_MAP0_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2003-2004
// Copyright David Abrahams 2003-2004
//
// Use, modification and distribution are subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy 
// at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date$
// $Revision$

#include <boost/mpl/long.hpp>
#include <boost/mpl/void.hpp>
#include <boost/mpl/map/aux_/tag.hpp>
#include <boost/mpl/aux_/type_wrapper.hpp>
#include <boost/mpl/aux_/config/static_constant.hpp>

namespace boost {
namespace mpl {

template< int dummy_ = 0 > struct map0
{
    typedef aux::map_tag    tag;
    typedef void_           key_;
    typedef long_<0>        size;
    
    BOOST_STATIC_CONSTANT(long, order = 1);
};

}}

#endif // BOOST_MPL_MAP_AUX_MAP0_HPP_INCLUDED