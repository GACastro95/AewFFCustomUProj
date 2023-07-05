// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesMovesCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesMovesCategory() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesMovesCategory();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesCategory();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesState();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesAttribute();
// End Cross Module References

static_assert(std::is_polymorphic<FMovesMovesCategory>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMovesMovesCategory cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMovesMovesCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FMovesMovesCategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovesMovesCategory, Z_Construct_UPackage__Script_Creation(), TEXT("MovesMovesCategory"), sizeof(FMovesMovesCategory), Get_Z_Construct_UScriptStruct_FMovesMovesCategory_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FMovesMovesCategory>()
{
	return FMovesMovesCategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovesMovesCategory(FMovesMovesCategory::StaticStruct, TEXT("/Script/Creation"), TEXT("MovesMovesCategory"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFMovesMovesCategory
{
	FScriptStruct_Creation_StaticRegisterNativesFMovesMovesCategory()
	{
		UScriptStruct::DeferCppStructOps<FMovesMovesCategory>(FName(TEXT("MovesMovesCategory")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFMovesMovesCategory;
	struct Z_Construct_UScriptStruct_FMovesMovesCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovesCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovesCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TagetMovesState_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TagetMovesState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagetMovesState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagetMovesState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MyMovesState_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MyMovesState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMovesState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MyMovesState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovesAttribute_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovesAttribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovesMovesCategory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovesMovesCategory>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesMovesCategory" },
		{ "ModuleRelativePath", "Public/MovesMovesCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesCategory = { "MovesCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesMovesCategory, MovesCategory), Z_Construct_UEnum_Creation_EMovesCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState_Inner = { "TagetMovesState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EMovesState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesMovesCategory" },
		{ "ModuleRelativePath", "Public/MovesMovesCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState = { "TagetMovesState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesMovesCategory, TagetMovesState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState_Inner = { "MyMovesState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EMovesState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesMovesCategory" },
		{ "ModuleRelativePath", "Public/MovesMovesCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState = { "MyMovesState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesMovesCategory, MyMovesState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesAttribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesMovesCategory" },
		{ "ModuleRelativePath", "Public/MovesMovesCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesAttribute = { "MovesAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesMovesCategory, MovesAttribute), Z_Construct_UEnum_Creation_EMovesAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesAttribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_TagetMovesState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MyMovesState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesAttribute_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::NewProp_MovesAttribute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MovesMovesCategory",
		sizeof(FMovesMovesCategory),
		alignof(FMovesMovesCategory),
		Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovesMovesCategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovesMovesCategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovesMovesCategory"), sizeof(FMovesMovesCategory), Get_Z_Construct_UScriptStruct_FMovesMovesCategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovesMovesCategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovesMovesCategory_Hash() { return 3850646984U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
