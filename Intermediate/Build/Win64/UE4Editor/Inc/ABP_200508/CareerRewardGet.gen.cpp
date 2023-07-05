// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRewardGet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRewardGet() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRewardGet();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRewardGetType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRewardEffectType();
// End Cross Module References
class UScriptStruct* FCareerRewardGet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRewardGet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRewardGet, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRewardGet"), sizeof(FCareerRewardGet), Get_Z_Construct_UScriptStruct_FCareerRewardGet_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRewardGet>()
{
	return FCareerRewardGet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRewardGet(FCareerRewardGet::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRewardGet"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardGet
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardGet()
	{
		UScriptStruct::DeferCppStructOps<FCareerRewardGet>(FName(TEXT("CareerRewardGet")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardGet;
	struct Z_Construct_UScriptStruct_FCareerRewardGet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRewardGetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRewardGetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRewardGetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlag_MetaData[];
#endif
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eEffectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextKeyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleTextKeyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageTextKeyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageTextKeyID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardGet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRewardGet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRewardGet>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eRewardGetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eRewardGetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardGet" },
		{ "ModuleRelativePath", "Public/CareerRewardGet.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eRewardGetType = { "eRewardGetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardGet, eRewardGetType), Z_Construct_UEnum_ABP_200508_ECareerRewardGetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eRewardGetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eRewardGetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_sValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardGet" },
		{ "ModuleRelativePath", "Public/CareerRewardGet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_sValue = { "sValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardGet, sValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_sValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_sValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_bFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardGet" },
		{ "ModuleRelativePath", "Public/CareerRewardGet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((FCareerRewardGet*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerRewardGet), &Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_bFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_bFlag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eEffectType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardGet" },
		{ "ModuleRelativePath", "Public/CareerRewardGet.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eEffectType = { "eEffectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardGet, eEffectType), Z_Construct_UEnum_ABP_200508_ECareerRewardEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eEffectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_TitleTextKeyID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardGet" },
		{ "ModuleRelativePath", "Public/CareerRewardGet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_TitleTextKeyID = { "TitleTextKeyID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardGet, TitleTextKeyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_TitleTextKeyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_TitleTextKeyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_MessageTextKeyID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardGet" },
		{ "ModuleRelativePath", "Public/CareerRewardGet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_MessageTextKeyID = { "MessageTextKeyID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardGet, MessageTextKeyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_MessageTextKeyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_MessageTextKeyID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRewardGet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eRewardGetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eRewardGetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_sValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_bFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_eEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_TitleTextKeyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardGet_Statics::NewProp_MessageTextKeyID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRewardGet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerRewardGet",
		sizeof(FCareerRewardGet),
		alignof(FCareerRewardGet),
		Z_Construct_UScriptStruct_FCareerRewardGet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardGet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRewardGet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRewardGet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRewardGet"), sizeof(FCareerRewardGet), Get_Z_Construct_UScriptStruct_FCareerRewardGet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRewardGet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRewardGet_Hash() { return 2511145947U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
