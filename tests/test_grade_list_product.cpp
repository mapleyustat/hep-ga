#include <hep/utils/grade_list_product.hpp>

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(grade_list_product_for_g2)
{
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 1, 2), 1);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 2, 2), 2);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 3, 2), 3);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 4, 2), 4);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 5, 2), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 6, 2), 6);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 7, 2), 7);

	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 2, 2), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 3, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 4, 2), 2);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 5, 2), 2);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 6, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 7, 2), 7);

	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 3, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 4, 2), 6);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 5, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 6, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 7, 2), 7);

	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 4, 2), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 5, 2), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 6, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 7, 2), 7);

	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 5, 2), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 6, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 7, 2), 7);

	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 6, 2), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 7, 2), 7);

	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 7, 2), 7);
}

BOOST_AUTO_TEST_CASE(grade_list_product_for_g3)
{
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 1, 3), 1);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 2, 3), 2);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 3, 3), 3);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 4, 3), 4);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 5, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 6, 3), 6);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 7, 3), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 8, 3), 8);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 9, 3), 9);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 10, 3), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 11, 3), 11);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 12, 3), 12);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 13, 3), 13);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 14, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 2, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 3, 3), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 4, 3), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 5, 3), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 6, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 7, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 8, 3), 4);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 9, 3), 6);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 10, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 11, 3), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 12, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 13, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 3, 3), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 4, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 5, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 6, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 7, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 8, 3), 12);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 9, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 10, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 11, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 12, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 4, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 5, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 6, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 7, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 8, 3), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 9, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 10, 3), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 11, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 5, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 6, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 7, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 8, 3), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 9, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 10, 3), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 11, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 6, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 7, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 8, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 9, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 10, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 11, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 7, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 8, 3), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 9, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 10, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 11, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 8, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 9, 3), 13);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 10, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 11, 3), 13);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 9, 3), 13);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 10, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 11, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 10, 3), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 11, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 11, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 12, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 13, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 14, 3), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 15, 3), 15);

	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 15, 3), 15);
}

BOOST_AUTO_TEST_CASE(grade_list_product_for_g4)
{
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 1, 4), 1);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 2, 4), 2);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 3, 4), 3);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 4, 4), 4);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 5, 4), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 6, 4), 6);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 7, 4), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 8, 4), 8);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 9, 4), 9);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 10, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 11, 4), 11);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 12, 4), 12);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 13, 4), 13);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 14, 4), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 15, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 16, 4), 16);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 17, 4), 17);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 18, 4), 18);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 19, 4), 19);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 20, 4), 20);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 21, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 22, 4), 22);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 23, 4), 23);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 24, 4), 24);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 25, 4), 25);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 26, 4), 26);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 27, 4), 27);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 28, 4), 28);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 29, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 30, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(1, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 2, 4), 5);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 3, 4), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 4, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 5, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 6, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 7, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 8, 4), 20);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 9, 4), 22);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 10, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 11, 4), 23);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 12, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 13, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 16, 4), 8);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 17, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 18, 4), 13);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 19, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 20, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 21, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 22, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 23, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 24, 4), 28);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 25, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 26, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 28, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 29, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(2, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 3, 4), 7);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 4, 4), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 5, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 6, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 7, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 8, 4), 28);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 9, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 10, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 11, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 12, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 16, 4), 24);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 17, 4), 27);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 20, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 24, 4), 28);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 28, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(3, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 4, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 5, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 6, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 7, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 8, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 9, 4), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 10, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 11, 4), 14);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 16, 4), 20);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 17, 4), 20);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 18, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 19, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 20, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 21, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 24, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 25, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 26, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 27, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(4, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 5, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 6, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 7, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 8, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 9, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 10, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 11, 4), 15);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 16, 4), 20);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 17, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 18, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 20, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 21, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 24, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 26, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(5, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 6, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 7, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 8, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 9, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 10, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 11, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 16, 4), 28);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 17, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 24, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 25, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(6, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 7, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 8, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 9, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 10, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 11, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 16, 4), 28);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 17, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 24, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(7, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 8, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 9, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 10, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 11, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 16, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 17, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 18, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 19, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 20, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 21, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 22, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 23, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(8, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 9, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 10, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 11, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 16, 4), 26);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 17, 4), 27);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 18, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 20, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 22, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(9, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 10, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 11, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 16, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 17, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 20, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 21, 4), 10);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(10, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 11, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 16, 4), 26);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 17, 4), 27);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 20, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(11, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 12, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 16, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 17, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 18, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 19, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(12, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 13, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 16, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 17, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 18, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(13, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 14, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 16, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 17, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(14, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 15, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 16, 4), 30);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 17, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(15, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 16, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 17, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 18, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 19, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 20, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 21, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 22, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 23, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(16, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 17, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 18, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 20, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 21, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(17, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 18, 4), 29);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(18, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 19, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 20, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 21, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(19, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 20, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 21, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(20, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 21, 4), 21);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(21, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 22, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(22, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 23, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(23, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 24, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(24, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(25, 25, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(25, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(25, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(25, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(25, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(25, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(25, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(26, 26, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(26, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(26, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(26, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(26, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(26, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(27, 27, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(27, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(27, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(27, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(27, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(28, 28, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(28, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(28, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(28, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(29, 29, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(29, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(29, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(30, 30, 4), 31);
	BOOST_CHECK_EQUAL(hep::grade_list_product(30, 31, 4), 31);

	BOOST_CHECK_EQUAL(hep::grade_list_product(31, 31, 4), 31);
}
