#ifndef HEP_GA_NEGATION_HPP
#define HEP_GA_NEGATION_HPP

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

#include <hep/ga/inline.hpp>
#include <hep/ga/unary_expression.hpp>

namespace hep
{

/**
 * \ingroup expressions
 *
 * Expression class for negations.
 *
 * \see operator-(E const&)
 */
template <typename E>
class negation : public unary_expression<E, typename E::list>
{
public:
	/**
	 * Constructs a new expression containing the negative of \c expr.
	 */
	hep_inline negation(E const& expr)
		: unary_expression<E, typename E::list>(expr)
	{
	}

	/**
	 * Performs the computation of the component represented by \c index.
	 */
	template <int index>
	hep_inline typename E::algebra::scalar_type at() const
	{
		return -this->expr.template at<index>();
	}
};

/**
 * \ingroup main
 *
 * Returns the negative of expression \c expr.
 */
template <typename E>
hep_inline negation<E> operator-(E const& expr)
{
	return negation<E>(expr);
}

}

#endif
