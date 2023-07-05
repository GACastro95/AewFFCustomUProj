// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerCAWHeightConvert.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerCAWHeightConvert() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerCAWHeightConvert();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyHeightType();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerCAWHeightConvert>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerCAWHeightConvert cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerCAWHeightConvert::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerCAWHeightConvert, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerCAWHeightConvert"), sizeof(FCareerCAWHeightConvert), Get_Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerCAWHeightConvert>()
{
	return FCareerCAWHeightConvert::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerCAWHeightConvert(FCareerCAWHeightConvert::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerCAWHeightConvert"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCAWHeightConvert
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCAWHeightConvert()
	{
		UScriptStruct::DeferCppStructOps<FCareerCAWHeightConvert>(FName(TEXT("CareerCAWHeightConvert")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerCAWHeightConvert;
	struct Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeightType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerCAWHeightConvert.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerCAWHeightConvert>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCAWHeightConvert" },
		{ "ModuleRelativePath", "Public/CareerCAWHeightConvert.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCAWHeightConvert, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_HeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_HeightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCAWHeightConvert" },
		{ "ModuleRelativePath", "Public/CareerCAWHeightConvert.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_HeightType = { "HeightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCAWHeightConvert, HeightType), Z_Construct_UEnum_ELITE_Game_EBodyHeightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_HeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_HeightType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_HeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::NewProp_HeightType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerCAWHeightConvert",
		sizeof(FCareerCAWHeightConvert),
		alignof(FCareerCAWHeightConvert),
		Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerCAWHeightConvert()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerCAWHeightConvert"), sizeof(FCareerCAWHeightConvert), Get_Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerCAWHeightConvert_Hash() { return 3785702057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
