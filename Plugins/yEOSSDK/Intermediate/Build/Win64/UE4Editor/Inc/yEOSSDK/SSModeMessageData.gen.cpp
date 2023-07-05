// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/SSModeMessageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSModeMessageData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FSSModeMessageData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FSSModeMessageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FSSModeMessageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSModeMessageData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("SSModeMessageData"), sizeof(FSSModeMessageData), Get_Z_Construct_UScriptStruct_FSSModeMessageData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FSSModeMessageData>()
{
	return FSSModeMessageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSModeMessageData(FSSModeMessageData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("SSModeMessageData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFSSModeMessageData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFSSModeMessageData()
	{
		UScriptStruct::DeferCppStructOps<FSSModeMessageData>(FName(TEXT("SSModeMessageData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFSSModeMessageData;
	struct Z_Construct_UScriptStruct_FSSModeMessageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buff_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buff_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSModeMessageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSModeMessageData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSModeMessageData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewProp_buff_Inner = { "buff", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewProp_buff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSModeMessageData" },
		{ "ModuleRelativePath", "Public/SSModeMessageData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewProp_buff = { "buff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSModeMessageData, buff), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewProp_buff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewProp_buff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSModeMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewProp_buff_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSModeMessageData_Statics::NewProp_buff,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSModeMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"SSModeMessageData",
		sizeof(FSSModeMessageData),
		alignof(FSSModeMessageData),
		Z_Construct_UScriptStruct_FSSModeMessageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSModeMessageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSModeMessageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSModeMessageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSModeMessageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSModeMessageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSModeMessageData"), sizeof(FSSModeMessageData), Get_Z_Construct_UScriptStruct_FSSModeMessageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSModeMessageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSModeMessageData_Hash() { return 430130622U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
