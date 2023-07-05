// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerNameProfileParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerNameProfileParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerNameProfileParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerNameProfileParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerNameProfileParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerNameProfileParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerNameProfileParam"), sizeof(FELWrestlerNameProfileParam), Get_Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerNameProfileParam>()
{
	return FELWrestlerNameProfileParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerNameProfileParam(FELWrestlerNameProfileParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerNameProfileParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerNameProfileParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerNameProfileParam()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerNameProfileParam>(FName(TEXT("ELWrestlerNameProfileParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerNameProfileParam;
	struct Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameForOneline_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NameForOneline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameForTwolines_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NameForTwolines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ShortName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EntranceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CareerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SNS_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SNS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerNameProfileParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerNameProfileParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForOneline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerNameProfileParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerNameProfileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForOneline = { "NameForOneline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerNameProfileParam, NameForOneline), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForOneline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForOneline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForTwolines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerNameProfileParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerNameProfileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForTwolines = { "NameForTwolines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerNameProfileParam, NameForTwolines), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForTwolines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForTwolines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_ShortName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerNameProfileParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerNameProfileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerNameProfileParam, ShortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_ShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_ShortName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_EntranceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerNameProfileParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerNameProfileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_EntranceName = { "EntranceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerNameProfileParam, EntranceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_EntranceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_EntranceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_CareerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerNameProfileParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerNameProfileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_CareerName = { "CareerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerNameProfileParam, CareerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_CareerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_CareerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_SNS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerNameProfileParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerNameProfileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_SNS = { "SNS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerNameProfileParam, SNS), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_SNS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_SNS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForOneline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_NameForTwolines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_ShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_EntranceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_CareerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::NewProp_SNS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerNameProfileParam",
		sizeof(FELWrestlerNameProfileParam),
		alignof(FELWrestlerNameProfileParam),
		Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerNameProfileParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerNameProfileParam"), sizeof(FELWrestlerNameProfileParam), Get_Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerNameProfileParam_Hash() { return 1543835445U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
