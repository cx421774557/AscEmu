# Copyright (C) 2014-2017 AscEmu Team <http://www.ascemu.org>

set(PATH_PREFIX Kalimdor/RagefireChasm)

set(SRC_KALIMDOR_RAGEFIRECHASM_FILES
   ${PATH_PREFIX}/RagefireChasm.cpp
   ${PATH_PREFIX}/RagefireChasm.h
)

source_group(Kalimdor\\RagefireChasm FILES ${SRC_KALIMDOR_RAGEFIRECHASM_FILES})
unset(PATH_PREFIX)
