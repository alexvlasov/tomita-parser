#pragma once

#include "defaults.h"

namespace NSystemInfo {
    size_t NumberOfCpus();
    size_t CachedNumberOfCpus();
    size_t LoadAverage(double* la, size_t len);
    size_t GetPageSize() throw ();
}
