// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/AdjustDlcSaveDataParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdjustDlcSaveDataParam() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FAdjustDlcSaveData();
// End Cross Module References
class UScriptStruct* FAdjustDlcSaveDataParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam, Z_Construct_UPackage__Script_ELITE(), TEXT("AdjustDlcSaveDataParam"), sizeof(FAdjustDlcSaveDataParam), Get_Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FAdjustDlcSaveDataParam>()
{
	return FAdjustDlcSaveDataParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdjustDlcSaveDataParam(FAdjustDlcSaveDataParam::StaticStruct, TEXT("/Script/ELITE"), TEXT("AdjustDlcSaveDataParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFAdjustDlcSaveDataParam
{
	FScriptStruct_ELITE_StaticRegisterNativesFAdjustDlcSaveDataParam()
	{
		UScriptStruct::DeferCppStructOps<FAdjustDlcSaveDataParam>(FName(TEXT("AdjustDlcSaveDataParam")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFAdjustDlcSaveDataParam;
	struct Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdjustDlcSaveDataParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdjustDlcSaveDataParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_SaveDataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdjustDlcSaveDataParam" },
		{ "ModuleRelativePath", "Public/AdjustDlcSaveDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_SaveDataType = { "SaveDataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdjustDlcSaveDataParam, SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_SaveDataType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdjustDlcSaveDataParam" },
		{ "ModuleRelativePath", "Public/AdjustDlcSaveDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdjustDlcSaveDataParam, Data), Z_Construct_UScriptStruct_FAdjustDlcSaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"AdjustDlcSaveDataParam",
		sizeof(FAdjustDlcSaveDataParam),
		alignof(FAdjustDlcSaveDataParam),
		Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdjustDlcSaveDataParam"), sizeof(FAdjustDlcSaveDataParam), Get_Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam_Hash() { return 3546486046U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
