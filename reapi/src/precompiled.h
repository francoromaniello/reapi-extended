#pragma once

// C
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>			// for strncpy(), etc

// C++
#include <vector>				// std::vector

// platform defs
#include "platform.h"

// cssdk
#include <extdll.h>
#include <eiface.h>

// rewrite on own custom preprocessor definitions INDEXENT and ENTINDEX from cbase.h
#include "type_conversion.h"

#include <pm_defs.h>
#include <pm_movevars.h>
#include <com_progdefs.h>

// metamod SDK
#include <meta_api.h>

// regamedll API
#include <regamedll_api.h>
#include "mod_regamedll_api.h"
#include <mapinfo.h>
#include <studio.h>

// rehlds API
#include <rehlds_api.h>
#include "mod_rehlds_api.h"

// AmxModX API
#include "amxxmodule.h"

#include "info.h"
#include "com_client.h"

// reapi main
#include "main.h"
#include "api_config.h"
#include "hook_manager.h"
#include "hook_callback.h"
#include "entity_callback.h"
#include "member_list.h"

// natives
#include "natives_hookchains.h"
#include "natives_helper.h"

#include "reapi_utils.h"
