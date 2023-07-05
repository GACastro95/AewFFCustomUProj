// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/CAWTempParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAWTempParam() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCAWTempParam();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameString();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParamBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPresetParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerSettings();
// End Cross Module References
class UScriptStruct* FCAWTempParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FCAWTempParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCAWTempParam, Z_Construct_UPackage__Script_ELITE(), TEXT("CAWTempParam"), sizeof(FCAWTempParam), Get_Z_Construct_UScriptStruct_FCAWTempParam_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FCAWTempParam>()
{
	return FCAWTempParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCAWTempParam(FCAWTempParam::StaticStruct, TEXT("/Script/ELITE"), TEXT("CAWTempParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFCAWTempParam
{
	FScriptStruct_ELITE_StaticRegisterNativesFCAWTempParam()
	{
		UScriptStruct::DeferCppStructOps<FCAWTempParam>(FName(TEXT("CAWTempParam")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFCAWTempParam;
	struct Z_Construct_UScriptStruct_FCAWTempParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditWrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonParamBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonParamBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoutPlainAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoutPlainAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditWrestlerSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCAWTempParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerName = { "EditWrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, EditWrestlerName), Z_Construct_UScriptStruct_FWrestlerNameString, METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PersonParamBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PersonParamBase = { "PersonParamBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, PersonParamBase), Z_Construct_UScriptStruct_FPersonParamBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PersonParamBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PersonParamBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_BodyParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_BodyParam = { "BodyParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, BodyParam), Z_Construct_UScriptStruct_FEditBodyParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_BodyParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_BodyParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_DefaultAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_DefaultAttire = { "DefaultAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, DefaultAttire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_DefaultAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_DefaultAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_ScoutPlainAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_ScoutPlainAttire = { "ScoutPlainAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, ScoutPlainAttire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_ScoutPlainAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_ScoutPlainAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PresetParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PresetParam = { "PresetParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, PresetParam), Z_Construct_UScriptStruct_FPresetParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PresetParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PresetParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CAWTempParam" },
		{ "ModuleRelativePath", "Public/CAWTempParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerSettings = { "EditWrestlerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCAWTempParam, EditWrestlerSettings), Z_Construct_UScriptStruct_FEditWrestlerSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCAWTempParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PersonParamBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_BodyParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_DefaultAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_ScoutPlainAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_PresetParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCAWTempParam_Statics::NewProp_EditWrestlerSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCAWTempParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"CAWTempParam",
		sizeof(FCAWTempParam),
		alignof(FCAWTempParam),
		Z_Construct_UScriptStruct_FCAWTempParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCAWTempParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCAWTempParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCAWTempParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCAWTempParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CAWTempParam"), sizeof(FCAWTempParam), Get_Z_Construct_UScriptStruct_FCAWTempParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCAWTempParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCAWTempParam_Hash() { return 3194889823U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
