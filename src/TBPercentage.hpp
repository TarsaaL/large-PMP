#ifndef LARGE_PMP_TBPERCENTAGE_HPP
#define LARGE_PMP_TBPERCENTAGE_HPP

#include <omp.h>
#include "instance.hpp"
#include "solution_std.hpp"
#include "solution_cap.hpp"
#include "TB.hpp"

using namespace std;

class TBPercentage: public TB {

public:
    explicit TBPercentage(shared_ptr<Instance> instance, uint_t seed) : TB(instance, seed){};
    unordered_set<uint_t>* splitLocationsByPercentage(int movingAmount, unordered_set<uint_t> pLocations);

    Solution_std run(bool verbose);
    Solution_cap run_cap(bool verbose);

};


#endif //LARGE_PMP_TBPERCENTAGE_HPP
