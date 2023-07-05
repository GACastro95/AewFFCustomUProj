// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/BattlePassRewardItemParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattlePassRewardItemParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassRewardItemParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EBattlePassRewardItemType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FBattlePassRewardItemParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBattlePassRewardItemParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBattlePassRewardItemParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBattlePassRewardItemParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("BattlePassRewardItemParam"), sizeof(FBattlePassRewardItemParam), Get_Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FBattlePassRewardItemParam>()
{
	return FBattlePassRewardItemParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBattlePassRewardItemParam(FBattlePassRewardItemParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("BattlePassRewardItemParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassRewardItemParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassRewardItemParam()
	{
		UScriptStruct::DeferCppStructOps<FBattlePassRewardItemParam>(FName(TEXT("BattlePassRewardItemParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassRewardItemParam;
	struct Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeasonNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNeedPremiumPass_MetaData[];
#endif
		static void NewProp_IsNeedPremiumPass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNeedPremiumPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayItemDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayItemDetail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBattlePassRewardItemParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_SeasonNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_SeasonNo = { "SeasonNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardItemParam, SeasonNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_SeasonNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_SeasonNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardItemParam, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardItemParam, ItemType), Z_Construct_UEnum_ABP_200508_EBattlePassRewardItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_IsNeedPremiumPass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_IsNeedPremiumPass_SetBit(void* Obj)
	{
		((FBattlePassRewardItemParam*)Obj)->IsNeedPremiumPass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_IsNeedPremiumPass = { "IsNeedPremiumPass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBattlePassRewardItemParam), &Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_IsNeedPremiumPass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_IsNeedPremiumPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_IsNeedPremiumPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardItemParam, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardItemParam, ItemQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_PreviewAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_PreviewAssetPath = { "PreviewAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardItemParam, PreviewAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_PreviewAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_PreviewAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_DisplayItemDetail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardItemParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_DisplayItemDetail = { "DisplayItemDetail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardItemParam, DisplayItemDetail), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_DisplayItemDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_DisplayItemDetail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_SeasonNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_IsNeedPremiumPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_ItemQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_PreviewAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::NewProp_DisplayItemDetail,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BattlePassRewardItemParam",
		sizeof(FBattlePassRewardItemParam),
		alignof(FBattlePassRewardItemParam),
		Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBattlePassRewardItemParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BattlePassRewardItemParam"), sizeof(FBattlePassRewardItemParam), Get_Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBattlePassRewardItemParam_Hash() { return 740193983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
