// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomProfileItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomProfileItem() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAtomProfileItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomProfileItem, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomProfileItem"), sizeof(FAtomProfileItem), Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomProfileItem>()
{
	return FAtomProfileItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomProfileItem(FAtomProfileItem::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomProfileItem"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomProfileItem
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomProfileItem()
	{
		UScriptStruct::DeferCppStructOps<FAtomProfileItem>(FName(TEXT("AtomProfileItem")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomProfileItem;
	struct Z_Construct_UScriptStruct_FAtomProfileItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtomComponentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomCueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AtomCueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomComponentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromListener_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromListener;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConcurrencyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomProfileItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID = { "AtomComponentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, AtomComponentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName = { "AtomCueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, AtomCueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation = { "AtomComponentLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, AtomComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener = { "DistanceFromListener", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, DistanceFromListener), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime = { "PlayingTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, PlayingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, PlayerState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds = { "NumSounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, NumSounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName = { "ConcurrencyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, ConcurrencyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomProfileItem",
		sizeof(FAtomProfileItem),
		alignof(FAtomProfileItem),
		Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomProfileItem"), sizeof(FAtomProfileItem), Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomProfileItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash() { return 2071582849U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
