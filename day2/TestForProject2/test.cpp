//#include "pch.h"
#include <gtest/gtest.h>
#include "../Project2/cal.cpp" // ���� ���� �ٿ��ֱ�

TEST(TestCaseName, TestName) {
	//build
	Cal cal;

	//operate
	int ret = cal.getSum(1, 2);

	// check
	EXPECT_EQ(3, ret);
}

TEST(TestCaseName, TestName2) {
	Cal cal;
	int ret = cal.getSum(44, 22);
	EXPECT_EQ(66, ret);
}
