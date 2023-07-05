// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPersonParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPersonParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPersonParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParamBase();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameString();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
// End Cross Module References

static_assert(std::is_polymorphic<FEditPersonParam>() == std::is_polymorphic<FPersonParamBase>(), "USTRUCT FEditPersonParam cannot be polymorphic unless super FPersonParamBase is polymorphic");

class UScriptStruct* FEditPersonParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPersonParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPersonParam, Z_Construct_UPackage__Script_Creation(), TEXT("EditPersonParam"), sizeof(FEditPersonParam), Get_Z_Construct_UScriptStruct_FEditPersonParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPersonParam>()
{
	return FEditPersonParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPersonParam(FEditPersonParam::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPersonParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPersonParam
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPersonParam()
	{
		UScriptStruct::DeferCppStructOps<FEditPersonParam>(FName(TEXT("EditPersonParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPersonParam;
	struct Z_Construct_UScriptStruct_FEditPersonParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditWrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditBodyParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditBodyParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOVES_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MOVES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entrance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPersonParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPersonParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPersonParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditWrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPersonParam" },
		{ "ModuleRelativePath", "Public/EditPersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditWrestlerName = { "EditWrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPersonParam, EditWrestlerName), Z_Construct_UScriptStruct_FWrestlerNameString, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditWrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditWrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditBodyParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPersonParam" },
		{ "ModuleRelativePath", "Public/EditPersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditBodyParam = { "EditBodyParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPersonParam, EditBodyParam), Z_Construct_UScriptStruct_FEditBodyParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditBodyParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditBodyParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_DefaultAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPersonParam" },
		{ "ModuleRelativePath", "Public/EditPersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_DefaultAttire = { "DefaultAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPersonParam, DefaultAttire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_DefaultAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_DefaultAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_MOVES_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPersonParam" },
		{ "ModuleRelativePath", "Public/EditPersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_MOVES = { "MOVES", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPersonParam, MOVES), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_MOVES_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_MOVES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPersonParam" },
		{ "ModuleRelativePath", "Public/EditPersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_Entrance = { "Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPersonParam, Entrance), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_Entrance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPersonParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditWrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_EditBodyParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_DefaultAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_MOVES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPersonParam_Statics::NewProp_Entrance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPersonParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FPersonParamBase,
		&NewStructOps,
		"EditPersonParam",
		sizeof(FEditPersonParam),
		alignof(FEditPersonParam),
		Z_Construct_UScriptStruct_FEditPersonParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPersonParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPersonParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPersonParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPersonParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPersonParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPersonParam"), sizeof(FEditPersonParam), Get_Z_Construct_UScriptStruct_FEditPersonParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPersonParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPersonParam_Hash() { return 2671614188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
