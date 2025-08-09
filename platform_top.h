#ifndef PLATFORM_TOP_H
#define PLATFORM_TOP_H

#include "chi_common.h"
#include "accelerator.h"
#include "chi_interconnect.h"
#include "cpu_core.h"


class PlatformTop : public sc_module
{
public:
    // Constructor
    PlatformTop(sc_module_name name)
        : sc_module(name)
    {
    }

    // Destructor
    ~PlatformTop() {}

private:
    chi_interconnect *  m_pCHIInterconnect;         // Interconnect instance
    Accelerator *       m_pAccelerator;             // Accelerator instance
    cpu_core *          m_pCpuCore_0;                 // CPU Core 0 instance
    cpu_core *          m_pCpuCore_1;                 // CPU Core 1 instance
    cpu_core *          m_pCpuCore_2;                 // CPU Core 2 instance
};

#endif // PLATFORM_TOP_H