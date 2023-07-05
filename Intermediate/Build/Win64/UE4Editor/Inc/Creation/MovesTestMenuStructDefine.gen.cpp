// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesTestMenuStructDefine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesTestMenuStructDefine() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesTestMenuStructDefine();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesSettingMenuType();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesCategoryType();
// End Cross Module References

static_assert(std::is_polymorphic<FMovesTestMenuStructDefine>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMovesTestMenuStructDefine cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMovesTestMenuStructDefine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, Z_Construct_UPackage__Script_Creation(), TEXT("MovesTestMenuStructDefine"), sizeof(FMovesTestMenuStructDefine), Get_Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FMovesTestMenuStructDefine>()
{
	return FMovesTestMenuStructDefine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovesTestMenuStructDefine(FMovesTestMenuStructDefine::StaticStruct, TEXT("/Script/Creation"), TEXT("MovesTestMenuStructDefine"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFMovesTestMenuStructDefine
{
	FScriptStruct_Creation_StaticRegisterNativesFMovesTestMenuStructDefine()
	{
		UScriptStruct::DeferCppStructOps<FMovesTestMenuStructDefine>(FName(TEXT("MovesTestMenuStructDefine")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFMovesTestMenuStructDefine;
	struct Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseNone_MetaData[];
#endif
		static void NewProp_UseNone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseNone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CategoryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CategoryType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSkillNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionSkillNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ButtonArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverWriteHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OverWriteHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverWriteCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OverWriteCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovesTestMenuStructDefine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_MenuName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, MenuName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_MenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_MenuName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ParentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryItemID = { "CategoryItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, CategoryItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_UseNone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_UseNone_SetBit(void* Obj)
	{
		((FMovesTestMenuStructDefine*)Obj)->UseNone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_UseNone = { "UseNone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovesTestMenuStructDefine), &Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_UseNone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_UseNone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_UseNone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FMovesTestMenuStructDefine*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovesTestMenuStructDefine), &Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, Type), Z_Construct_UEnum_Creation_EMovesSettingMenuType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryType = { "CategoryType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, CategoryType), Z_Construct_UEnum_Creation_EMovesCategoryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ActionSkillNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ActionSkillNo = { "ActionSkillNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, ActionSkillNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ActionSkillNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ActionSkillNo_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ButtonArray_Inner = { "ButtonArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ButtonArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ButtonArray = { "ButtonArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, ButtonArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ButtonArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ButtonArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteHeader = { "OverWriteHeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, OverWriteHeader), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTestMenuStructDefine" },
		{ "ModuleRelativePath", "Public/MovesTestMenuStructDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteCategoryName = { "OverWriteCategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTestMenuStructDefine, OverWriteCategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_MenuName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_UseNone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_CategoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ActionSkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ButtonArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_ButtonArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::NewProp_OverWriteCategoryName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MovesTestMenuStructDefine",
		sizeof(FMovesTestMenuStructDefine),
		alignof(FMovesTestMenuStructDefine),
		Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovesTestMenuStructDefine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovesTestMenuStructDefine"), sizeof(FMovesTestMenuStructDefine), Get_Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovesTestMenuStructDefine_Hash() { return 1225987301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
