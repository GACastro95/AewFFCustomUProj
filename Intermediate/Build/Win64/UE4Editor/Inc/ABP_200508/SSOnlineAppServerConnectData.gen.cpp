// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSOnlineAppServerConnectData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSOnlineAppServerConnectData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSModeServerParam();
// End Cross Module References
class UScriptStruct* FSSOnlineAppServerConnectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSOnlineAppServerConnectData"), sizeof(FSSOnlineAppServerConnectData), Get_Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSOnlineAppServerConnectData>()
{
	return FSSOnlineAppServerConnectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSOnlineAppServerConnectData(FSSOnlineAppServerConnectData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSOnlineAppServerConnectData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSOnlineAppServerConnectData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSOnlineAppServerConnectData()
	{
		UScriptStruct::DeferCppStructOps<FSSOnlineAppServerConnectData>(FName(TEXT("SSOnlineAppServerConnectData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSOnlineAppServerConnectData;
	struct Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_datServerEnv_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_datServerEnv;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSOnlineAppServerConnectData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSOnlineAppServerConnectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::NewProp_datServerEnv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlineAppServerConnectData" },
		{ "ModuleRelativePath", "Public/SSOnlineAppServerConnectData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::NewProp_datServerEnv = { "datServerEnv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlineAppServerConnectData, datServerEnv), Z_Construct_UScriptStruct_FSSModeServerParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::NewProp_datServerEnv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::NewProp_datServerEnv_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::NewProp_datServerEnv,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSOnlineAppServerConnectData",
		sizeof(FSSOnlineAppServerConnectData),
		alignof(FSSOnlineAppServerConnectData),
		Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSOnlineAppServerConnectData"), sizeof(FSSOnlineAppServerConnectData), Get_Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSOnlineAppServerConnectData_Hash() { return 1802936744U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
