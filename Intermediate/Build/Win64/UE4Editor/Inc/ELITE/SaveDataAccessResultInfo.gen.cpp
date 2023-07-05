// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/SaveDataAccessResultInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataAccessResultInfo() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessResultInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
// End Cross Module References
class UScriptStruct* FSaveDataAccessResultInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo, Z_Construct_UPackage__Script_ELITE(), TEXT("SaveDataAccessResultInfo"), sizeof(FSaveDataAccessResultInfo), Get_Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FSaveDataAccessResultInfo>()
{
	return FSaveDataAccessResultInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveDataAccessResultInfo(FSaveDataAccessResultInfo::StaticStruct, TEXT("/Script/ELITE"), TEXT("SaveDataAccessResultInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFSaveDataAccessResultInfo
{
	FScriptStruct_ELITE_StaticRegisterNativesFSaveDataAccessResultInfo()
	{
		UScriptStruct::DeferCppStructOps<FSaveDataAccessResultInfo>(FName(TEXT("SaveDataAccessResultInfo")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFSaveDataAccessResultInfo;
	struct Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProcResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProcResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveDataAccessResultInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveDataAccessResultInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_DataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessResultInfo" },
		{ "ModuleRelativePath", "Public/SaveDataAccessResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessResultInfo, DataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_ProcResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_ProcResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessResultInfo" },
		{ "ModuleRelativePath", "Public/SaveDataAccessResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_ProcResult = { "ProcResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessResultInfo, ProcResult), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_ProcResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_ProcResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_ProcResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::NewProp_ProcResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"SaveDataAccessResultInfo",
		sizeof(FSaveDataAccessResultInfo),
		alignof(FSaveDataAccessResultInfo),
		Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessResultInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveDataAccessResultInfo"), sizeof(FSaveDataAccessResultInfo), Get_Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessResultInfo_Hash() { return 4018374105U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
