// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMatchResultInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMatchResultInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchResultInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerMatchResultInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMatchResultInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMatchResultInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMatchResultInfo"), sizeof(FCareerMatchResultInfo), Get_Z_Construct_UScriptStruct_FCareerMatchResultInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMatchResultInfo>()
{
	return FCareerMatchResultInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMatchResultInfo(FCareerMatchResultInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMatchResultInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchResultInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchResultInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerMatchResultInfo>(FName(TEXT("CareerMatchResultInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchResultInfo;
	struct Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInjury_MetaData[];
#endif
		static void NewProp_bInjury_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInjury;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fRestHPRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fRestHPRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttackedManager_MetaData[];
#endif
		static void NewProp_bAttackedManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttackedManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMatchResultInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMatchResultInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bInjury_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchResultInfo" },
		{ "ModuleRelativePath", "Public/CareerMatchResultInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bInjury_SetBit(void* Obj)
	{
		((FCareerMatchResultInfo*)Obj)->bInjury = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bInjury = { "bInjury", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchResultInfo), &Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bInjury_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bInjury_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bInjury_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_fRestHPRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchResultInfo" },
		{ "ModuleRelativePath", "Public/CareerMatchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_fRestHPRate = { "fRestHPRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchResultInfo, fRestHPRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_fRestHPRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_fRestHPRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bAttackedManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchResultInfo" },
		{ "ModuleRelativePath", "Public/CareerMatchResultInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bAttackedManager_SetBit(void* Obj)
	{
		((FCareerMatchResultInfo*)Obj)->bAttackedManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bAttackedManager = { "bAttackedManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchResultInfo), &Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bAttackedManager_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bAttackedManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bAttackedManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bInjury,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_fRestHPRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::NewProp_bAttackedManager,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerMatchResultInfo",
		sizeof(FCareerMatchResultInfo),
		alignof(FCareerMatchResultInfo),
		Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchResultInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMatchResultInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMatchResultInfo"), sizeof(FCareerMatchResultInfo), Get_Z_Construct_UScriptStruct_FCareerMatchResultInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMatchResultInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMatchResultInfo_Hash() { return 915963614U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
