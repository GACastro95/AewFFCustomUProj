// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSItemParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSItemParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSItemParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSItemParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSItemParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSItemParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSItemParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSItemParam"), sizeof(FSSItemParam), Get_Z_Construct_UScriptStruct_FSSItemParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSItemParam>()
{
	return FSSItemParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSItemParam(FSSItemParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSItemParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSItemParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSItemParam()
	{
		UScriptStruct::DeferCppStructOps<FSSItemParam>(FName(TEXT("SSItemParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSItemParam;
	struct Z_Construct_UScriptStruct_FSSItemParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStock_MetaData[];
#endif
		static void NewProp_IsStock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParamRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachParamRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseItemParamRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UseItemParamRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatabaseRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDatabaseRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleWhenDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleWhenDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSItemParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSItemParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, Rarity), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, ItemType), Z_Construct_UEnum_ABP_200508_ESSItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_1 = { "Value_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, Value_1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_2 = { "Value_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, Value_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IsStock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IsStock_SetBit(void* Obj)
	{
		((FSSItemParam*)Obj)->IsStock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IsStock = { "IsStock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSItemParam), &Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IsStock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IsStock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IsStock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_TimeToTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_TimeToTrigger = { "TimeToTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, TimeToTrigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_TimeToTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_TimeToTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachParamRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachParamRowName = { "AttachParamRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, AttachParamRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachParamRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachParamRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachLocation = { "AttachLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, AttachLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachRotation = { "AttachRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, AttachRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_UseItemParamRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_UseItemParamRowName = { "UseItemParamRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, UseItemParamRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_UseItemParamRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_UseItemParamRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_EffectDatabaseRow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_EffectDatabaseRow = { "EffectDatabaseRow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, EffectDatabaseRow), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_EffectDatabaseRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_EffectDatabaseRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ScaleWhenDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ScaleWhenDrop = { "ScaleWhenDrop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, ScaleWhenDrop), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ScaleWhenDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ScaleWhenDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IconImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemParam" },
		{ "ModuleRelativePath", "Public/SSItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemParam, IconImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IconImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_Value_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IsStock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_TimeToTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachParamRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_AttachRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_UseItemParamRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_EffectDatabaseRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_ScaleWhenDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemParam_Statics::NewProp_IconImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSItemParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSItemParam",
		sizeof(FSSItemParam),
		alignof(FSSItemParam),
		Z_Construct_UScriptStruct_FSSItemParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSItemParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSItemParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSItemParam"), sizeof(FSSItemParam), Get_Z_Construct_UScriptStruct_FSSItemParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSItemParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSItemParam_Hash() { return 1504432518U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
