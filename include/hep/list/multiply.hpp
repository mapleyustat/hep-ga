#ifndef HEP_LIST_MULTIPLY_HPP
#define HEP_LIST_MULTIPLY_HPP

/*
 * hep-ga - An Efficient Numeric Template Library for Geometric Algebra
 * Copyright (C) 2012  Christopher Schwan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <hep/list/list.hpp>
#include <hep/list/merge.hpp>

#include <type_traits>

namespace hep
{

/**
 * \addtogroup list
 * @{
 */

/**
 * Performs bitwise multiplication of the elements of two list \c L and \c R.
 * The result is sorted in ascending order and does not contain duplicates.
 * Example:
 * \code
 * typedef hep::list<1, 2, 4, 8> vectors;
 *
 * typedef multiply<vectors, vectors>::type result;
 * \endcode
 * The result is identical to the following definition:
 * \code
 * typedef hep::list<0, 3, 5, 6, 9, 10, 12> result;
 * \endcode
 */
template <typename L, typename R, typename P>
struct multiply
{
	/**
	 * The result of this operation.
	 */
	typedef typename merge<
		typename merge<
			typename std::conditional<
				P::check(L::value, R::value),
				list<L::value ^ R::value>,
				list<>
			>::type,
			typename multiply<typename L::next, R, P>::type
		>::type,
		typename multiply<L, typename R::next, P>::type
	>::type type;
};

/// \cond DOXYGEN_IGNORE
template <typename R, typename P>
struct multiply<list<>, R, P>
{
	typedef list<> type;
};

template <typename L, typename P>
struct multiply<L, list<>, P>
{
	typedef list<> type;
};
/// \endcond

/**
 * @}
 */

}

#endif
