// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSystemRefereeRingout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSystemRefereeRingout() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeRingout();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStSystemRefereeRingout>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSystemRefereeRingout cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSystemRefereeRingout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeRingout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSystemRefereeRingout, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSystemRefereeRingout"), sizeof(FStSystemRefereeRingout), Get_Z_Construct_UScriptStruct_FStSystemRefereeRingout_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSystemRefereeRingout>()
{
	return FStSystemRefereeRingout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSystemRefereeRingout(FStSystemRefereeRingout::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSystemRefereeRingout"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeRingout
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeRingout()
	{
		UScriptStruct::DeferCppStructOps<FStSystemRefereeRingout>(FName(TEXT("StSystemRefereeRingout")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeRingout;
	struct Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CountArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wait_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSystemRefereeRingout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSystemRefereeRingout>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_CountArray_Inner = { "CountArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_CountArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeRingout" },
		{ "ModuleRelativePath", "Public/StSystemRefereeRingout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_CountArray = { "CountArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeRingout, CountArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_CountArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_CountArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_Wait_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeRingout" },
		{ "ModuleRelativePath", "Public/StSystemRefereeRingout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_Wait = { "Wait", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeRingout, Wait), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_Wait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_Wait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_End_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeRingout" },
		{ "ModuleRelativePath", "Public/StSystemRefereeRingout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeRingout, End), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_CountArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_CountArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_Wait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::NewProp_End,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSystemRefereeRingout",
		sizeof(FStSystemRefereeRingout),
		alignof(FStSystemRefereeRingout),
		Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeRingout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeRingout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSystemRefereeRingout"), sizeof(FStSystemRefereeRingout), Get_Z_Construct_UScriptStruct_FStSystemRefereeRingout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSystemRefereeRingout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeRingout_Hash() { return 3719121816U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
