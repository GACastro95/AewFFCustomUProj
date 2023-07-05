// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditParts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditParts() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditParts();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorParam();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireCondition();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGenderConditions();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFaceType();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FEditParts>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEditParts cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FEditParts::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditParts_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditParts, Z_Construct_UPackage__Script_Creation(), TEXT("EditParts"), sizeof(FEditParts), Get_Z_Construct_UScriptStruct_FEditParts_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditParts>()
{
	return FEditParts::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditParts(FEditParts::StaticStruct, TEXT("/Script/Creation"), TEXT("EditParts"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditParts
{
	FScriptStruct_Creation_StaticRegisterNativesFEditParts()
	{
		UScriptStruct::DeferCppStructOps<FEditParts>(FName(TEXT("EditParts")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditParts;
	struct Z_Construct_UScriptStruct_FEditParts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartsID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorPallet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorPallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorPallet;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireTypeCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireTypeCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireTypeCondition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenderCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenderCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GenderCondition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceTypeCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceTypeCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceTypeCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommpatiablePartsCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommpatiablePartsCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditParts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditParts>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_UnlockItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, UnlockItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_UnlockItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_UnlockItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_PartsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_PartsID = { "PartsID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, PartsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_PartsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_PartsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_EditSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_EditSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_EditSlot = { "EditSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, EditSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_EditSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_EditSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, Asset), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ColorPallet_Inner = { "ColorPallet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ColorPallet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ColorPallet = { "ColorPallet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, ColorPallet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ColorPallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ColorPallet_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_AttireTypeCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_AttireTypeCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_AttireTypeCondition = { "AttireTypeCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, AttireTypeCondition), Z_Construct_UEnum_ELITE_Core_EAttireCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_AttireTypeCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_AttireTypeCondition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_GenderCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_GenderCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_GenderCondition = { "GenderCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, GenderCondition), Z_Construct_UEnum_ELITE_Core_EGenderConditions, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_GenderCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_GenderCondition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_FaceTypeCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_FaceTypeCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_FaceTypeCondition = { "FaceTypeCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, FaceTypeCondition), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_FaceTypeCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_FaceTypeCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_CommpatiablePartsCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_CommpatiablePartsCategory = { "CommpatiablePartsCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, CommpatiablePartsCategory), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_CommpatiablePartsCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_CommpatiablePartsCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditParts" },
		{ "ModuleRelativePath", "Public/EditParts.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditParts, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ThumbnailTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_UnlockItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_PartsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_EditSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_EditSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ColorPallet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ColorPallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_AttireTypeCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_AttireTypeCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_GenderCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_GenderCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_FaceTypeCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_FaceTypeCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_CommpatiablePartsCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditParts_Statics::NewProp_ThumbnailTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditParts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EditParts",
		sizeof(FEditParts),
		alignof(FEditParts),
		Z_Construct_UScriptStruct_FEditParts_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditParts_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditParts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditParts()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditParts_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditParts"), sizeof(FEditParts), Get_Z_Construct_UScriptStruct_FEditParts_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditParts_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditParts_Hash() { return 3250921528U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
