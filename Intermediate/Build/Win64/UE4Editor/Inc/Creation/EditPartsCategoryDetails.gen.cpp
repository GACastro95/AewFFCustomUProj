// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPartsCategoryDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPartsCategoryDetails() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryDetails();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FEditPartsCategoryDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPartsCategoryDetails, Z_Construct_UPackage__Script_Creation(), TEXT("EditPartsCategoryDetails"), sizeof(FEditPartsCategoryDetails), Get_Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPartsCategoryDetails>()
{
	return FEditPartsCategoryDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPartsCategoryDetails(FEditPartsCategoryDetails::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPartsCategoryDetails"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryDetails
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryDetails()
	{
		UScriptStruct::DeferCppStructOps<FEditPartsCategoryDetails>(FName(TEXT("EditPartsCategoryDetails")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryDetails;
	struct Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPartsCategoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPartsCategoryData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inheritance_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inheritance_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Inheritance;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IncompatibleCategoryIcons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncompatibleCategoryIcons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncompatibleCategoryIcons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPartsCategoryDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryDetails" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryDetails, Category), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_EditPartsCategoryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryDetails" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_EditPartsCategoryData = { "EditPartsCategoryData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryDetails, EditPartsCategoryData), Z_Construct_UScriptStruct_FEditPartsCategoryData, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_EditPartsCategoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_EditPartsCategoryData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Inheritance_ElementProp = { "Inheritance", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Inheritance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryDetails" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Inheritance = { "Inheritance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryDetails, Inheritance), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Inheritance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Inheritance_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_IncompatibleCategoryIcons_Inner = { "IncompatibleCategoryIcons", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_IncompatibleCategoryIcons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryDetails" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_IncompatibleCategoryIcons = { "IncompatibleCategoryIcons", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryDetails, IncompatibleCategoryIcons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_IncompatibleCategoryIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_IncompatibleCategoryIcons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_EditPartsCategoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Inheritance_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_Inheritance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_IncompatibleCategoryIcons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::NewProp_IncompatibleCategoryIcons,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditPartsCategoryDetails",
		sizeof(FEditPartsCategoryDetails),
		alignof(FEditPartsCategoryDetails),
		Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPartsCategoryDetails"), sizeof(FEditPartsCategoryDetails), Get_Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryDetails_Hash() { return 3829068655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
