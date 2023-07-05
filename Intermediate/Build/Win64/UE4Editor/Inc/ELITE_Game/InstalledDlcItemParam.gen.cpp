// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/InstalledDlcItemParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstalledDlcItemParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FInstalledDlcItemParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FInstalledDlcItemParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FInstalledDlcItemParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstalledDlcItemParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("InstalledDlcItemParam"), sizeof(FInstalledDlcItemParam), Get_Z_Construct_UScriptStruct_FInstalledDlcItemParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FInstalledDlcItemParam>()
{
	return FInstalledDlcItemParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstalledDlcItemParam(FInstalledDlcItemParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("InstalledDlcItemParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFInstalledDlcItemParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFInstalledDlcItemParam()
	{
		UScriptStruct::DeferCppStructOps<FInstalledDlcItemParam>(FName(TEXT("InstalledDlcItemParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFInstalledDlcItemParam;
	struct Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DlcItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Installed_MetaData[];
#endif
		static void NewProp_Installed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Installed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InstalledDlcItemParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstalledDlcItemParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_DlcItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InstalledDlcItemParam" },
		{ "ModuleRelativePath", "Public/InstalledDlcItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_DlcItemName = { "DlcItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstalledDlcItemParam, DlcItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_DlcItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_DlcItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_Installed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InstalledDlcItemParam" },
		{ "ModuleRelativePath", "Public/InstalledDlcItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_Installed_SetBit(void* Obj)
	{
		((FInstalledDlcItemParam*)Obj)->Installed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_Installed = { "Installed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInstalledDlcItemParam), &Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_Installed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_Installed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_Installed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_DlcItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::NewProp_Installed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"InstalledDlcItemParam",
		sizeof(FInstalledDlcItemParam),
		alignof(FInstalledDlcItemParam),
		Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstalledDlcItemParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstalledDlcItemParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstalledDlcItemParam"), sizeof(FInstalledDlcItemParam), Get_Z_Construct_UScriptStruct_FInstalledDlcItemParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstalledDlcItemParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstalledDlcItemParam_Hash() { return 3393198983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
