// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TutorialDialogResourceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialDialogResourceParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialDialogResourceParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FTutorialDialogResourceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialDialogResourceParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TutorialDialogResourceParam"), sizeof(FTutorialDialogResourceParam), Get_Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTutorialDialogResourceParam>()
{
	return FTutorialDialogResourceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialDialogResourceParam(FTutorialDialogResourceParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TutorialDialogResourceParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTutorialDialogResourceParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTutorialDialogResourceParam()
	{
		UScriptStruct::DeferCppStructOps<FTutorialDialogResourceParam>(FName(TEXT("TutorialDialogResourceParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTutorialDialogResourceParam;
	struct Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DetailText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Picture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Picture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TutorialDialogResourceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialDialogResourceParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialDialogResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialDialogResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialDialogResourceParam, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_DetailText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialDialogResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialDialogResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_DetailText = { "DetailText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialDialogResourceParam, DetailText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_DetailText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_DetailText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_Picture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialDialogResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialDialogResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_Picture = { "Picture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialDialogResourceParam, Picture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_Picture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_Picture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_DetailText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::NewProp_Picture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"TutorialDialogResourceParam",
		sizeof(FTutorialDialogResourceParam),
		alignof(FTutorialDialogResourceParam),
		Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialDialogResourceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialDialogResourceParam"), sizeof(FTutorialDialogResourceParam), Get_Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialDialogResourceParam_Hash() { return 3806492044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
