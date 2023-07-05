// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELCutsceneIKParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCutsceneIKParameter() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELCutsceneIKParameter();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FELCutsceneIKParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELCutsceneIKParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELCutsceneIKParameter, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELCutsceneIKParameter"), sizeof(FELCutsceneIKParameter), Get_Z_Construct_UScriptStruct_FELCutsceneIKParameter_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELCutsceneIKParameter>()
{
	return FELCutsceneIKParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELCutsceneIKParameter(FELCutsceneIKParameter::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELCutsceneIKParameter"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELCutsceneIKParameter
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELCutsceneIKParameter()
	{
		UScriptStruct::DeferCppStructOps<FELCutsceneIKParameter>(FName(TEXT("ELCutsceneIKParameter")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELCutsceneIKParameter;
	struct Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELCutsceneIKParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELCutsceneIKParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCutsceneIKParameter" },
		{ "ModuleRelativePath", "Public/ELCutsceneIKParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCutsceneIKParameter, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_BlendRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCutsceneIKParameter" },
		{ "ModuleRelativePath", "Public/ELCutsceneIKParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_BlendRate = { "BlendRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCutsceneIKParameter, BlendRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_BlendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_BlendRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::NewProp_BlendRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELCutsceneIKParameter",
		sizeof(FELCutsceneIKParameter),
		alignof(FELCutsceneIKParameter),
		Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELCutsceneIKParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELCutsceneIKParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELCutsceneIKParameter"), sizeof(FELCutsceneIKParameter), Get_Z_Construct_UScriptStruct_FELCutsceneIKParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELCutsceneIKParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELCutsceneIKParameter_Hash() { return 4265619128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
