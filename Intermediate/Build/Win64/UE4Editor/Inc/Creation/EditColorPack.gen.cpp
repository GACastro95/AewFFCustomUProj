// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditColorPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditColorPack() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorPack();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorItem();
// End Cross Module References
class UScriptStruct* FEditColorPack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditColorPack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditColorPack, Z_Construct_UPackage__Script_Creation(), TEXT("EditColorPack"), sizeof(FEditColorPack), Get_Z_Construct_UScriptStruct_FEditColorPack_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditColorPack>()
{
	return FEditColorPack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditColorPack(FEditColorPack::StaticStruct, TEXT("/Script/Creation"), TEXT("EditColorPack"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditColorPack
{
	FScriptStruct_Creation_StaticRegisterNativesFEditColorPack()
	{
		UScriptStruct::DeferCppStructOps<FEditColorPack>(FName(TEXT("EditColorPack")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditColorPack;
	struct Z_Construct_UScriptStruct_FEditColorPack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultColorID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorPack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditColorPack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditColorPack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditColorPack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_SlotNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorPack" },
		{ "ModuleRelativePath", "Public/EditColorPack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorPack, SlotNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_SlotNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_SlotNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_DefaultColorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorPack" },
		{ "ModuleRelativePath", "Public/EditColorPack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_DefaultColorID = { "DefaultColorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorPack, DefaultColorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_DefaultColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_DefaultColorID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorPack" },
		{ "ModuleRelativePath", "Public/EditColorPack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorPack, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditColorPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_DefaultColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorPack_Statics::NewProp_Items,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditColorPack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditColorPack",
		sizeof(FEditColorPack),
		alignof(FEditColorPack),
		Z_Construct_UScriptStruct_FEditColorPack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorPack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorPack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorPack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditColorPack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditColorPack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditColorPack"), sizeof(FEditColorPack), Get_Z_Construct_UScriptStruct_FEditColorPack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditColorPack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditColorPack_Hash() { return 1721339629U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
