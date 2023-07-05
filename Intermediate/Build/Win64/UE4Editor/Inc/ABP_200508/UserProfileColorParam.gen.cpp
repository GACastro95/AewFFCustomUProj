// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UserProfileColorParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfileColorParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FUserProfileColorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FUserProfileColorParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserProfileColorParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("UserProfileColorParam"), sizeof(FUserProfileColorParam), Get_Z_Construct_UScriptStruct_FUserProfileColorParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FUserProfileColorParam>()
{
	return FUserProfileColorParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserProfileColorParam(FUserProfileColorParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("UserProfileColorParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileColorParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileColorParam()
	{
		UScriptStruct::DeferCppStructOps<FUserProfileColorParam>(FName(TEXT("UserProfileColorParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileColorParam;
	struct Z_Construct_UScriptStruct_FUserProfileColorParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorListIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorListIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedColorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserProfileColorParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserProfileColorParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileColorParam" },
		{ "ModuleRelativePath", "Public/UserProfileColorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileColorParam, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_ColorListIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileColorParam" },
		{ "ModuleRelativePath", "Public/UserProfileColorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_ColorListIndex = { "ColorListIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileColorParam, ColorListIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_ColorListIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_ColorListIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_SelectedColorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileColorParam" },
		{ "ModuleRelativePath", "Public/UserProfileColorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_SelectedColorIndex = { "SelectedColorIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileColorParam, SelectedColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_SelectedColorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_SelectedColorIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_ColorListIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::NewProp_SelectedColorIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"UserProfileColorParam",
		sizeof(FUserProfileColorParam),
		alignof(FUserProfileColorParam),
		Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserProfileColorParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserProfileColorParam"), sizeof(FUserProfileColorParam), Get_Z_Construct_UScriptStruct_FUserProfileColorParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserProfileColorParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserProfileColorParam_Hash() { return 2883088018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
