#pragma once

#if _WIN64
#define IntPtrSize 8
#define EnumSize 4
#else
#define IntPtrSize 4
#define EnumSize 4
#endif