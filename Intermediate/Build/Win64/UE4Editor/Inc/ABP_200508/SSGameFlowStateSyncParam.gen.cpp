// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGameFlowStateSyncParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGameFlowStateSyncParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameFlowState();
// End Cross Module References
class UScriptStruct* FSSGameFlowStateSyncParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGameFlowStateSyncParam"), sizeof(FSSGameFlowStateSyncParam), Get_Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGameFlowStateSyncParam>()
{
	return FSSGameFlowStateSyncParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGameFlowStateSyncParam(FSSGameFlowStateSyncParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGameFlowStateSyncParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameFlowStateSyncParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameFlowStateSyncParam()
	{
		UScriptStruct::DeferCppStructOps<FSSGameFlowStateSyncParam>(FName(TEXT("SSGameFlowStateSyncParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGameFlowStateSyncParam;
	struct Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SyncId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGameFlowStateSyncParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGameFlowStateSyncParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameFlowStateSyncParam" },
		{ "ModuleRelativePath", "Public/SSGameFlowStateSyncParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameFlowStateSyncParam, State), Z_Construct_UEnum_ABP_200508_ESSGameFlowState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_SyncId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameFlowStateSyncParam" },
		{ "ModuleRelativePath", "Public/SSGameFlowStateSyncParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_SyncId = { "SyncId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameFlowStateSyncParam, SyncId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_SyncId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_SyncId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::NewProp_SyncId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSGameFlowStateSyncParam",
		sizeof(FSSGameFlowStateSyncParam),
		alignof(FSSGameFlowStateSyncParam),
		Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGameFlowStateSyncParam"), sizeof(FSSGameFlowStateSyncParam), Get_Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam_Hash() { return 1632547018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
