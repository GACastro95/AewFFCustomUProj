// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MenuUIDebugParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuUIDebugParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMenuUIDebugParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMenuUIDebugParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMenuUIDebugParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuUIDebugParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MenuUIDebugParam"), sizeof(FMenuUIDebugParam), Get_Z_Construct_UScriptStruct_FMenuUIDebugParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMenuUIDebugParam>()
{
	return FMenuUIDebugParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMenuUIDebugParam(FMenuUIDebugParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MenuUIDebugParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMenuUIDebugParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMenuUIDebugParam()
	{
		UScriptStruct::DeferCppStructOps<FMenuUIDebugParam>(FName(TEXT("MenuUIDebugParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMenuUIDebugParam;
	struct Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMenuUIDebug_MetaData[];
#endif
		static void NewProp_InMenuUIDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InMenuUIDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MenuUIDebugParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuUIDebugParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewProp_InMenuUIDebug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuUIDebugParam" },
		{ "ModuleRelativePath", "Public/MenuUIDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewProp_InMenuUIDebug_SetBit(void* Obj)
	{
		((FMenuUIDebugParam*)Obj)->InMenuUIDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewProp_InMenuUIDebug = { "InMenuUIDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMenuUIDebugParam), &Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewProp_InMenuUIDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewProp_InMenuUIDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewProp_InMenuUIDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::NewProp_InMenuUIDebug,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MenuUIDebugParam",
		sizeof(FMenuUIDebugParam),
		alignof(FMenuUIDebugParam),
		Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMenuUIDebugParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMenuUIDebugParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MenuUIDebugParam"), sizeof(FMenuUIDebugParam), Get_Z_Construct_UScriptStruct_FMenuUIDebugParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMenuUIDebugParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMenuUIDebugParam_Hash() { return 3351323628U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
