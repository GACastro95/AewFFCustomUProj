// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRecordsBestScoreStar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRecordsBestScoreStar() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerRecordsBestScoreStar>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerRecordsBestScoreStar cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerRecordsBestScoreStar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRecordsBestScoreStar"), sizeof(FCareerRecordsBestScoreStar), Get_Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRecordsBestScoreStar>()
{
	return FCareerRecordsBestScoreStar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRecordsBestScoreStar(FCareerRecordsBestScoreStar::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRecordsBestScoreStar"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsBestScoreStar
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsBestScoreStar()
	{
		UScriptStruct::DeferCppStructOps<FCareerRecordsBestScoreStar>(FName(TEXT("CareerRecordsBestScoreStar")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsBestScoreStar;
	struct Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StarNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarHalf_MetaData[];
#endif
		static void NewProp_StarHalf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StarHalf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRecordsBestScoreStar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRecordsBestScoreStar>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsBestScoreStar" },
		{ "ModuleRelativePath", "Public/CareerRecordsBestScoreStar.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsBestScoreStar, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsBestScoreStar" },
		{ "ModuleRelativePath", "Public/CareerRecordsBestScoreStar.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMin = { "ScoreMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsBestScoreStar, ScoreMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsBestScoreStar" },
		{ "ModuleRelativePath", "Public/CareerRecordsBestScoreStar.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMax = { "ScoreMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsBestScoreStar, ScoreMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsBestScoreStar" },
		{ "ModuleRelativePath", "Public/CareerRecordsBestScoreStar.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarNum = { "StarNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsBestScoreStar, StarNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarHalf_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsBestScoreStar" },
		{ "ModuleRelativePath", "Public/CareerRecordsBestScoreStar.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarHalf_SetBit(void* Obj)
	{
		((FCareerRecordsBestScoreStar*)Obj)->StarHalf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarHalf = { "StarHalf", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerRecordsBestScoreStar), &Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarHalf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarHalf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarHalf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_ScoreMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::NewProp_StarHalf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerRecordsBestScoreStar",
		sizeof(FCareerRecordsBestScoreStar),
		alignof(FCareerRecordsBestScoreStar),
		Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRecordsBestScoreStar"), sizeof(FCareerRecordsBestScoreStar), Get_Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsBestScoreStar_Hash() { return 1088563370U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
