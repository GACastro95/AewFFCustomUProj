// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BoneTransRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneTransRange() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBoneTransRange();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FBoneTransRange>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBoneTransRange cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBoneTransRange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBoneTransRange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneTransRange, Z_Construct_UPackage__Script_Creation(), TEXT("BoneTransRange"), sizeof(FBoneTransRange), Get_Z_Construct_UScriptStruct_FBoneTransRange_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBoneTransRange>()
{
	return FBoneTransRange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneTransRange(FBoneTransRange::StaticStruct, TEXT("/Script/Creation"), TEXT("BoneTransRange"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBoneTransRange
{
	FScriptStruct_Creation_StaticRegisterNativesFBoneTransRange()
	{
		UScriptStruct::DeferCppStructOps<FBoneTransRange>(FName(TEXT("BoneTransRange")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBoneTransRange;
	struct Z_Construct_UScriptStruct_FBoneTransRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneTransRange.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneTransRange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoneTransRange" },
		{ "ModuleRelativePath", "Public/BoneTransRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset0 = { "Offset0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransRange, Offset0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoneTransRange" },
		{ "ModuleRelativePath", "Public/BoneTransRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset1 = { "Offset1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransRange, Offset1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoneTransRange" },
		{ "ModuleRelativePath", "Public/BoneTransRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale0 = { "Scale0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransRange, Scale0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoneTransRange" },
		{ "ModuleRelativePath", "Public/BoneTransRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale1 = { "Scale1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransRange, Scale1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneTransRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Offset1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransRange_Statics::NewProp_Scale1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneTransRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BoneTransRange",
		sizeof(FBoneTransRange),
		alignof(FBoneTransRange),
		Z_Construct_UScriptStruct_FBoneTransRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneTransRange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneTransRange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneTransRange"), sizeof(FBoneTransRange), Get_Z_Construct_UScriptStruct_FBoneTransRange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneTransRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneTransRange_Hash() { return 3367199520U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
