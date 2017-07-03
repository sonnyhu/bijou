#include <Eigen/Dense>
#include"lsq.h"


LSQ::LSQ(const Eigen::MatrixXf& A, const Eigen::VectorXf& b){
    this->A = A;
    this->b = b;
}

Eigen::VectorXf LSQ::solve(){
    return this->A.jacobiSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(this->b);
}

