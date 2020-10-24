#pragma once

//----------------------------------------------------------------------------
// D3DCOMPILE flags:
// -----------------
// D3DCOMPILE_DEBUG
//   Insert debug file/line/type/symbol information.
//
// D3DCOMPILE_SKIP_VALIDATION
//   Do not validate the generated code against known capabilities and
//   constraints.  This option is only recommended when compiling shaders
//   you KNOW will work.  (ie. have compiled before without this option.)
//   Shaders are always validated by D3D before they are set to the device.
//
// D3DCOMPILE_SKIP_OPTIMIZATION 
//   Instructs the compiler to skip optimization steps during code generation.
//   Unless you are trying to isolate a problem in your code using this option 
//   is not recommended.
//
// D3DCOMPILE_PACK_MATRIX_ROW_MAJOR
//   Unless explicitly specified, matrices will be packed in row-major order
//   on input and output from the shader.
//
// D3DCOMPILE_PACK_MATRIX_COLUMN_MAJOR
//   Unless explicitly specified, matrices will be packed in column-major 
//   order on input and output from the shader.  This is generally more 
//   efficient, since it allows vector-matrix multiplication to be performed
//   using a series of dot-products.
//
// D3DCOMPILE_PARTIAL_PRECISION
//   Force all computations in resulting shader to occur at partial precision.
//   This may result in faster evaluation of shaders on some hardware.
//
// D3DCOMPILE_FORCE_VS_SOFTWARE_NO_OPT
//   Force compiler to compile against the next highest available software
//   target for vertex shaders.  This flag also turns optimizations off, 
//   and debugging on.  
//
// D3DCOMPILE_FORCE_PS_SOFTWARE_NO_OPT
//   Force compiler to compile against the next highest available software
//   target for pixel shaders.  This flag also turns optimizations off, 
//   and debugging on.
//
// D3DCOMPILE_NO_PRESHADER
//   Disables Preshaders. Using this flag will cause the compiler to not 
//   pull out static expression for evaluation on the host cpu
//
// D3DCOMPILE_AVOID_FLOW_CONTROL
//   Hint compiler to avoid flow-control constructs where possible.
//
// D3DCOMPILE_PREFER_FLOW_CONTROL
//   Hint compiler to prefer flow-control constructs where possible.
//
// D3DCOMPILE_ENABLE_STRICTNESS
//   By default, the HLSL/Effect compilers are not strict on deprecated syntax.
//   Specifying this flag enables the strict mode. Deprecated syntax may be
//   removed in a future release, and enabling syntax is a good way to make
//   sure your shaders comply to the latest spec.
//
// D3DCOMPILE_ENABLE_BACKWARDS_COMPATIBILITY
//   This enables older shaders to compile to 4_0 targets.
//
// D3DCOMPILE_DEBUG_NAME_FOR_SOURCE
//   This enables a debug name to be generated based on source information.
//   It requires D3DCOMPILE_DEBUG to be set, and is exclusive with
//   D3DCOMPILE_DEBUG_NAME_FOR_BINARY.
//
// D3DCOMPILE_DEBUG_NAME_FOR_BINARY
//   This enables a debug name to be generated based on compiled information.
//   It requires D3DCOMPILE_DEBUG to be set, and is exclusive with
//   D3DCOMPILE_DEBUG_NAME_FOR_SOURCE.
//
//----------------------------------------------------------------------------

#undef D3DCOMPILE_DEBUG                                
#undef D3DCOMPILE_SKIP_VALIDATION                      
#undef D3DCOMPILE_SKIP_OPTIMIZATION                    
#undef D3DCOMPILE_PACK_MATRIX_ROW_MAJOR                
#undef D3DCOMPILE_PACK_MATRIX_COLUMN_MAJOR             
#undef D3DCOMPILE_PARTIAL_PRECISION                    
#undef D3DCOMPILE_FORCE_VS_SOFTWARE_NO_OPT             
#undef D3DCOMPILE_FORCE_PS_SOFTWARE_NO_OPT             
#undef D3DCOMPILE_NO_PRESHADER                         
#undef D3DCOMPILE_AVOID_FLOW_CONTROL                   
#undef D3DCOMPILE_PREFER_FLOW_CONTROL                  
#undef D3DCOMPILE_ENABLE_STRICTNESS                    
#undef D3DCOMPILE_ENABLE_BACKWARDS_COMPATIBILITY       
#undef D3DCOMPILE_IEEE_STRICTNESS                      
#undef D3DCOMPILE_OPTIMIZATION_LEVEL0                  
#undef D3DCOMPILE_OPTIMIZATION_LEVEL1                  
#undef D3DCOMPILE_OPTIMIZATION_LEVEL2                  
#undef D3DCOMPILE_OPTIMIZATION_LEVEL3                  
#undef D3DCOMPILE_RESERVED16                           
#undef D3DCOMPILE_RESERVED17                           
#undef D3DCOMPILE_WARNINGS_ARE_ERRORS                  
#undef D3DCOMPILE_RESOURCES_MAY_ALIAS                  
#undef D3DCOMPILE_ENABLE_UNBOUNDED_DESCRIPTOR_TABLES   
#undef D3DCOMPILE_ALL_RESOURCES_BOUND                  
#undef D3DCOMPILE_DEBUG_NAME_FOR_SOURCE                
#undef D3DCOMPILE_DEBUG_NAME_FOR_BINARY                

namespace DirectX
{
    public enum class D3DCOMPILE_FLAGS
    {
        D3DCOMPILE_DEBUG = (1 << 0),
        D3DCOMPILE_SKIP_VALIDATION = (1 << 1),
        D3DCOMPILE_SKIP_OPTIMIZATION = (1 << 2),
        D3DCOMPILE_PACK_MATRIX_ROW_MAJOR = (1 << 3),
        D3DCOMPILE_PACK_MATRIX_COLUMN_MAJOR = (1 << 4),
        D3DCOMPILE_PARTIAL_PRECISION = (1 << 5),
        D3DCOMPILE_FORCE_VS_SOFTWARE_NO_OPT = (1 << 6),
        D3DCOMPILE_FORCE_PS_SOFTWARE_NO_OPT = (1 << 7),
        D3DCOMPILE_NO_PRESHADER = (1 << 8),
        D3DCOMPILE_AVOID_FLOW_CONTROL = (1 << 9),
        D3DCOMPILE_PREFER_FLOW_CONTROL = (1 << 10),
        D3DCOMPILE_ENABLE_STRICTNESS = (1 << 11),
        D3DCOMPILE_ENABLE_BACKWARDS_COMPATIBILITY = (1 << 12),
        D3DCOMPILE_IEEE_STRICTNESS = (1 << 13),
        D3DCOMPILE_OPTIMIZATION_LEVEL0 = (1 << 14),
        D3DCOMPILE_OPTIMIZATION_LEVEL1 = 0,
        D3DCOMPILE_OPTIMIZATION_LEVEL2 = ((1 << 14) | (1 << 15)),
        D3DCOMPILE_OPTIMIZATION_LEVEL3 = (1 << 15),
        D3DCOMPILE_RESERVED16 = (1 << 16),
        D3DCOMPILE_RESERVED17 = (1 << 17),
        D3DCOMPILE_WARNINGS_ARE_ERRORS = (1 << 18),
        D3DCOMPILE_RESOURCES_MAY_ALIAS = (1 << 19),
        D3DCOMPILE_ENABLE_UNBOUNDED_DESCRIPTOR_TABLES = (1 << 20),
        D3DCOMPILE_ALL_RESOURCES_BOUND = (1 << 21),
        D3DCOMPILE_DEBUG_NAME_FOR_SOURCE = (1 << 22),
        D3DCOMPILE_DEBUG_NAME_FOR_BINARY = (1 << 23)
    };
}