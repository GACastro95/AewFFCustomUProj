// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/FootCtrlParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootCtrlParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FFootCtrlParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FFootCtrlParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FFootCtrlParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootCtrlParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("FootCtrlParam"), sizeof(FFootCtrlParam), Get_Z_Construct_UScriptStruct_FFootCtrlParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FFootCtrlParam>()
{
	return FFootCtrlParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootCtrlParam(FFootCtrlParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("FootCtrlParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFFootCtrlParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFFootCtrlParam()
	{
		UScriptStruct::DeferCppStructOps<FFootCtrlParam>(FName(TEXT("FootCtrlParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFFootCtrlParam;
	struct Z_Construct_UScriptStruct_FFootCtrlParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sync_MetaData[];
#endif
		static void NewProp_Sync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffHeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FootCtrlParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootCtrlParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_Sync_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlParam" },
		{ "ModuleRelativePath", "Public/FootCtrlParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_Sync_SetBit(void* Obj)
	{
		((FFootCtrlParam*)Obj)->Sync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_Sync = { "Sync", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootCtrlParam), &Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_Sync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_Sync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_Sync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_DiffHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlParam" },
		{ "ModuleRelativePath", "Public/FootCtrlParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_DiffHeight = { "DiffHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootCtrlParam, DiffHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_DiffHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_DiffHeight_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlParam" },
		{ "ModuleRelativePath", "Public/FootCtrlParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootCtrlParam, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_IgnoreActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootCtrlParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_Sync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_DiffHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_IgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlParam_Statics::NewProp_IgnoreActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootCtrlParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"FootCtrlParam",
		sizeof(FFootCtrlParam),
		alignof(FFootCtrlParam),
		Z_Construct_UScriptStruct_FFootCtrlParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootCtrlParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootCtrlParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootCtrlParam"), sizeof(FFootCtrlParam), Get_Z_Construct_UScriptStruct_FFootCtrlParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootCtrlParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootCtrlParam_Hash() { return 3677788039U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
