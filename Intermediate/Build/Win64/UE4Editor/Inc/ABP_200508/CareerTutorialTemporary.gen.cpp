// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerTutorialTemporary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerTutorialTemporary() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerTutorialTemporary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerTutorialTemporary::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerTutorialTemporary_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerTutorialTemporary, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerTutorialTemporary"), sizeof(FCareerTutorialTemporary), Get_Z_Construct_UScriptStruct_FCareerTutorialTemporary_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerTutorialTemporary>()
{
	return FCareerTutorialTemporary::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerTutorialTemporary(FCareerTutorialTemporary::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerTutorialTemporary"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerTutorialTemporary
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerTutorialTemporary()
	{
		UScriptStruct::DeferCppStructOps<FCareerTutorialTemporary>(FName(TEXT("CareerTutorialTemporary")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerTutorialTemporary;
	struct Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapShot_MetaData[];
#endif
		static void NewProp_bSnapShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchReward_MetaData[];
#endif
		static void NewProp_bMatchReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiningReward_MetaData[];
#endif
		static void NewProp_bDiningReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiningReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSightSeeingReward_MetaData[];
#endif
		static void NewProp_bSightSeeingReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSightSeeingReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPromotionReward_MetaData[];
#endif
		static void NewProp_bPromotionReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPromotionReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerTutorialTemporary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerTutorialTemporary>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSnapShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorialTemporary" },
		{ "ModuleRelativePath", "Public/CareerTutorialTemporary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSnapShot_SetBit(void* Obj)
	{
		((FCareerTutorialTemporary*)Obj)->bSnapShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSnapShot = { "bSnapShot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerTutorialTemporary), &Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSnapShot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSnapShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSnapShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bMatchReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorialTemporary" },
		{ "ModuleRelativePath", "Public/CareerTutorialTemporary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bMatchReward_SetBit(void* Obj)
	{
		((FCareerTutorialTemporary*)Obj)->bMatchReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bMatchReward = { "bMatchReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerTutorialTemporary), &Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bMatchReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bMatchReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bMatchReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bDiningReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorialTemporary" },
		{ "ModuleRelativePath", "Public/CareerTutorialTemporary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bDiningReward_SetBit(void* Obj)
	{
		((FCareerTutorialTemporary*)Obj)->bDiningReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bDiningReward = { "bDiningReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerTutorialTemporary), &Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bDiningReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bDiningReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bDiningReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSightSeeingReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorialTemporary" },
		{ "ModuleRelativePath", "Public/CareerTutorialTemporary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSightSeeingReward_SetBit(void* Obj)
	{
		((FCareerTutorialTemporary*)Obj)->bSightSeeingReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSightSeeingReward = { "bSightSeeingReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerTutorialTemporary), &Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSightSeeingReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSightSeeingReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSightSeeingReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bPromotionReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorialTemporary" },
		{ "ModuleRelativePath", "Public/CareerTutorialTemporary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bPromotionReward_SetBit(void* Obj)
	{
		((FCareerTutorialTemporary*)Obj)->bPromotionReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bPromotionReward = { "bPromotionReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerTutorialTemporary), &Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bPromotionReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bPromotionReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bPromotionReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSnapShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bMatchReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bDiningReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bSightSeeingReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::NewProp_bPromotionReward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerTutorialTemporary",
		sizeof(FCareerTutorialTemporary),
		alignof(FCareerTutorialTemporary),
		Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerTutorialTemporary()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerTutorialTemporary_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerTutorialTemporary"), sizeof(FCareerTutorialTemporary), Get_Z_Construct_UScriptStruct_FCareerTutorialTemporary_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerTutorialTemporary_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerTutorialTemporary_Hash() { return 4068105046U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
