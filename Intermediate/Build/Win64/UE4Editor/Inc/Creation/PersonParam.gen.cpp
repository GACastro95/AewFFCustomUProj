// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/PersonParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParamBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
// End Cross Module References

static_assert(std::is_polymorphic<FPersonParam>() == std::is_polymorphic<FPersonParamBase>(), "USTRUCT FPersonParam cannot be polymorphic unless super FPersonParamBase is polymorphic");

class UScriptStruct* FPersonParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FPersonParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersonParam, Z_Construct_UPackage__Script_Creation(), TEXT("PersonParam"), sizeof(FPersonParam), Get_Z_Construct_UScriptStruct_FPersonParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FPersonParam>()
{
	return FPersonParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPersonParam(FPersonParam::StaticStruct, TEXT("/Script/Creation"), TEXT("PersonParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFPersonParam
{
	FScriptStruct_Creation_StaticRegisterNativesFPersonParam()
	{
		UScriptStruct::DeferCppStructOps<FPersonParam>(FName(TEXT("PersonParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFPersonParam;
	struct Z_Construct_UScriptStruct_FPersonParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Thumbnails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Thumbnails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PersonParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPersonParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersonParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_EditBodyParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParam" },
		{ "ModuleRelativePath", "Public/PersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_EditBodyParam = { "EditBodyParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParam, EditBodyParam), Z_Construct_UScriptStruct_FEditBodyParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_EditBodyParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_EditBodyParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_DefaultAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParam" },
		{ "ModuleRelativePath", "Public/PersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_DefaultAttire = { "DefaultAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParam, DefaultAttire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_DefaultAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_DefaultAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_MOVES_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParam" },
		{ "ModuleRelativePath", "Public/PersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_MOVES = { "MOVES", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParam, MOVES), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_MOVES_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_MOVES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParam" },
		{ "ModuleRelativePath", "Public/PersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Entrance = { "Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParam, Entrance), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Entrance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Thumbnails_Inner = { "Thumbnails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Thumbnails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonParam" },
		{ "ModuleRelativePath", "Public/PersonParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Thumbnails = { "Thumbnails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonParam, Thumbnails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Thumbnails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Thumbnails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPersonParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_EditBodyParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_DefaultAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_MOVES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Thumbnails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonParam_Statics::NewProp_Thumbnails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersonParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FPersonParamBase,
		&NewStructOps,
		"PersonParam",
		sizeof(FPersonParam),
		alignof(FPersonParam),
		Z_Construct_UScriptStruct_FPersonParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPersonParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPersonParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PersonParam"), sizeof(FPersonParam), Get_Z_Construct_UScriptStruct_FPersonParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPersonParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPersonParam_Hash() { return 1082415940U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
