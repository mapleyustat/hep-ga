#ifndef HEP_SUM_HPP
#define HEP_SUM_HPP

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

#include <hep/expression.hpp>
#include <hep/utils/merge.hpp>

#include <type_traits>

namespace hep
{

/**
 * 
 */
template <typename L, typename R>
class sum : public expression<typename L::algebra,
	typename merge<typename L::list, typename R::list>::type>
{
	static_assert (std::is_same<typename L::algebra, typename
		R::algebra>::value,
		"sum of multi-vectors from different algebras requested");

public:
	/**
	 * 
	 */
	sum(L const& lhs, R const& rhs);

	/**
	 * 
	 */
	template <int index>
	typename L::algebra::scalar_type at() const;

private:
	/**
	 * 
	 */
	template <int index>
	typename L::algebra::scalar_type lhs_at(std::true_type) const;

	/**
	 * 
	 */
	template <int index>
	typename L::algebra::scalar_type lhs_at(std::false_type) const;

	/**
	 * 
	 */
	template <int index>
	typename L::algebra::scalar_type rhs_at(std::true_type) const;

	/**
	 * 
	 */
	template <int index>
	typename L::algebra::scalar_type rhs_at(std::false_type) const;

	/**
	 * Left-hand side expression.
	 */
	L const& lhs;

	/**
	 * Right-hand side expression.
	 */
	R const& rhs;
};

/**
 * Addition operator returning an expression object for the sum of expressions
 * \c lhs and \c rhs.
 */
template <typename L, typename R>
sum<L, R> operator+(L const& lhs, R const& rhs);

}

#include <hep/impl/sum.hpp>

#endif