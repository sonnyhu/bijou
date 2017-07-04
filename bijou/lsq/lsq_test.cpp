#include <Eigen/Dense>
#include "gtest/gtest.h"
#include "lsq.h"


TEST(LSQ, TestRunnable){
    Eigen::Matrix2f A;
    A << 1, 2, 2, 1;
    Eigen::Vector2f b;
    b << 5, 4;
    Eigen::Vector2f expected;
    expected << 1, 2;
    LSQ* lsq = new LSQ(A, b);
    Eigen::Vector2f x = lsq->solve();
    EXPECT_TRUE(expected.isApprox(x));
}

