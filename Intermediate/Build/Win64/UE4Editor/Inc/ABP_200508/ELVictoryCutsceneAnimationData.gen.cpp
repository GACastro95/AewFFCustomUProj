// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELVictoryCutsceneAnimationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELVictoryCutsceneAnimationData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation();
// End Cross Module References

static_assert(std::is_polymorphic<FELVictoryCutsceneAnimationData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELVictoryCutsceneAnimationData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELVictoryCutsceneAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELVictoryCutsceneAnimationData"), sizeof(FELVictoryCutsceneAnimationData), Get_Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELVictoryCutsceneAnimationData>()
{
	return FELVictoryCutsceneAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELVictoryCutsceneAnimationData(FELVictoryCutsceneAnimationData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELVictoryCutsceneAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneAnimationData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneAnimationData()
	{
		UScriptStruct::DeferCppStructOps<FELVictoryCutsceneAnimationData>(FName(TEXT("ELVictoryCutsceneAnimationData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneAnimationData;
	struct Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Winner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerCastID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinnerCastID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Partner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Partner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartnerCastID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartnerCastID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneAnimationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELVictoryCutsceneAnimationData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneAnimationData, Type), Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneAnimationData, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Winner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneAnimationData, Winner), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Winner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Winner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_WinnerCastID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_WinnerCastID = { "WinnerCastID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneAnimationData, WinnerCastID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_WinnerCastID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_WinnerCastID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Partner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Partner = { "Partner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneAnimationData, Partner), Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Partner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Partner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_PartnerCastID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_PartnerCastID = { "PartnerCastID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneAnimationData, PartnerCastID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_PartnerCastID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_PartnerCastID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Winner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_WinnerCastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_Partner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::NewProp_PartnerCastID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELVictoryCutsceneAnimationData",
		sizeof(FELVictoryCutsceneAnimationData),
		alignof(FELVictoryCutsceneAnimationData),
		Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELVictoryCutsceneAnimationData"), sizeof(FELVictoryCutsceneAnimationData), Get_Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneAnimationData_Hash() { return 3915904480U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
