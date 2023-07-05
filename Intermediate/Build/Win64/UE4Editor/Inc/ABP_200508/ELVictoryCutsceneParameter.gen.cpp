// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELVictoryCutsceneParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELVictoryCutsceneParameter() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneParameter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneTransformAndAnimationMatchType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation();
// End Cross Module References

static_assert(std::is_polymorphic<FELVictoryCutsceneParameter>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELVictoryCutsceneParameter cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELVictoryCutsceneParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELVictoryCutsceneParameter"), sizeof(FELVictoryCutsceneParameter), Get_Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELVictoryCutsceneParameter>()
{
	return FELVictoryCutsceneParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELVictoryCutsceneParameter(FELVictoryCutsceneParameter::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELVictoryCutsceneParameter"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneParameter
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneParameter()
	{
		UScriptStruct::DeferCppStructOps<FELVictoryCutsceneParameter>(FName(TEXT("ELVictoryCutsceneParameter")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneParameter;
	struct Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinnerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinnerRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoserPartner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoserPartner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinnerManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoserManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourthPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FourthPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_referee_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_referee;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELVictoryCutsceneParameter>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, MatchType), Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneTransformAndAnimationMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_MatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerLocation = { "WinnerLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, WinnerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerRotation = { "WinnerRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, WinnerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_Loser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_Loser = { "Loser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, Loser), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_Loser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_Loser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserPartner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserPartner = { "LoserPartner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, LoserPartner), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserPartner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserPartner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerManager = { "WinnerManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, WinnerManager), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserManager = { "LoserManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, LoserManager), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_ThirdPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_ThirdPerson = { "ThirdPerson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, ThirdPerson), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_ThirdPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_ThirdPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_FourthPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_FourthPerson = { "FourthPerson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, FourthPerson), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_FourthPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_FourthPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_referee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneParameter" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_referee = { "referee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneParameter, referee), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_referee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_referee_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_Loser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserPartner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_WinnerManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_LoserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_ThirdPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_FourthPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::NewProp_referee,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELVictoryCutsceneParameter",
		sizeof(FELVictoryCutsceneParameter),
		alignof(FELVictoryCutsceneParameter),
		Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELVictoryCutsceneParameter"), sizeof(FELVictoryCutsceneParameter), Get_Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneParameter_Hash() { return 1099237201U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
