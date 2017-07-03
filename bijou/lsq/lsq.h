#ifndef LSQ_H
#define LSQ_H

#include <Eigen/Dense>

class LSQ {
    public:
        LSQ(const Eigen::MatrixXf& A, const Eigen::VectorXf& b);
        Eigen::VectorXf solve();
    private:
        Eigen::MatrixXf A;
        Eigen::VectorXf b;
};

#endif //LSQ_H
