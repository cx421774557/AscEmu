# Copyright (C) 2014-2017 AscEmu Team <http://www.ascemu.org>

set(PATH_PREFIX Northrend/Ulduar/HallsOfLightning)

set(SRC_NORTHREND_UL_HALLSOFLIGHTNING_FILES
   ${PATH_PREFIX}/HallsOfLightning.cpp
   ${PATH_PREFIX}/HallsOfLightning.h
)

source_group(Northrend\\Ulduar\\HallsOfLightning FILES ${SRC_NORTHREND_UL_HALLSOFLIGHTNING_FILES})
unset(PATH_PREFIX)
