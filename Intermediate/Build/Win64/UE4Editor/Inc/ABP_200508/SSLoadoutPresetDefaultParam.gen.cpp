// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLoadoutPresetDefaultParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLoadoutPresetDefaultParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSLoadoutPresetDefaultParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSLoadoutPresetDefaultParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSLoadoutPresetDefaultParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLoadoutPresetDefaultParam"), sizeof(FSSLoadoutPresetDefaultParam), Get_Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLoadoutPresetDefaultParam>()
{
	return FSSLoadoutPresetDefaultParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLoadoutPresetDefaultParam(FSSLoadoutPresetDefaultParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLoadoutPresetDefaultParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutPresetDefaultParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutPresetDefaultParam()
	{
		UScriptStruct::DeferCppStructOps<FSSLoadoutPresetDefaultParam>(FName(TEXT("SSLoadoutPresetDefaultParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutPresetDefaultParam;
	struct Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Used_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Used;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillDefaultSettingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillDefaultSettingId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLoadoutPresetDefaultParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Used_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPresetDefaultParam" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Used = { "Used", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPresetDefaultParam, Used), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Used_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Used_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_PresetNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPresetDefaultParam" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPresetDefaultParam, PresetNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_PresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_PresetNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPresetDefaultParam" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability1 = { "Ability1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPresetDefaultParam, Ability1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPresetDefaultParam" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability2 = { "Ability2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPresetDefaultParam, Ability2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPresetDefaultParam" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability3 = { "Ability3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPresetDefaultParam, Ability3), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_HeatSkillDefaultSettingId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPresetDefaultParam" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_HeatSkillDefaultSettingId = { "HeatSkillDefaultSettingId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPresetDefaultParam, HeatSkillDefaultSettingId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_HeatSkillDefaultSettingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_HeatSkillDefaultSettingId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_FinisherId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPresetDefaultParam" },
		{ "ModuleRelativePath", "Public/SSLoadoutPresetDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_FinisherId = { "FinisherId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPresetDefaultParam, FinisherId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_FinisherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_FinisherId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Used,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_PresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_Ability3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_HeatSkillDefaultSettingId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::NewProp_FinisherId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSLoadoutPresetDefaultParam",
		sizeof(FSSLoadoutPresetDefaultParam),
		alignof(FSSLoadoutPresetDefaultParam),
		Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLoadoutPresetDefaultParam"), sizeof(FSSLoadoutPresetDefaultParam), Get_Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam_Hash() { return 3804560168U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
