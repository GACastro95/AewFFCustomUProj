// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ErrTypeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrTypeInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FErrTypeInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FErrTypeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FErrTypeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FErrTypeInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ErrTypeInfo"), sizeof(FErrTypeInfo), Get_Z_Construct_UScriptStruct_FErrTypeInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FErrTypeInfo>()
{
	return FErrTypeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FErrTypeInfo(FErrTypeInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ErrTypeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFErrTypeInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFErrTypeInfo()
	{
		UScriptStruct::DeferCppStructOps<FErrTypeInfo>(FName(TEXT("ErrTypeInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFErrTypeInfo;
	struct Z_Construct_UScriptStruct_FErrTypeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isScreenShot_MetaData[];
#endif
		static void NewProp_isScreenShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isScreenShot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrTypeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ErrTypeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErrTypeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_ErrTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrTypeInfo" },
		{ "ModuleRelativePath", "Public/ErrTypeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_ErrTitle = { "ErrTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrTypeInfo, ErrTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_ErrTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_ErrTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_isScreenShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrTypeInfo" },
		{ "ModuleRelativePath", "Public/ErrTypeInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_isScreenShot_SetBit(void* Obj)
	{
		((FErrTypeInfo*)Obj)->isScreenShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_isScreenShot = { "isScreenShot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FErrTypeInfo), &Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_isScreenShot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_isScreenShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_isScreenShot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FErrTypeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_ErrTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrTypeInfo_Statics::NewProp_isScreenShot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErrTypeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ErrTypeInfo",
		sizeof(FErrTypeInfo),
		alignof(FErrTypeInfo),
		Z_Construct_UScriptStruct_FErrTypeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrTypeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FErrTypeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrTypeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FErrTypeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FErrTypeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ErrTypeInfo"), sizeof(FErrTypeInfo), Get_Z_Construct_UScriptStruct_FErrTypeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FErrTypeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FErrTypeInfo_Hash() { return 3405369800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
