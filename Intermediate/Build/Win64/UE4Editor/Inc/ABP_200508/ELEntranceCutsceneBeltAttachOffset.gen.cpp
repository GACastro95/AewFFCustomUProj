// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneBeltAttachOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneBeltAttachOffset() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References

static_assert(std::is_polymorphic<FELEntranceCutsceneBeltAttachOffset>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELEntranceCutsceneBeltAttachOffset cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELEntranceCutsceneBeltAttachOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneBeltAttachOffset"), sizeof(FELEntranceCutsceneBeltAttachOffset), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneBeltAttachOffset>()
{
	return FELEntranceCutsceneBeltAttachOffset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset(FELEntranceCutsceneBeltAttachOffset::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneBeltAttachOffset"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneBeltAttachOffset
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneBeltAttachOffset()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneBeltAttachOffset>(FName(TEXT("ELEntranceCutsceneBeltAttachOffset")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneBeltAttachOffset;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeltRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltRelativeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeltRelativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTarget_Slim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphTarget_Slim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTarget_Muscular_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphTarget_Muscular;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTarget_Heavy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphTarget_Heavy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBeltAttachOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneBeltAttachOffset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBeltAttachOffset" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBeltAttachOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeLocation = { "BeltRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneBeltAttachOffset, BeltRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBeltAttachOffset" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBeltAttachOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeRotation = { "BeltRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneBeltAttachOffset, BeltRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Slim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBeltAttachOffset" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBeltAttachOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Slim = { "MorphTarget_Slim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneBeltAttachOffset, MorphTarget_Slim), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Slim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Slim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Muscular_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBeltAttachOffset" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBeltAttachOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Muscular = { "MorphTarget_Muscular", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneBeltAttachOffset, MorphTarget_Muscular), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Muscular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Muscular_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Heavy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBeltAttachOffset" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBeltAttachOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Heavy = { "MorphTarget_Heavy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneBeltAttachOffset, MorphTarget_Heavy), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Heavy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Heavy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_BeltRelativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Slim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Muscular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::NewProp_MorphTarget_Heavy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELEntranceCutsceneBeltAttachOffset",
		sizeof(FELEntranceCutsceneBeltAttachOffset),
		alignof(FELEntranceCutsceneBeltAttachOffset),
		Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneBeltAttachOffset"), sizeof(FELEntranceCutsceneBeltAttachOffset), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneBeltAttachOffset_Hash() { return 3124920822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
