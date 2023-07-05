// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditColorGroupID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditColorGroupID() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorGroupID();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPickableItemID();
// End Cross Module References

static_assert(std::is_polymorphic<FEditColorGroupID>() == std::is_polymorphic<FPickableItemID>(), "USTRUCT FEditColorGroupID cannot be polymorphic unless super FPickableItemID is polymorphic");

class UScriptStruct* FEditColorGroupID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditColorGroupID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditColorGroupID, Z_Construct_UPackage__Script_Creation(), TEXT("EditColorGroupID"), sizeof(FEditColorGroupID), Get_Z_Construct_UScriptStruct_FEditColorGroupID_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditColorGroupID>()
{
	return FEditColorGroupID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditColorGroupID(FEditColorGroupID::StaticStruct, TEXT("/Script/Creation"), TEXT("EditColorGroupID"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditColorGroupID
{
	FScriptStruct_Creation_StaticRegisterNativesFEditColorGroupID()
	{
		UScriptStruct::DeferCppStructOps<FEditColorGroupID>(FName(TEXT("EditColorGroupID")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditColorGroupID;
	struct Z_Construct_UScriptStruct_FEditColorGroupID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorGroupID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditColorGroupID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditColorGroupID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditColorGroupID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditColorGroupID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FPickableItemID,
		&NewStructOps,
		"EditColorGroupID",
		sizeof(FEditColorGroupID),
		alignof(FEditColorGroupID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorGroupID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorGroupID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditColorGroupID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditColorGroupID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditColorGroupID"), sizeof(FEditColorGroupID), Get_Z_Construct_UScriptStruct_FEditColorGroupID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditColorGroupID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditColorGroupID_Hash() { return 1110286004U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
