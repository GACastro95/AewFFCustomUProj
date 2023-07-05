// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PReceivedPacketBuffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PReceivedPacketBuffer() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
// End Cross Module References
class UScriptStruct* FEOSNatP2PReceivedPacketBuffer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSNatP2PReceivedPacketBuffer"), sizeof(FEOSNatP2PReceivedPacketBuffer), Get_Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSNatP2PReceivedPacketBuffer>()
{
	return FEOSNatP2PReceivedPacketBuffer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer(FEOSNatP2PReceivedPacketBuffer::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSNatP2PReceivedPacketBuffer"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PReceivedPacketBuffer
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PReceivedPacketBuffer()
	{
		UScriptStruct::DeferCppStructOps<FEOSNatP2PReceivedPacketBuffer>(FName(TEXT("EOSNatP2PReceivedPacketBuffer")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PReceivedPacketBuffer;
	struct Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacketArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PacketArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PReceivedPacketBuffer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSNatP2PReceivedPacketBuffer>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewProp_PacketArray_Inner = { "PacketArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewProp_PacketArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PReceivedPacketBuffer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PReceivedPacketBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewProp_PacketArray = { "PacketArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PReceivedPacketBuffer, PacketArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewProp_PacketArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewProp_PacketArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewProp_PacketArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::NewProp_PacketArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSNatP2PReceivedPacketBuffer",
		sizeof(FEOSNatP2PReceivedPacketBuffer),
		alignof(FEOSNatP2PReceivedPacketBuffer),
		Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSNatP2PReceivedPacketBuffer"), sizeof(FEOSNatP2PReceivedPacketBuffer), Get_Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer_Hash() { return 810670071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
