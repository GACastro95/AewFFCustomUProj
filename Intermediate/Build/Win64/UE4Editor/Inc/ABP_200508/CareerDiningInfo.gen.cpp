// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerDiningInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerDiningInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerDiningInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerDiningInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerDiningInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerDiningInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerDiningInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerDiningInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerDiningInfo"), sizeof(FCareerDiningInfo), Get_Z_Construct_UScriptStruct_FCareerDiningInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerDiningInfo>()
{
	return FCareerDiningInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerDiningInfo(FCareerDiningInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerDiningInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerDiningInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerDiningInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerDiningInfo>(FName(TEXT("CareerDiningInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerDiningInfo;
	struct Z_Construct_UScriptStruct_FCareerDiningInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrantKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RestrantKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodNameKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FoodNameKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodIntroductionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FoodIntroductionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FoodImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodNameKey_Veg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FoodNameKey_Veg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodIntroductionKey_Veg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FoodIntroductionKey_Veg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodImage_Veg_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FoodImage_Veg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerDiningInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_RestrantKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerDiningInfo" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_RestrantKey = { "RestrantKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerDiningInfo, RestrantKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_RestrantKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_RestrantKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerDiningInfo" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey = { "FoodNameKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerDiningInfo, FoodNameKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerDiningInfo" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey = { "FoodIntroductionKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerDiningInfo, FoodIntroductionKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerDiningInfo" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage = { "FoodImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerDiningInfo, FoodImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_Veg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerDiningInfo" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_Veg = { "FoodNameKey_Veg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerDiningInfo, FoodNameKey_Veg), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_Veg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_Veg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_Veg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerDiningInfo" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_Veg = { "FoodIntroductionKey_Veg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerDiningInfo, FoodIntroductionKey_Veg), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_Veg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_Veg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_Veg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerDiningInfo" },
		{ "ModuleRelativePath", "Public/CareerDiningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_Veg = { "FoodImage_Veg", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerDiningInfo, FoodImage_Veg), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_Veg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_Veg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_RestrantKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodNameKey_Veg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodIntroductionKey_Veg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::NewProp_FoodImage_Veg,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerDiningInfo",
		sizeof(FCareerDiningInfo),
		alignof(FCareerDiningInfo),
		Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerDiningInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerDiningInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerDiningInfo"), sizeof(FCareerDiningInfo), Get_Z_Construct_UScriptStruct_FCareerDiningInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerDiningInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerDiningInfo_Hash() { return 1464834688U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
