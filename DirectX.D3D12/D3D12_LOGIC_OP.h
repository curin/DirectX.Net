#pragma once

namespace DirectX
{
    namespace D3D12
    {
        public enum D3D12_LOGIC_OP
        {
            D3D12_LOGIC_OP_CLEAR = 0,
            D3D12_LOGIC_OP_SET = (D3D12_LOGIC_OP_CLEAR + 1),
            D3D12_LOGIC_OP_COPY = (D3D12_LOGIC_OP_SET + 1),
            D3D12_LOGIC_OP_COPY_INVERTED = (D3D12_LOGIC_OP_COPY + 1),
            D3D12_LOGIC_OP_NOOP = (D3D12_LOGIC_OP_COPY_INVERTED + 1),
            D3D12_LOGIC_OP_INVERT = (D3D12_LOGIC_OP_NOOP + 1),
            D3D12_LOGIC_OP_AND = (D3D12_LOGIC_OP_INVERT + 1),
            D3D12_LOGIC_OP_NAND = (D3D12_LOGIC_OP_AND + 1),
            D3D12_LOGIC_OP_OR = (D3D12_LOGIC_OP_NAND + 1),
            D3D12_LOGIC_OP_NOR = (D3D12_LOGIC_OP_OR + 1),
            D3D12_LOGIC_OP_XOR = (D3D12_LOGIC_OP_NOR + 1),
            D3D12_LOGIC_OP_EQUIV = (D3D12_LOGIC_OP_XOR + 1),
            D3D12_LOGIC_OP_AND_REVERSE = (D3D12_LOGIC_OP_EQUIV + 1),
            D3D12_LOGIC_OP_AND_INVERTED = (D3D12_LOGIC_OP_AND_REVERSE + 1),
            D3D12_LOGIC_OP_OR_REVERSE = (D3D12_LOGIC_OP_AND_INVERTED + 1),
            D3D12_LOGIC_OP_OR_INVERTED = (D3D12_LOGIC_OP_OR_REVERSE + 1)
        };
    }
}