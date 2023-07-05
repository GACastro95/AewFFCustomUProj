// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAbilityResourceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAbilityResourceParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityResourceParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAbilityResourceParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAbilityResourceParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAbilityResourceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAbilityResourceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAbilityResourceParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAbilityResourceParam"), sizeof(FSSAbilityResourceParam), Get_Z_Construct_UScriptStruct_FSSAbilityResourceParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAbilityResourceParam>()
{
	return FSSAbilityResourceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAbilityResourceParam(FSSAbilityResourceParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAbilityResourceParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityResourceParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityResourceParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAbilityResourceParam>(FName(TEXT("SSAbilityResourceParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityResourceParam;
	struct Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImageWithOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImageWithOutline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAbilityResourceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAbilityResourceParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityResourceParam" },
		{ "ModuleRelativePath", "Public/SSAbilityResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityResourceParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityResourceParam" },
		{ "ModuleRelativePath", "Public/SSAbilityResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityResourceParam, IconImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImageWithOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityResourceParam" },
		{ "ModuleRelativePath", "Public/SSAbilityResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImageWithOutline = { "IconImageWithOutline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityResourceParam, IconImageWithOutline), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImageWithOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImageWithOutline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::NewProp_IconImageWithOutline,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAbilityResourceParam",
		sizeof(FSSAbilityResourceParam),
		alignof(FSSAbilityResourceParam),
		Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityResourceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAbilityResourceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAbilityResourceParam"), sizeof(FSSAbilityResourceParam), Get_Z_Construct_UScriptStruct_FSSAbilityResourceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAbilityResourceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAbilityResourceParam_Hash() { return 2845259072U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
