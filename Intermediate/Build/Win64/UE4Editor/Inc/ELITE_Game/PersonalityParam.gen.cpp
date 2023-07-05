// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/PersonalityParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonalityParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FPersonalityParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FPersonalityParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersonalityParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("PersonalityParam"), sizeof(FPersonalityParam), Get_Z_Construct_UScriptStruct_FPersonalityParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FPersonalityParam>()
{
	return FPersonalityParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPersonalityParam(FPersonalityParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("PersonalityParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFPersonalityParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFPersonalityParam()
	{
		UScriptStruct::DeferCppStructOps<FPersonalityParam>(FName(TEXT("PersonalityParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFPersonalityParam;
	struct Z_Construct_UScriptStruct_FPersonalityParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntParam;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BitParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BitParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonalityParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PersonalityParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersonalityParam>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_IntParam_Inner = { "IntParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_IntParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonalityParam" },
		{ "ModuleRelativePath", "Public/PersonalityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_IntParam = { "IntParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonalityParam, IntParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_IntParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_IntParam_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_BitParam_Inner = { "BitParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_BitParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonalityParam" },
		{ "ModuleRelativePath", "Public/PersonalityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_BitParam = { "BitParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonalityParam, BitParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_BitParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_BitParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPersonalityParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_IntParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_IntParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_BitParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParam_Statics::NewProp_BitParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersonalityParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"PersonalityParam",
		sizeof(FPersonalityParam),
		alignof(FPersonalityParam),
		Z_Construct_UScriptStruct_FPersonalityParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonalityParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPersonalityParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PersonalityParam"), sizeof(FPersonalityParam), Get_Z_Construct_UScriptStruct_FPersonalityParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPersonalityParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPersonalityParam_Hash() { return 2978467368U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
