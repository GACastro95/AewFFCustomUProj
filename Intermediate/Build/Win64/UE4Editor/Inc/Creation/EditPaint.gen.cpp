// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPaint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPaint() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaint();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorParam();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireCondition();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGenderConditions();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FEditPaint>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEditPaint cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FEditPaint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPaint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPaint, Z_Construct_UPackage__Script_Creation(), TEXT("EditPaint"), sizeof(FEditPaint), Get_Z_Construct_UScriptStruct_FEditPaint_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPaint>()
{
	return FEditPaint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPaint(FEditPaint::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPaint"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPaint
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPaint()
	{
		UScriptStruct::DeferCppStructOps<FEditPaint>(FName(TEXT("EditPaint")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPaint;
	struct Z_Construct_UScriptStruct_FEditPaint_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PaintID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Target;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPaint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPaint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_UnlockItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, UnlockItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_UnlockItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_UnlockItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_PaintID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_PaintID = { "PaintID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, PaintID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_PaintID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_PaintID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, Target), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, Asset), Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ColorPallet_Inner = { "ColorPallet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ColorPallet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ColorPallet = { "ColorPallet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, ColorPallet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ColorPallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ColorPallet_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_AttireTypeCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_AttireTypeCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_AttireTypeCondition = { "AttireTypeCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, AttireTypeCondition), Z_Construct_UEnum_ELITE_Core_EAttireCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_AttireTypeCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_AttireTypeCondition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_GenderCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_GenderCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_GenderCondition = { "GenderCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, GenderCondition), Z_Construct_UEnum_ELITE_Core_EGenderConditions, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_GenderCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_GenderCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaint" },
		{ "ModuleRelativePath", "Public/EditPaint.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaint, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ThumbnailTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPaint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_UnlockItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_PaintID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ColorPallet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ColorPallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_AttireTypeCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_AttireTypeCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_GenderCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_GenderCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaint_Statics::NewProp_ThumbnailTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPaint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EditPaint",
		sizeof(FEditPaint),
		alignof(FEditPaint),
		Z_Construct_UScriptStruct_FEditPaint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPaint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPaint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPaint"), sizeof(FEditPaint), Get_Z_Construct_UScriptStruct_FEditPaint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPaint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPaint_Hash() { return 2367706757U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
