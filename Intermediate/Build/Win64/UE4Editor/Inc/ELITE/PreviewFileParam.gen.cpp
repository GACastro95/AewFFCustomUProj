// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/PreviewFileParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewFileParam() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewFileParam();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
class UScriptStruct* FPreviewFileParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewFileParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewFileParam, Z_Construct_UPackage__Script_ELITE(), TEXT("PreviewFileParam"), sizeof(FPreviewFileParam), Get_Z_Construct_UScriptStruct_FPreviewFileParam_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FPreviewFileParam>()
{
	return FPreviewFileParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewFileParam(FPreviewFileParam::StaticStruct, TEXT("/Script/ELITE"), TEXT("PreviewFileParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFPreviewFileParam
{
	FScriptStruct_ELITE_StaticRegisterNativesFPreviewFileParam()
	{
		UScriptStruct::DeferCppStructOps<FPreviewFileParam>(FName(TEXT("PreviewFileParam")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFPreviewFileParam;
	struct Z_Construct_UScriptStruct_FPreviewFileParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAuto_MetaData[];
#endif
		static void NewProp_IsAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAuto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewFileParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PreviewFileParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewFileParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_FirstFileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PreviewFileParam" },
		{ "ModuleRelativePath", "Public/PreviewFileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_FirstFileName = { "FirstFileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewFileParam, FirstFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_FirstFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_FirstFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_SaveDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PreviewFileParam" },
		{ "ModuleRelativePath", "Public/PreviewFileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewFileParam, SaveDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_SaveDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_SaveDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_Extension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PreviewFileParam" },
		{ "ModuleRelativePath", "Public/PreviewFileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewFileParam, Extension), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_IsAuto_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PreviewFileParam" },
		{ "ModuleRelativePath", "Public/PreviewFileParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_IsAuto_SetBit(void* Obj)
	{
		((FPreviewFileParam*)Obj)->IsAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_IsAuto = { "IsAuto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPreviewFileParam), &Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_IsAuto_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_IsAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_IsAuto_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewFileParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_FirstFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_SaveDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_Extension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewFileParam_Statics::NewProp_IsAuto,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewFileParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"PreviewFileParam",
		sizeof(FPreviewFileParam),
		alignof(FPreviewFileParam),
		Z_Construct_UScriptStruct_FPreviewFileParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewFileParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewFileParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewFileParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewFileParam"), sizeof(FPreviewFileParam), Get_Z_Construct_UScriptStruct_FPreviewFileParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPreviewFileParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewFileParam_Hash() { return 3387759097U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
