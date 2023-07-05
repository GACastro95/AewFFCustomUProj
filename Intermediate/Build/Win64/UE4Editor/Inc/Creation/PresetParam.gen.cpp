// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/PresetParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresetParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPresetParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam();
// End Cross Module References
class UScriptStruct* FPresetParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FPresetParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetParam, Z_Construct_UPackage__Script_Creation(), TEXT("PresetParam"), sizeof(FPresetParam), Get_Z_Construct_UScriptStruct_FPresetParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FPresetParam>()
{
	return FPresetParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPresetParam(FPresetParam::StaticStruct, TEXT("/Script/Creation"), TEXT("PresetParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFPresetParam
{
	FScriptStruct_Creation_StaticRegisterNativesFPresetParam()
	{
		UScriptStruct::DeferCppStructOps<FPresetParam>(FName(TEXT("PresetParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFPresetParam;
	struct Z_Construct_UScriptStruct_FPresetParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntranceAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RosterAttire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PresetParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresetParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RingAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetParam" },
		{ "ModuleRelativePath", "Public/PresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RingAttire = { "RingAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetParam, RingAttire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RingAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RingAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_EntranceAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetParam" },
		{ "ModuleRelativePath", "Public/PresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_EntranceAttire = { "EntranceAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetParam, EntranceAttire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_EntranceAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_EntranceAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RosterAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetParam" },
		{ "ModuleRelativePath", "Public/PresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RosterAttire = { "RosterAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetParam, RosterAttire), Z_Construct_UScriptStruct_FCostumeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RosterAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RosterAttire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RingAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_EntranceAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetParam_Statics::NewProp_RosterAttire,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"PresetParam",
		sizeof(FPresetParam),
		alignof(FPresetParam),
		Z_Construct_UScriptStruct_FPresetParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresetParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPresetParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PresetParam"), sizeof(FPresetParam), Get_Z_Construct_UScriptStruct_FPresetParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPresetParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPresetParam_Hash() { return 4203464263U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
