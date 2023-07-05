// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELInteractiveVictoryCutsceneSpecialSceneParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELInteractiveVictoryCutsceneSpecialSceneParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet();
// End Cross Module References
class UScriptStruct* FELInteractiveVictoryCutsceneSpecialSceneParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELInteractiveVictoryCutsceneSpecialSceneParam"), sizeof(FELInteractiveVictoryCutsceneSpecialSceneParam), Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELInteractiveVictoryCutsceneSpecialSceneParam>()
{
	return FELInteractiveVictoryCutsceneSpecialSceneParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam(FELInteractiveVictoryCutsceneSpecialSceneParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELInteractiveVictoryCutsceneSpecialSceneParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneSpecialSceneParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneSpecialSceneParam()
	{
		UScriptStruct::DeferCppStructOps<FELInteractiveVictoryCutsceneSpecialSceneParam>(FName(TEXT("ELInteractiveVictoryCutsceneSpecialSceneParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneSpecialSceneParam;
	struct Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Montages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneSpecialSceneParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELInteractiveVictoryCutsceneSpecialSceneParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Condition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneSpecialSceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneSpecialSceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneSpecialSceneParam, Condition), Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Montages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneSpecialSceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneSpecialSceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneSpecialSceneParam, Montages), Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Montages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::NewProp_Montages,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELInteractiveVictoryCutsceneSpecialSceneParam",
		sizeof(FELInteractiveVictoryCutsceneSpecialSceneParam),
		alignof(FELInteractiveVictoryCutsceneSpecialSceneParam),
		Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELInteractiveVictoryCutsceneSpecialSceneParam"), sizeof(FELInteractiveVictoryCutsceneSpecialSceneParam), Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam_Hash() { return 1934666172U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
