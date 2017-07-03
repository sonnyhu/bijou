#include <iostream>
#include <Eigen/Dense>
#include "lsq.h"


int main() {
    Eigen::MatrixXf A = Eigen::MatrixXf::Random(3,3);
    Eigen::VectorXf b = Eigen::VectorXf::Random(3);
    LSQ* lsq = new LSQ(A, b);
    Eigen::VectorXf x = lsq->solve();
    std::cout << x << std::endl;
}
