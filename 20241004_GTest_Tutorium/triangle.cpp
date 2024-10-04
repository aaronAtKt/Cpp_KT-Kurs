#include "pch.h"

enum ttype {
	gleichseitig, gleichschenklig, ungleichseitig,
	rechts, stumpf, ungueltig
};

bool isTriangle(int a, int b, int c) {
	return (
			!((a <= 0 || b <= 0 || c <= 0) ||
			  (a+b <= c || b+c <= a || a+c <= b))
			);
}

int triangleType(int a, int b, int c) {
	if (!isTriangle(a, b, c)) return ungueltig;
	if (a == b && b == c)	  return gleichseitig;
	if (!(a == b && b == c))	  return ungleichseitig;
	if (a == b || b == c || a == c) return gleichschenklig;
	if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		return rechts;
	else stumpf;
}


//----------TEST-EBENE-----------------------------------------
TEST(TriangleTest, invaildTriangle) {
	EXPECT_FALSE(isTriangle(0, 0, 1));
	EXPECT_FALSE(isTriangle(0, 0, 0));
	EXPECT_FALSE(isTriangle(3, 4, 0));
	EXPECT_FALSE(isTriangle(30, 4, 1));
	EXPECT_FALSE(isTriangle(-3, 4, 1));
	EXPECT_FALSE(isTriangle(3, -4, 1));
	EXPECT_FALSE(isTriangle(3, 4, -1));
	EXPECT_FALSE(isTriangle(3, 4, 1));
}

TEST(TriangleTest, validTriangle) {
	EXPECT_TRUE(isTriangle(3, 4, 5));
	EXPECT_TRUE(isTriangle(5, 4, 5));
	EXPECT_TRUE(isTriangle(7, 7, 7));
}

TEST(TriangleTest, equilateralTriangle) {
	EXPECT_EQ(triangleType(3, 3, 3), gleichseitig) << "Der Typ 3, 3, 3 ist gleichseitig.";
}

TEST(TriangleTest, scaleneTriangle) {
	EXPECT_NE(triangleType(12, 3, 10), ungleichseitig) << "Der Typ 12, 3, 10 ist ungleichseitig.";
}

TEST(TriangleTest, isoscalesTriangle) {
	EXPECT_EQ(triangleType(2, 3, 3), gleichschenklig) << "Der Typ 2, 3, 3 ist gleichschenklig.";
	EXPECT_EQ(triangleType(4, 4, 3), gleichschenklig) << "Der Typ 4, 4, 3 ist gleichschenklig.";
}

TEST(TriangleTest, rightTriangle) {
	EXPECT_EQ(triangleType(3, 4, 5), rechts) << "Der Typ 3, 4, 5 ist rechtwinklig.";
	EXPECT_EQ(triangleType(4, 5, 3), rechts) << "Der Typ 4, 5, 3 ist rechtwinklig.";
	EXPECT_EQ(triangleType(5, 4, 3), rechts) << "Der Typ 5, 4, 3 ist rechtwinklig.";
}