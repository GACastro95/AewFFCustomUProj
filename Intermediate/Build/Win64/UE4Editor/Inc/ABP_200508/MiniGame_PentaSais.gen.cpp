// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_PentaSais.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_PentaSais() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_PentaSais();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGame_PentaSais::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_PentaSais_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_PentaSais, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_PentaSais"), sizeof(FMiniGame_PentaSais), Get_Z_Construct_UScriptStruct_FMiniGame_PentaSais_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_PentaSais>()
{
	return FMiniGame_PentaSais::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_PentaSais(FMiniGame_PentaSais::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_PentaSais"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_PentaSais
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_PentaSais()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_PentaSais>(FName(TEXT("MiniGame_PentaSais")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_PentaSais;
	struct Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugDispCorrect_MetaData[];
#endif
		static void NewProp_bIsDebugDispCorrect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugDispCorrect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_PentaSais.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_PentaSais>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewProp_bIsDebugDispCorrect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_PentaSais" },
		{ "ModuleRelativePath", "Public/MiniGame_PentaSais.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewProp_bIsDebugDispCorrect_SetBit(void* Obj)
	{
		((FMiniGame_PentaSais*)Obj)->bIsDebugDispCorrect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewProp_bIsDebugDispCorrect = { "bIsDebugDispCorrect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_PentaSais), &Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewProp_bIsDebugDispCorrect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewProp_bIsDebugDispCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewProp_bIsDebugDispCorrect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::NewProp_bIsDebugDispCorrect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_PentaSais",
		sizeof(FMiniGame_PentaSais),
		alignof(FMiniGame_PentaSais),
		Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_PentaSais()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_PentaSais_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_PentaSais"), sizeof(FMiniGame_PentaSais), Get_Z_Construct_UScriptStruct_FMiniGame_PentaSais_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_PentaSais_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_PentaSais_Hash() { return 1304757830U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
