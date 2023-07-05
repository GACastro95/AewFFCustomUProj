// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerUseTurnSubMenuCursor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerUseTurnSubMenuCursor() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerUseTurnActonImage();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventMark();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRegularRewardInfo();
// End Cross Module References
class UScriptStruct* FCareerUseTurnSubMenuCursor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerUseTurnSubMenuCursor"), sizeof(FCareerUseTurnSubMenuCursor), Get_Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerUseTurnSubMenuCursor>()
{
	return FCareerUseTurnSubMenuCursor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerUseTurnSubMenuCursor(FCareerUseTurnSubMenuCursor::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerUseTurnSubMenuCursor"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerUseTurnSubMenuCursor
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerUseTurnSubMenuCursor()
	{
		UScriptStruct::DeferCppStructOps<FCareerUseTurnSubMenuCursor>(FName(TEXT("CareerUseTurnSubMenuCursor")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerUseTurnSubMenuCursor;
	struct Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eActionImage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eActionImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eActionImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SubText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventMark_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventMark_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventMark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuryRisk_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InjuryRisk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecisionCommandOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DecisionCommandOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularRewardInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegularRewardInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerUseTurnSubMenuCursor>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_eActionImage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_eActionImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnSubMenuCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_eActionImage = { "eActionImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnSubMenuCursor, eActionImage), Z_Construct_UEnum_ABP_200508_ECareerUseTurnActonImage, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_eActionImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_eActionImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnSubMenuCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnSubMenuCursor, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_SubText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnSubMenuCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_SubText = { "SubText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnSubMenuCursor, SubText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_SubText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_SubText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_EventMark_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_EventMark_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnSubMenuCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_EventMark = { "EventMark", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnSubMenuCursor, EventMark), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventMark, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_EventMark_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_EventMark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_InjuryRisk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnSubMenuCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_InjuryRisk = { "InjuryRisk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnSubMenuCursor, InjuryRisk), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_InjuryRisk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_InjuryRisk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_DecisionCommandOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnSubMenuCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_DecisionCommandOffset = { "DecisionCommandOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnSubMenuCursor, DecisionCommandOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_DecisionCommandOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_DecisionCommandOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_RegularRewardInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnSubMenuCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnSubMenuCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_RegularRewardInfo = { "RegularRewardInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnSubMenuCursor, RegularRewardInfo), Z_Construct_UScriptStruct_FCareerRegularRewardInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_RegularRewardInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_RegularRewardInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_eActionImage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_eActionImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_SubText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_EventMark_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_EventMark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_InjuryRisk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_DecisionCommandOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::NewProp_RegularRewardInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerUseTurnSubMenuCursor",
		sizeof(FCareerUseTurnSubMenuCursor),
		alignof(FCareerUseTurnSubMenuCursor),
		Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerUseTurnSubMenuCursor"), sizeof(FCareerUseTurnSubMenuCursor), Get_Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerUseTurnSubMenuCursor_Hash() { return 4070944741U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
