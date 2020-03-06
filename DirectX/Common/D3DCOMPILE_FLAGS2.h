#pragma once

//----------------------------------------------------------------------------
// D3DCOMPILE Flags2:
// -----------------
// Root signature flags. (passed in Flags2)

#undef D3DCOMPILE_FLAGS2_FORCE_ROOT_SIGNATURE_LATEST	
#undef D3DCOMPILE_FLAGS2_FORCE_ROOT_SIGNATURE_1_0		
#undef D3DCOMPILE_FLAGS2_FORCE_ROOT_SIGNATURE_1_1		

namespace DirectX
{
    public enum D3DCOMPILE_FLAGS2
    {
        D3DCOMPILE_FLAGS2_FORCE_ROOT_SIGNATURE_LATEST = 0,
        D3DCOMPILE_FLAGS2_FORCE_ROOT_SIGNATURE_1_0 = (1 << 4),
        D3DCOMPILE_FLAGS2_FORCE_ROOT_SIGNATURE_1_1 = (1 << 5)
    };
}