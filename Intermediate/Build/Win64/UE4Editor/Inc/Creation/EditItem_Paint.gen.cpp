// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditItem_Paint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditItem_Paint() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Paint();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Common();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FEditItem_Paint>() == std::is_polymorphic<FEditItem_Common>(), "USTRUCT FEditItem_Paint cannot be polymorphic unless super FEditItem_Common is polymorphic");

class UScriptStruct* FEditItem_Paint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditItem_Paint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditItem_Paint, Z_Construct_UPackage__Script_Creation(), TEXT("EditItem_Paint"), sizeof(FEditItem_Paint), Get_Z_Construct_UScriptStruct_FEditItem_Paint_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditItem_Paint>()
{
	return FEditItem_Paint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditItem_Paint(FEditItem_Paint::StaticStruct, TEXT("/Script/Creation"), TEXT("EditItem_Paint"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditItem_Paint
{
	FScriptStruct_Creation_StaticRegisterNativesFEditItem_Paint()
	{
		UScriptStruct::DeferCppStructOps<FEditItem_Paint>(FName(TEXT("EditItem_Paint")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditItem_Paint;
	struct Z_Construct_UScriptStruct_FEditItem_Paint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Paint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditItem_Paint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditItem_Paint>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Paint" },
		{ "ModuleRelativePath", "Public/EditItem_Paint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Paint, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_PaintSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Paint" },
		{ "ModuleRelativePath", "Public/EditItem_Paint.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Paint, Asset), Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditItem_Paint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Paint_Statics::NewProp_Asset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditItem_Paint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FEditItem_Common,
		&NewStructOps,
		"EditItem_Paint",
		sizeof(FEditItem_Paint),
		alignof(FEditItem_Paint),
		Z_Construct_UScriptStruct_FEditItem_Paint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Paint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Paint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Paint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Paint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditItem_Paint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditItem_Paint"), sizeof(FEditItem_Paint), Get_Z_Construct_UScriptStruct_FEditItem_Paint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditItem_Paint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditItem_Paint_Hash() { return 1362761015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
