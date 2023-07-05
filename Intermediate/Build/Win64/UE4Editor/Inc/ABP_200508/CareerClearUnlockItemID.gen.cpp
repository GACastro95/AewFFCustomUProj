// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerClearUnlockItemID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerClearUnlockItemID() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerClearUnlockItemID();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerClearUnlockItemID>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerClearUnlockItemID cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerClearUnlockItemID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerClearUnlockItemID, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerClearUnlockItemID"), sizeof(FCareerClearUnlockItemID), Get_Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerClearUnlockItemID>()
{
	return FCareerClearUnlockItemID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerClearUnlockItemID(FCareerClearUnlockItemID::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerClearUnlockItemID"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerClearUnlockItemID
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerClearUnlockItemID()
	{
		UScriptStruct::DeferCppStructOps<FCareerClearUnlockItemID>(FName(TEXT("CareerClearUnlockItemID")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerClearUnlockItemID;
	struct Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerClearUnlockItemID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerClearUnlockItemID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerClearUnlockItemID" },
		{ "ModuleRelativePath", "Public/CareerClearUnlockItemID.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerClearUnlockItemID, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerClearUnlockItemID",
		sizeof(FCareerClearUnlockItemID),
		alignof(FCareerClearUnlockItemID),
		Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerClearUnlockItemID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerClearUnlockItemID"), sizeof(FCareerClearUnlockItemID), Get_Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerClearUnlockItemID_Hash() { return 3871049871U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
