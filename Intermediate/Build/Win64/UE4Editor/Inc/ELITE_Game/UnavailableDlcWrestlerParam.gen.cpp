// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/UnavailableDlcWrestlerParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnavailableDlcWrestlerParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FUnavailableDlcWrestlerParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("UnavailableDlcWrestlerParam"), sizeof(FUnavailableDlcWrestlerParam), Get_Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FUnavailableDlcWrestlerParam>()
{
	return FUnavailableDlcWrestlerParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUnavailableDlcWrestlerParam(FUnavailableDlcWrestlerParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("UnavailableDlcWrestlerParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFUnavailableDlcWrestlerParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFUnavailableDlcWrestlerParam()
	{
		UScriptStruct::DeferCppStructOps<FUnavailableDlcWrestlerParam>(FName(TEXT("UnavailableDlcWrestlerParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFUnavailableDlcWrestlerParam;
	struct Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DlcItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnavailableDlcWrestlerParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnavailableDlcWrestlerParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnavailableDlcWrestlerParam" },
		{ "ModuleRelativePath", "Public/UnavailableDlcWrestlerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnavailableDlcWrestlerParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnavailableDlcWrestlerParam" },
		{ "ModuleRelativePath", "Public/UnavailableDlcWrestlerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerUID = { "WrestlerUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnavailableDlcWrestlerParam, WrestlerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_DlcItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnavailableDlcWrestlerParam" },
		{ "ModuleRelativePath", "Public/UnavailableDlcWrestlerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_DlcItemName = { "DlcItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnavailableDlcWrestlerParam, DlcItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_DlcItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_DlcItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_WrestlerUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::NewProp_DlcItemName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"UnavailableDlcWrestlerParam",
		sizeof(FUnavailableDlcWrestlerParam),
		alignof(FUnavailableDlcWrestlerParam),
		Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UnavailableDlcWrestlerParam"), sizeof(FUnavailableDlcWrestlerParam), Get_Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam_Hash() { return 1906428666U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
