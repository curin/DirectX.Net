#pragma once

#include "ID3D12Device4.h"
#include "ID3D12LifetimeOwner.h"
#include "D3D12_META_COMMAND_DESC.h"
#include "D3D12_META_COMMAND_PARAMETER_STAGE.h"
#include "D3D12_META_COMMAND_PARAMETER_DESC.h"
#include "D3D12_STATE_OBJECT_DESC.h"
#include "D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS.h"
#include "D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO.h"
#include "D3D12_SERIALIZED_DATA_TYPE.h"
#include "D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER.h"
#include "D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectX
{
    namespace D3D12
    {
        public ref class ID3D12Device5 : public ID3D12Device4
        {
            ::ID3D12Device5* _ref;
        public:
            ID3D12Device5(IntPtr pointer) : ID3D12Device4(pointer) { _ref = (::ID3D12Device5*)pointer.ToPointer(); }
            ID3D12Device5(void* pointer) : ID3D12Device4(pointer) { _ref = (::ID3D12Device5*)pointer; }

            long CreateLifetimeTracker(ID3D12LifetimeOwner^ pOwner, Guid riid, [Out] IntPtr% ppvTracker)
            {
                void** ppOut;

                long ret = _ref->CreateLifetimeTracker((::ID3D12LifetimeOwner*)pOwner->Pointer.ToPointer(), ToGUID(riid), ppOut);

                ppvTracker = IntPtr(*ppOut);
                return ret;
            }

            void RemoveDevice()
            {
                _ref->RemoveDevice();
            }

            long EnumerateMetaCommands(unsigned int% pNumMetaCommands)
            {
                pin_ptr<unsigned int> num = &pNumMetaCommands;
                return _ref->EnumerateMetaCommands(num, nullptr);
            }

            long EnumerateMetaCommands(array<D3D12_META_COMMAND_DESC>^ pDescs)
            {
                unsigned int num = pDescs->Length;
                pin_ptr<D3D12_META_COMMAND_DESC> descs = &pDescs[0];
                return _ref->EnumerateMetaCommands(&num, (::D3D12_META_COMMAND_DESC*)descs);
            }

            long EnumerateMetaCommands(unsigned int% pNumMetaCommands, array<D3D12_META_COMMAND_DESC>^ pDescs)
            {
                pin_ptr<unsigned int> num = &pNumMetaCommands;
                pin_ptr<D3D12_META_COMMAND_DESC> descs = &pDescs[0];
                return _ref->EnumerateMetaCommands(num, (::D3D12_META_COMMAND_DESC*)descs);
            }

            long EnumerateMetaCommandParameters(Guid CommandId, D3D12_META_COMMAND_PARAMETER_STAGE Stage, [Out]  unsigned int% pTotalStructureSizeInBytes,
                unsigned int% pParameterCount, array<D3D12_META_COMMAND_PARAMETER_DESC>^ pParameterDescs)
            {
                pin_ptr<unsigned int> size = &pTotalStructureSizeInBytes;
                pin_ptr<unsigned int> count = &pParameterCount;
                pin_ptr<D3D12_META_COMMAND_PARAMETER_DESC> parameterDescs = &pParameterDescs[0];

                return _ref->EnumerateMetaCommandParameters(ToGUID(CommandId), (::D3D12_META_COMMAND_PARAMETER_STAGE)Stage, size, count, 
                    (::D3D12_META_COMMAND_PARAMETER_DESC*)parameterDescs);
            }

            long EnumerateMetaCommandParameters(Guid CommandId,D3D12_META_COMMAND_PARAMETER_STAGE Stage,
                [Out]  unsigned int% pTotalStructureSizeInBytes, [Out]  unsigned int% pParameterCount)
            {
                pin_ptr<unsigned int> size = &pTotalStructureSizeInBytes;
                pin_ptr<unsigned int> count = &pParameterCount;

                return _ref->EnumerateMetaCommandParameters(ToGUID(CommandId), (::D3D12_META_COMMAND_PARAMETER_STAGE)Stage, size, count, nullptr);
            }

            long EnumerateMetaCommandParameters(Guid CommandId, D3D12_META_COMMAND_PARAMETER_STAGE Stage, unsigned int% pParameterCount,
                array<D3D12_META_COMMAND_PARAMETER_DESC>^ pParameterDescs)
            {
                pin_ptr<unsigned int> count = &pParameterCount;
                pin_ptr<D3D12_META_COMMAND_PARAMETER_DESC> parameterDescs = &pParameterDescs[0];

                return _ref->EnumerateMetaCommandParameters(ToGUID(CommandId), (::D3D12_META_COMMAND_PARAMETER_STAGE)Stage, nullptr, count,
                    (::D3D12_META_COMMAND_PARAMETER_DESC*)parameterDescs);
            }

            long EnumerateMetaCommandParameters(Guid CommandId, D3D12_META_COMMAND_PARAMETER_STAGE Stage, [Out]  unsigned int% pParameterCount)
            {
                pin_ptr<unsigned int> count = &pParameterCount;

                return _ref->EnumerateMetaCommandParameters(ToGUID(CommandId), (::D3D12_META_COMMAND_PARAMETER_STAGE)Stage, nullptr, count, nullptr);
            }

            long CreateMetaCommand(Guid CommandId, unsigned int NodeMask, IntPtr pCreationParametersData, size_t CreationParametersDataSizeInBytes,
                Guid riid, IntPtr% ppMetaCommand)
            {
                void** ppOut;

                long ret = _ref->CreateMetaCommand(ToGUID(CommandId), NodeMask, pCreationParametersData.ToPointer(), CreationParametersDataSizeInBytes, ToGUID(riid), ppOut);

                ppMetaCommand = IntPtr(*ppOut);
                return ret;
            }

            long CreateMetaCommand(Guid CommandId, unsigned int NodeMask, Guid riid, IntPtr% ppMetaCommand)
            {
                void** ppOut;

                long ret = _ref->CreateMetaCommand(ToGUID(CommandId), NodeMask, nullptr, 0, ToGUID(riid), ppOut);

                ppMetaCommand = IntPtr(*ppOut);
                return ret;
            }

            long CreateStateObject(D3D12_STATE_OBJECT_DESC% pDesc, Guid riid, [Out] IntPtr% ppStateObject)
            {
                pin_ptr<D3D12_STATE_OBJECT_DESC> desc = &pDesc;
                void** ppOut;

                long ret = _ref->CreateStateObject((::D3D12_STATE_OBJECT_DESC*)desc, ToGUID(riid), ppOut);

                ppStateObject = IntPtr(*ppOut);
                return ret;
            }

            void GetRaytracingAccelerationStructurePrebuildInfo(D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS% pDesc,
                [Out]  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO% pInfo)
            {
                pin_ptr<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS> desc = &pDesc;
                pin_ptr<D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO> info = &pInfo;

                _ref->GetRaytracingAccelerationStructurePrebuildInfo((::D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS*)desc,
                    (::D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO*)info);
            }

            D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS CheckDriverMatchingIdentifier(D3D12_SERIALIZED_DATA_TYPE SerializedDataType,
                D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER% pIdentifierToCheck)
            {
                pin_ptr<D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER> identifier = &pIdentifierToCheck;
                return (D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS)_ref->CheckDriverMatchingIdentifier((::D3D12_SERIALIZED_DATA_TYPE)SerializedDataType,
                    (::D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER*)identifier);
            }

            GUID getGUID() override
            {
                return DirectX::D3D12::GetGUID<::ID3D12Device5>((_ref));
            }

            static GUID GetGUID()
            {
                return __uuidof(::ID3D12Device5);
            }

            static Guid GetGuid()
            {
                return FromGUID(GetGUID());
            }

            explicit operator ::ID3D12Device5* () { return (_ref); }
        };
    }
}