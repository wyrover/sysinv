#include "stdafx.h"
#include "common.h"
#include "node.h"
#include "smbios.h"

PNODE EnumSmbiosTables();
PNODE EnumPackages();
PNODE EnumProcessors();
PNODE EnumDisks();
PNODE EnumVolumes();
PNODE EnumClusterServices();

PNODE GetAgentDetail();
PNODE GetSystemDetail();
PNODE GetOperatingSystemDetail();

PNODE GetVirtualizationDetail();

// SMBIOS functions
PNODE GetSmbiosDetail();
PNODE GetBiosDetail();
PNODE EnumBaseboards();
PNODE EnumChassis();
PNODE EnumMemorySockets();
PNODE EnumProcSockets();
PNODE EnumOemStrings();