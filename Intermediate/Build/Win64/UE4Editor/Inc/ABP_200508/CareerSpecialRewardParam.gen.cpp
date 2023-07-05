// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSpecialRewardParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSpecialRewardParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSpecialRewardParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSpecialReward();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FCareerSpecialRewardParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerSpecialRewardParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerSpecialRewardParam"), sizeof(FCareerSpecialRewardParam), Get_Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerSpecialRewardParam>()
{
	return FCareerSpecialRewardParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerSpecialRewardParam(FCareerSpecialRewardParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerSpecialRewardParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSpecialRewardParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSpecialRewardParam()
	{
		UScriptStruct::DeferCppStructOps<FCareerSpecialRewardParam>(FName(TEXT("CareerSpecialRewardParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerSpecialRewardParam;
	struct Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExists_MetaData[];
#endif
		static void NewProp_bExists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialog_MetaData[];
#endif
		static void NewProp_bDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialog;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialRewardType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialRewardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialRewardType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InformationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InformationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailsAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailsAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerSpecialRewardParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bExists_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardParam" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bExists_SetBit(void* Obj)
	{
		((FCareerSpecialRewardParam*)Obj)->bExists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bExists = { "bExists", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerSpecialRewardParam), &Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bExists_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bExists_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bExists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardParam" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bDialog_SetBit(void* Obj)
	{
		((FCareerSpecialRewardParam*)Obj)->bDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bDialog = { "bDialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerSpecialRewardParam), &Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bDialog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bDialog_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SpecialRewardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SpecialRewardType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardParam" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SpecialRewardType = { "SpecialRewardType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardParam, SpecialRewardType), Z_Construct_UEnum_ABP_200508_ECareerSpecialReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SpecialRewardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SpecialRewardType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardParam" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardParam, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_InformationText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardParam" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_InformationText = { "InformationText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardParam, InformationText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_InformationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_InformationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_ThumbnailsAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardParam" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_ThumbnailsAssetPath = { "ThumbnailsAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardParam, ThumbnailsAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_ThumbnailsAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_ThumbnailsAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SkillPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardParam" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SkillPoint = { "SkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardParam, SkillPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SkillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SkillPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bExists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_bDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SpecialRewardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SpecialRewardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_InformationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_ThumbnailsAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::NewProp_SkillPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerSpecialRewardParam",
		sizeof(FCareerSpecialRewardParam),
		alignof(FCareerSpecialRewardParam),
		Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerSpecialRewardParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerSpecialRewardParam"), sizeof(FCareerSpecialRewardParam), Get_Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerSpecialRewardParam_Hash() { return 508625835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
