// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditItem_Common.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditItem_Common() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Common();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Base();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
// End Cross Module References

static_assert(std::is_polymorphic<FEditItem_Common>() == std::is_polymorphic<FEditItem_Base>(), "USTRUCT FEditItem_Common cannot be polymorphic unless super FEditItem_Base is polymorphic");

class UScriptStruct* FEditItem_Common::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditItem_Common_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditItem_Common, Z_Construct_UPackage__Script_Creation(), TEXT("EditItem_Common"), sizeof(FEditItem_Common), Get_Z_Construct_UScriptStruct_FEditItem_Common_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditItem_Common>()
{
	return FEditItem_Common::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditItem_Common(FEditItem_Common::StaticStruct, TEXT("/Script/Creation"), TEXT("EditItem_Common"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditItem_Common
{
	FScriptStruct_Creation_StaticRegisterNativesFEditItem_Common()
	{
		UScriptStruct::DeferCppStructOps<FEditItem_Common>(FName(TEXT("EditItem_Common")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditItem_Common;
	struct Z_Construct_UScriptStruct_FEditItem_Common_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnails_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockItemState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Common_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditItem_Common.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditItem_Common>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Common" },
		{ "ModuleRelativePath", "Public/EditItem_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Common, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Common" },
		{ "ModuleRelativePath", "Public/EditItem_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Common, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_Thumbnails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Common" },
		{ "ModuleRelativePath", "Public/EditItem_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_Thumbnails = { "Thumbnails", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Common, Thumbnails), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_Thumbnails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_Thumbnails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_UnlockItemState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Common" },
		{ "ModuleRelativePath", "Public/EditItem_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_UnlockItemState = { "UnlockItemState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Common, UnlockItemState), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_UnlockItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_UnlockItemState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditItem_Common_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_Thumbnails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Common_Statics::NewProp_UnlockItemState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditItem_Common_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FEditItem_Base,
		&NewStructOps,
		"EditItem_Common",
		sizeof(FEditItem_Common),
		alignof(FEditItem_Common),
		Z_Construct_UScriptStruct_FEditItem_Common_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Common_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Common_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Common_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Common()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditItem_Common_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditItem_Common"), sizeof(FEditItem_Common), Get_Z_Construct_UScriptStruct_FEditItem_Common_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditItem_Common_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditItem_Common_Hash() { return 2347602531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
