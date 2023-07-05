// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPartsCategoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPartsCategoryData() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryData();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FEditPartsCategoryData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEditPartsCategoryData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FEditPartsCategoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPartsCategoryData, Z_Construct_UPackage__Script_Creation(), TEXT("EditPartsCategoryData"), sizeof(FEditPartsCategoryData), Get_Z_Construct_UScriptStruct_FEditPartsCategoryData_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPartsCategoryData>()
{
	return FEditPartsCategoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPartsCategoryData(FEditPartsCategoryData::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPartsCategoryData"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryData
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryData()
	{
		UScriptStruct::DeferCppStructOps<FEditPartsCategoryData>(FName(TEXT("EditPartsCategoryData")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryData;
	struct Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachNode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMask_Unique_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyMask_Unique;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMask_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyMask_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMask_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyMask_Right;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AffectingCategories_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffectingCategories_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectingCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AffectingCategories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncompatibleCategories_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncompatibleCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IncompatibleCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncompatibleIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IncompatibleIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPartsCategoryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_ParentCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_ParentCategory = { "ParentCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, ParentCategory), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_ParentCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_ParentCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AttachNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AttachNode = { "AttachNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, AttachNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AttachNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AttachNode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_PartsSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Unique_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Unique = { "BodyMask_Unique", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, BodyMask_Unique), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Unique_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Unique_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Left_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Left = { "BodyMask_Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, BodyMask_Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Right_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Right = { "BodyMask_Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, BodyMask_Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Right_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories_ValueProp = { "AffectingCategories", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories_Key_KeyProp = { "AffectingCategories_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories = { "AffectingCategories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, AffectingCategories), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleCategories_ElementProp = { "IncompatibleCategories", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleCategories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleCategories = { "IncompatibleCategories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, IncompatibleCategories), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleCategories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsCategoryData" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleIcon = { "IncompatibleIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsCategoryData, IncompatibleIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_ParentCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AttachNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Unique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_BodyMask_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_AffectingCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleCategories_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::NewProp_IncompatibleIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EditPartsCategoryData",
		sizeof(FEditPartsCategoryData),
		alignof(FEditPartsCategoryData),
		Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPartsCategoryData"), sizeof(FEditPartsCategoryData), Get_Z_Construct_UScriptStruct_FEditPartsCategoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPartsCategoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryData_Hash() { return 2124668175U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
