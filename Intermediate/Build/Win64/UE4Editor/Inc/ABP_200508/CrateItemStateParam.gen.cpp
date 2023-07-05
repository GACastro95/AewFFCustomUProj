// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CrateItemStateParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrateItemStateParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCrateItemStateParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCrateItemParam();
// End Cross Module References
class UScriptStruct* FCrateItemStateParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCrateItemStateParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrateItemStateParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CrateItemStateParam"), sizeof(FCrateItemStateParam), Get_Z_Construct_UScriptStruct_FCrateItemStateParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCrateItemStateParam>()
{
	return FCrateItemStateParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrateItemStateParam(FCrateItemStateParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CrateItemStateParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCrateItemStateParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCrateItemStateParam()
	{
		UScriptStruct::DeferCppStructOps<FCrateItemStateParam>(FName(TEXT("CrateItemStateParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCrateItemStateParam;
	struct Z_Construct_UScriptStruct_FCrateItemStateParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEjected_MetaData[];
#endif
		static void NewProp_IsEjected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEjected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CrateItemStateParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrateItemStateParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_ItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrateItemStateParam" },
		{ "ModuleRelativePath", "Public/CrateItemStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_ItemParam = { "ItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrateItemStateParam, ItemParam), Z_Construct_UScriptStruct_FCrateItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_ItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_ItemParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_IsEjected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrateItemStateParam" },
		{ "ModuleRelativePath", "Public/CrateItemStateParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_IsEjected_SetBit(void* Obj)
	{
		((FCrateItemStateParam*)Obj)->IsEjected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_IsEjected = { "IsEjected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCrateItemStateParam), &Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_IsEjected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_IsEjected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_IsEjected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_ItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::NewProp_IsEjected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CrateItemStateParam",
		sizeof(FCrateItemStateParam),
		alignof(FCrateItemStateParam),
		Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrateItemStateParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrateItemStateParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrateItemStateParam"), sizeof(FCrateItemStateParam), Get_Z_Construct_UScriptStruct_FCrateItemStateParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrateItemStateParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrateItemStateParam_Hash() { return 3645897634U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
