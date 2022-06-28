#ifndef LARGE_PMP_TB_HPP
#define LARGE_PMP_TB_HPP

#include <omp.h>
#include "instance.hpp"
#include "solution_std.hpp"
#include "solution_cap.hpp"

using namespace std;

class TB {
protected:
    shared_ptr<Instance> instance;
    default_random_engine engine;
    int seed;
public:
    explicit TB(shared_ptr<Instance> instance, uint_t seed);
    Solution_std initRandomSolution();
    Solution_cap initRandomCapSolution();
    Solution_cap initHighestCapSolution();

    Solution_std run(bool verbose);
    Solution_cap run_cap(bool verbose);

};


#endif //LARGE_PMP_TB_HPP
