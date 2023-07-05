// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesSituation_SlotDetail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesSituation_SlotDetail() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFinisher_Type();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesSituation_SlotDetail>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesSituation_SlotDetail cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesSituation_SlotDetail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesSituation_SlotDetail"), sizeof(FELMovesSituation_SlotDetail), Get_Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesSituation_SlotDetail>()
{
	return FELMovesSituation_SlotDetail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesSituation_SlotDetail(FELMovesSituation_SlotDetail::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesSituation_SlotDetail"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesSituation_SlotDetail
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesSituation_SlotDetail()
	{
		UScriptStruct::DeferCppStructOps<FELMovesSituation_SlotDetail>(FName(TEXT("ELMovesSituation_SlotDetail")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesSituation_SlotDetail;
	struct Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Category_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FinisherCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FinisherCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSkillNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionSkillNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesSituation_SlotDetail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesSituation_SlotDetail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_No_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSituation_SlotDetail" },
		{ "ModuleRelativePath", "Public/ELMovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSituation_SlotDetail, No), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_No_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_CategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSituation_SlotDetail" },
		{ "ModuleRelativePath", "Public/ELMovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSituation_SlotDetail, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSituation_SlotDetail" },
		{ "ModuleRelativePath", "Public/ELMovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSituation_SlotDetail, Category), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSituation_SlotDetail" },
		{ "ModuleRelativePath", "Public/ELMovesSituation_SlotDetail.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FELMovesSituation_SlotDetail*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesSituation_SlotDetail), &Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_FinisherCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_FinisherCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSituation_SlotDetail" },
		{ "ModuleRelativePath", "Public/ELMovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_FinisherCategory = { "FinisherCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSituation_SlotDetail, FinisherCategory), Z_Construct_UEnum_Creation_EFinisher_Type, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_FinisherCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_FinisherCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_ActionSkillNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSituation_SlotDetail" },
		{ "ModuleRelativePath", "Public/ELMovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_ActionSkillNo = { "ActionSkillNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSituation_SlotDetail, ActionSkillNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_ActionSkillNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_ActionSkillNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_FinisherCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_FinisherCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::NewProp_ActionSkillNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesSituation_SlotDetail",
		sizeof(FELMovesSituation_SlotDetail),
		alignof(FELMovesSituation_SlotDetail),
		Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesSituation_SlotDetail"), sizeof(FELMovesSituation_SlotDetail), Get_Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail_Hash() { return 1331104290U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
