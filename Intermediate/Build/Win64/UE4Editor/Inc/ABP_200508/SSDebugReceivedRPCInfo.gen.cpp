// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDebugReceivedRPCInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDebugReceivedRPCInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSDebugReceivedRPCInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDebugReceivedRPCInfo"), sizeof(FSSDebugReceivedRPCInfo), Get_Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDebugReceivedRPCInfo>()
{
	return FSSDebugReceivedRPCInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDebugReceivedRPCInfo(FSSDebugReceivedRPCInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDebugReceivedRPCInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugReceivedRPCInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugReceivedRPCInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSDebugReceivedRPCInfo>(FName(TEXT("SSDebugReceivedRPCInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugReceivedRPCInfo;
	struct Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReceivedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastReceivedId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceivedCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDebugReceivedRPCInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDebugReceivedRPCInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_LastReceivedId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugReceivedRPCInfo" },
		{ "ModuleRelativePath", "Public/SSDebugReceivedRPCInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_LastReceivedId = { "LastReceivedId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugReceivedRPCInfo, LastReceivedId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_LastReceivedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_LastReceivedId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_ReceivedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugReceivedRPCInfo" },
		{ "ModuleRelativePath", "Public/SSDebugReceivedRPCInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_ReceivedCount = { "ReceivedCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugReceivedRPCInfo, ReceivedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_ReceivedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_ReceivedCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_LastReceivedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::NewProp_ReceivedCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSDebugReceivedRPCInfo",
		sizeof(FSSDebugReceivedRPCInfo),
		alignof(FSSDebugReceivedRPCInfo),
		Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDebugReceivedRPCInfo"), sizeof(FSSDebugReceivedRPCInfo), Get_Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDebugReceivedRPCInfo_Hash() { return 2665647793U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
