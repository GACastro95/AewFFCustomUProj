// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AchievementParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAchievementParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAchievementParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FAchievementParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FAchievementParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAchievementParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("AchievementParam"), sizeof(FAchievementParam), Get_Z_Construct_UScriptStruct_FAchievementParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FAchievementParam>()
{
	return FAchievementParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAchievementParam(FAchievementParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("AchievementParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFAchievementParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFAchievementParam()
	{
		UScriptStruct::DeferCppStructOps<FAchievementParam>(FName(TEXT("AchievementParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFAchievementParam;
	struct Z_Construct_UScriptStruct_FAchievementParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSaveCount_MetaData[];
#endif
		static void NewProp_IsSaveCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSaveCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AchievementParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAchievementParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAchievementParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_IsSaveCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementParam" },
		{ "ModuleRelativePath", "Public/AchievementParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_IsSaveCount_SetBit(void* Obj)
	{
		((FAchievementParam*)Obj)->IsSaveCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_IsSaveCount = { "IsSaveCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAchievementParam), &Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_IsSaveCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_IsSaveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_IsSaveCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_MaxCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementParam" },
		{ "ModuleRelativePath", "Public/AchievementParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementParam, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_TableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementParam" },
		{ "ModuleRelativePath", "Public/AchievementParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementParam, TableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_TableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_StringKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementParam" },
		{ "ModuleRelativePath", "Public/AchievementParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_StringKey = { "StringKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementParam, StringKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_StringKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_StringKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_DebugText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementParam" },
		{ "ModuleRelativePath", "Public/AchievementParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_DebugText = { "DebugText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementParam, DebugText), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_DebugText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_DebugText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAchievementParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_IsSaveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_StringKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementParam_Statics::NewProp_DebugText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAchievementParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AchievementParam",
		sizeof(FAchievementParam),
		alignof(FAchievementParam),
		Z_Construct_UScriptStruct_FAchievementParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAchievementParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAchievementParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AchievementParam"), sizeof(FAchievementParam), Get_Z_Construct_UScriptStruct_FAchievementParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAchievementParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAchievementParam_Hash() { return 602764057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
