// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuSubMenuDefaultParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuSubMenuDefaultParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELDebugMenuSubMenuDefaultParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELDebugMenuSubMenuDefaultParam"), sizeof(FELDebugMenuSubMenuDefaultParam), Get_Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELDebugMenuSubMenuDefaultParam>()
{
	return FELDebugMenuSubMenuDefaultParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELDebugMenuSubMenuDefaultParam(FELDebugMenuSubMenuDefaultParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELDebugMenuSubMenuDefaultParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSubMenuDefaultParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSubMenuDefaultParam()
	{
		UScriptStruct::DeferCppStructOps<FELDebugMenuSubMenuDefaultParam>(FName(TEXT("ELDebugMenuSubMenuDefaultParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSubMenuDefaultParam;
	struct Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableNameSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringTableNameSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuDefaultParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELDebugMenuSubMenuDefaultParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSubMenuDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSubMenuDefaultParam, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSubMenuDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace = { "StringTableNameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSubMenuDefaultParam, StringTableNameSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELDebugMenuSubMenuDefaultParam",
		sizeof(FELDebugMenuSubMenuDefaultParam),
		alignof(FELDebugMenuSubMenuDefaultParam),
		Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELDebugMenuSubMenuDefaultParam"), sizeof(FELDebugMenuSubMenuDefaultParam), Get_Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam_Hash() { return 345813446U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
