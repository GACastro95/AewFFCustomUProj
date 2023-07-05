// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/PossessedItemParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePossessedItemParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemExtendTarget();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPossessedItemParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPossessedItemParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPossessedItemParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FPossessedItemParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPossessedItemParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("PossessedItemParam"), sizeof(FPossessedItemParam), Get_Z_Construct_UScriptStruct_FPossessedItemParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FPossessedItemParam>()
{
	return FPossessedItemParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPossessedItemParam(FPossessedItemParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("PossessedItemParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFPossessedItemParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFPossessedItemParam()
	{
		UScriptStruct::DeferCppStructOps<FPossessedItemParam>(FName(TEXT("PossessedItemParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFPossessedItemParam;
	struct Z_Construct_UScriptStruct_FPossessedItemParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExtendTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExtendTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkWrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinkWrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConsumeTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumeTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConsumeTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPossessNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialPossessNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailsAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailsAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPossessedItemParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_UniqueID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, ItemType), Z_Construct_UEnum_ELITE_Game_EPossessedItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ExtendTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ExtendTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ExtendTarget = { "ExtendTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, ExtendTarget), Z_Construct_UEnum_ELITE_Game_EPossessedItemExtendTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ExtendTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ExtendTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_LinkWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_LinkWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_LinkWrestlerID = { "LinkWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, LinkWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_LinkWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_LinkWrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ConsumeTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ConsumeTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ConsumeTarget = { "ConsumeTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, ConsumeTarget), Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ConsumeTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ConsumeTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_InitialPossessNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_InitialPossessNum = { "InitialPossessNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, InitialPossessNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_InitialPossessNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_InitialPossessNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_MaxNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_MaxNum = { "MaxNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, MaxNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_MaxNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_MaxNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemPrice = { "ItemPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, ItemPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ThumbnailsAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ThumbnailsAssetPath = { "ThumbnailsAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, ThumbnailsAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ThumbnailsAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ThumbnailsAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_DisplayItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemParam" },
		{ "ModuleRelativePath", "Public/PossessedItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_DisplayItemName = { "DisplayItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemParam, DisplayItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_DisplayItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_DisplayItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPossessedItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ExtendTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ExtendTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_LinkWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_LinkWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ConsumeTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ConsumeTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_InitialPossessNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_MaxNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ItemPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_ThumbnailsAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemParam_Statics::NewProp_DisplayItemName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPossessedItemParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PossessedItemParam",
		sizeof(FPossessedItemParam),
		alignof(FPossessedItemParam),
		Z_Construct_UScriptStruct_FPossessedItemParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPossessedItemParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PossessedItemParam"), sizeof(FPossessedItemParam), Get_Z_Construct_UScriptStruct_FPossessedItemParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPossessedItemParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPossessedItemParam_Hash() { return 881946705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
