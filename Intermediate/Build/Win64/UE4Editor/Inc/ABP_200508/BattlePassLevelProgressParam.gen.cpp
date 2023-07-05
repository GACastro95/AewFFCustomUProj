// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/BattlePassLevelProgressParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattlePassLevelProgressParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassLevelProgressParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBattlePassLevelProgressParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBattlePassLevelProgressParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBattlePassLevelProgressParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("BattlePassLevelProgressParam"), sizeof(FBattlePassLevelProgressParam), Get_Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FBattlePassLevelProgressParam>()
{
	return FBattlePassLevelProgressParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBattlePassLevelProgressParam(FBattlePassLevelProgressParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("BattlePassLevelProgressParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassLevelProgressParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassLevelProgressParam()
	{
		UScriptStruct::DeferCppStructOps<FBattlePassLevelProgressParam>(FName(TEXT("BattlePassLevelProgressParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassLevelProgressParam;
	struct Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeRequiredPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeRequiredPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BattlePassLevelProgressParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBattlePassLevelProgressParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_TargetLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassLevelProgressParam" },
		{ "ModuleRelativePath", "Public/BattlePassLevelProgressParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_TargetLevel = { "TargetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassLevelProgressParam, TargetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_TargetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_TargetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_CumulativeRequiredPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassLevelProgressParam" },
		{ "ModuleRelativePath", "Public/BattlePassLevelProgressParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_CumulativeRequiredPoints = { "CumulativeRequiredPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassLevelProgressParam, CumulativeRequiredPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_CumulativeRequiredPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_CumulativeRequiredPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_TargetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::NewProp_CumulativeRequiredPoints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BattlePassLevelProgressParam",
		sizeof(FBattlePassLevelProgressParam),
		alignof(FBattlePassLevelProgressParam),
		Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBattlePassLevelProgressParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BattlePassLevelProgressParam"), sizeof(FBattlePassLevelProgressParam), Get_Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBattlePassLevelProgressParam_Hash() { return 1846737096U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
