// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesSituation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesSituation() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFinisher_Type();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMoves_SpecialRestriction();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMoves_PreviewDistOffsetType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References

static_assert(std::is_polymorphic<FMovesSituation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMovesSituation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMovesSituation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FMovesSituation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovesSituation, Z_Construct_UPackage__Script_Creation(), TEXT("MovesSituation"), sizeof(FMovesSituation), Get_Z_Construct_UScriptStruct_FMovesSituation_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FMovesSituation>()
{
	return FMovesSituation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovesSituation(FMovesSituation::StaticStruct, TEXT("/Script/Creation"), TEXT("MovesSituation"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFMovesSituation
{
	FScriptStruct_Creation_StaticRegisterNativesFMovesSituation()
	{
		UScriptStruct::DeferCppStructOps<FMovesSituation>(FName(TEXT("MovesSituation")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFMovesSituation;
	struct Z_Construct_UScriptStruct_FMovesSituation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DT_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DT_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Montage_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTranslation_MetaData[];
#endif
		static void NewProp_EnableTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockUniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesSubCategorys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesSubCategorys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MovesSubCategorys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesTag_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MovesTag_AttackType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesTag_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MovesTag_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesTag_MovesType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MovesTag_MovesType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesTag_DamagePart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MovesTag_DamagePart;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Finisher_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Signature_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Signature;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TagFinisher_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagFinisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TagFinisher;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialRestriction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMovesMenu_MetaData[];
#endif
		static void NewProp_EnableMovesMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMovesMenu;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceOffsetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllLocationOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllLocationOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartnerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartnerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDownRotate2P_MetaData[];
#endif
		static void NewProp_IsDownRotate2P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDownRotate2P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovesSituation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovesSituation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, DataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DT_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DT_ID = { "DT_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, DT_ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DT_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DT_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Montage_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Montage_ID = { "Montage_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, Montage_ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Montage_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Montage_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesName = { "MovesName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, MovesName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableTranslation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableTranslation_SetBit(void* Obj)
	{
		((FMovesSituation*)Obj)->EnableTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableTranslation = { "EnableTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovesSituation), &Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_UnlockUniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_UnlockUniqueID = { "UnlockUniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, UnlockUniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_UnlockUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_UnlockUniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SortOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesCategory = { "MovesCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, MovesCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesCategory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesSubCategorys_Inner = { "MovesSubCategorys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesSubCategorys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesSubCategorys = { "MovesSubCategorys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, MovesSubCategorys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesSubCategorys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesSubCategorys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_AttackType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_AttackType = { "MovesTag_AttackType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, MovesTag_AttackType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_AttackType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_Function_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_Function = { "MovesTag_Function", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, MovesTag_Function), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_MovesType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_MovesType = { "MovesTag_MovesType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, MovesTag_MovesType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_MovesType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_MovesType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_DamagePart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_DamagePart = { "MovesTag_DamagePart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, MovesTag_DamagePart), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_DamagePart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_DamagePart_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Finisher_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Finisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, Finisher), Z_Construct_UEnum_Creation_EFinisher_Type, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Finisher_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Signature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Signature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, Signature), Z_Construct_UEnum_Creation_EFinisher_Type, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Signature_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TagFinisher_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TagFinisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TagFinisher = { "TagFinisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, TagFinisher), Z_Construct_UEnum_Creation_EFinisher_Type, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TagFinisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TagFinisher_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SpecialRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SpecialRestriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SpecialRestriction = { "SpecialRestriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, SpecialRestriction), Z_Construct_UEnum_Creation_EMoves_SpecialRestriction, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SpecialRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SpecialRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TriggerDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TriggerDistance = { "TriggerDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, TriggerDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TriggerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TriggerDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableMovesMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableMovesMenu_SetBit(void* Obj)
	{
		((FMovesSituation*)Obj)->EnableMovesMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableMovesMenu = { "EnableMovesMenu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovesSituation), &Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableMovesMenu_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableMovesMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableMovesMenu_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffsetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffsetType = { "DistanceOffsetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, DistanceOffsetType), Z_Construct_UEnum_Creation_EMoves_PreviewDistOffsetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffsetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffset = { "DistanceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, DistanceOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_AllLocationOffsetY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_AllLocationOffsetY = { "AllLocationOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, AllLocationOffsetY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_AllLocationOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_AllLocationOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_PartnerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_PartnerOffset = { "PartnerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesSituation, PartnerOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_PartnerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_PartnerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_IsDownRotate2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesSituation" },
		{ "ModuleRelativePath", "Public/MovesSituation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_IsDownRotate2P_SetBit(void* Obj)
	{
		((FMovesSituation*)Obj)->IsDownRotate2P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_IsDownRotate2P = { "IsDownRotate2P", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovesSituation), &Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_IsDownRotate2P_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_IsDownRotate2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_IsDownRotate2P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovesSituation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DT_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Montage_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_UnlockUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesSubCategorys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesSubCategorys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_MovesType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_MovesTag_DamagePart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Finisher_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Signature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_Signature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TagFinisher_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TagFinisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SpecialRestriction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_SpecialRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_TriggerDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_EnableMovesMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffsetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_DistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_AllLocationOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_PartnerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesSituation_Statics::NewProp_IsDownRotate2P,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovesSituation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MovesSituation",
		sizeof(FMovesSituation),
		alignof(FMovesSituation),
		Z_Construct_UScriptStruct_FMovesSituation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesSituation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesSituation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovesSituation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovesSituation"), sizeof(FMovesSituation), Get_Z_Construct_UScriptStruct_FMovesSituation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovesSituation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovesSituation_Hash() { return 3109640870U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
