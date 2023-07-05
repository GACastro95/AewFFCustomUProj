// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/PickableItemID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableItemID() {}
// Cross Module References
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPickableItemID();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
class UScriptStruct* FPickableItemID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_CORE_API uint32 Get_Z_Construct_UScriptStruct_FPickableItemID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickableItemID, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("PickableItemID"), sizeof(FPickableItemID), Get_Z_Construct_UScriptStruct_FPickableItemID_Hash());
	}
	return Singleton;
}
template<> ELITE_CORE_API UScriptStruct* StaticStruct<FPickableItemID>()
{
	return FPickableItemID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPickableItemID(FPickableItemID::StaticStruct, TEXT("/Script/ELITE_Core"), TEXT("PickableItemID"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Core_StaticRegisterNativesFPickableItemID
{
	FScriptStruct_ELITE_Core_StaticRegisterNativesFPickableItemID()
	{
		UScriptStruct::DeferCppStructOps<FPickableItemID>(FName(TEXT("PickableItemID")));
	}
} ScriptStruct_ELITE_Core_StaticRegisterNativesFPickableItemID;
	struct Z_Construct_UScriptStruct_FPickableItemID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickableItemID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PickableItemID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPickableItemID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickableItemID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickableItemID_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PickableItemID" },
		{ "ModuleRelativePath", "Public/PickableItemID.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPickableItemID_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickableItemID, UID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPickableItemID_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickableItemID_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickableItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickableItemID_Statics::NewProp_UID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickableItemID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
		nullptr,
		&NewStructOps,
		"PickableItemID",
		sizeof(FPickableItemID),
		alignof(FPickableItemID),
		Z_Construct_UScriptStruct_FPickableItemID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickableItemID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPickableItemID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickableItemID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPickableItemID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPickableItemID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PickableItemID"), sizeof(FPickableItemID), Get_Z_Construct_UScriptStruct_FPickableItemID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPickableItemID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPickableItemID_Hash() { return 4271767379U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
