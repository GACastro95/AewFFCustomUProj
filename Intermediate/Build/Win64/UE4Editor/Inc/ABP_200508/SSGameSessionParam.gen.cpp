// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGameSessionParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGameSessionParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameSessionParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSGameSessionParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGameSessionParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGameSessionParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGameSessionParam"), sizeof(FSSGameSessionParam), Get_Z_Construct_UScriptStruct_FSSGameSessionParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGameSessionParam>()
{
	return FSSGameSessionParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGameSessionParam(FSSGameSessionParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGameSessionParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameSessionParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameSessionParam()
	{
		UScriptStruct::DeferCppStructOps<FSSGameSessionParam>(FName(TEXT("SSGameSessionParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGameSessionParam;
	struct Z_Construct_UScriptStruct_FSSGameSessionParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPlayerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxPlayerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minPlayerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minPlayerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_secMatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobbyForceEndLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lobbyForceEndLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGameSessionParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGameSessionParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_maxPlayerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameSessionParam" },
		{ "ModuleRelativePath", "Public/SSGameSessionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_maxPlayerNum = { "maxPlayerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameSessionParam, maxPlayerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_maxPlayerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_maxPlayerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_minPlayerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameSessionParam" },
		{ "ModuleRelativePath", "Public/SSGameSessionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_minPlayerNum = { "minPlayerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameSessionParam, minPlayerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_minPlayerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_minPlayerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_secMatchTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameSessionParam" },
		{ "ModuleRelativePath", "Public/SSGameSessionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_secMatchTime = { "secMatchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameSessionParam, secMatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_secMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_secMatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_lobbyForceEndLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameSessionParam" },
		{ "ModuleRelativePath", "Public/SSGameSessionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_lobbyForceEndLimit = { "lobbyForceEndLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameSessionParam, lobbyForceEndLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_lobbyForceEndLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_lobbyForceEndLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_maxPlayerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_minPlayerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_secMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::NewProp_lobbyForceEndLimit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSGameSessionParam",
		sizeof(FSSGameSessionParam),
		alignof(FSSGameSessionParam),
		Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGameSessionParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGameSessionParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGameSessionParam"), sizeof(FSSGameSessionParam), Get_Z_Construct_UScriptStruct_FSSGameSessionParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGameSessionParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGameSessionParam_Hash() { return 1520592731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
