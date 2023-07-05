// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventText() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventText();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerEventText>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerEventText cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerEventText::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventText_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventText, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventText"), sizeof(FCareerEventText), Get_Z_Construct_UScriptStruct_FCareerEventText_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventText>()
{
	return FCareerEventText::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventText(FCareerEventText::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventText"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventText
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventText()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventText>(FName(TEXT("CareerEventText")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventText;
	struct Z_Construct_UScriptStruct_FCareerEventText_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Jerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Jerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Confident_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Confident;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Hero_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Hero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Enigma_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Enigma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Monster_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Monster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Quiet_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Quiet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Orange_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Orange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringtableKey_Abadon_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringtableKey_Abadon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventText>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Jerk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Jerk = { "StringtableKey_Jerk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Jerk), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Jerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Jerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Confident_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Confident = { "StringtableKey_Confident", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Confident), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Confident_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Confident_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Hero_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Hero = { "StringtableKey_Hero", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Hero), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Hero_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Hero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Enigma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Enigma = { "StringtableKey_Enigma", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Enigma), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Enigma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Enigma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Monster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Monster = { "StringtableKey_Monster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Monster), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Monster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Monster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Quiet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Quiet = { "StringtableKey_Quiet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Quiet), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Quiet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Quiet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Orange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Orange = { "StringtableKey_Orange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Orange), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Orange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Orange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Abadon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventText" },
		{ "ModuleRelativePath", "Public/CareerEventText.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Abadon = { "StringtableKey_Abadon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventText, StringtableKey_Abadon), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Abadon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Abadon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Jerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Confident,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Hero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Enigma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Monster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Quiet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Orange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventText_Statics::NewProp_StringtableKey_Abadon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerEventText",
		sizeof(FCareerEventText),
		alignof(FCareerEventText),
		Z_Construct_UScriptStruct_FCareerEventText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventText()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventText_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventText"), sizeof(FCareerEventText), Get_Z_Construct_UScriptStruct_FCareerEventText_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventText_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventText_Hash() { return 988413902U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
