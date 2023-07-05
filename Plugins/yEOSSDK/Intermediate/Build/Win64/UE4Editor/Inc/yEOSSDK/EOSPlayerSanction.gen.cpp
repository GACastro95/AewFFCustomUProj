// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSPlayerSanction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPlayerSanction() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerSanction();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FEOSPlayerSanction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerSanction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSPlayerSanction, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSPlayerSanction"), sizeof(FEOSPlayerSanction), Get_Z_Construct_UScriptStruct_FEOSPlayerSanction_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSPlayerSanction>()
{
	return FEOSPlayerSanction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSPlayerSanction(FEOSPlayerSanction::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSPlayerSanction"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerSanction
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerSanction()
	{
		UScriptStruct::DeferCppStructOps<FEOSPlayerSanction>(FName(TEXT("EOSPlayerSanction")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerSanction;
	struct Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimePlaced_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimePlaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSPlayerSanction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSPlayerSanction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_TimePlaced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerSanction" },
		{ "ModuleRelativePath", "Public/EOSPlayerSanction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_TimePlaced = { "TimePlaced", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerSanction, TimePlaced), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_TimePlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_TimePlaced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerSanction" },
		{ "ModuleRelativePath", "Public/EOSPlayerSanction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerSanction, Action), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_TimePlaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::NewProp_Action,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSPlayerSanction",
		sizeof(FEOSPlayerSanction),
		alignof(FEOSPlayerSanction),
		Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerSanction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerSanction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSPlayerSanction"), sizeof(FEOSPlayerSanction), Get_Z_Construct_UScriptStruct_FEOSPlayerSanction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSPlayerSanction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerSanction_Hash() { return 1539755059U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
