// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSystemRefereePin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSystemRefereePin() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereePin();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStSystemRefereePin>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSystemRefereePin cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSystemRefereePin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereePin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSystemRefereePin, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSystemRefereePin"), sizeof(FStSystemRefereePin), Get_Z_Construct_UScriptStruct_FStSystemRefereePin_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSystemRefereePin>()
{
	return FStSystemRefereePin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSystemRefereePin(FStSystemRefereePin::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSystemRefereePin"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereePin
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereePin()
	{
		UScriptStruct::DeferCppStructOps<FStSystemRefereePin>(FName(TEXT("StSystemRefereePin")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereePin;
	struct Z_Construct_UScriptStruct_FStSystemRefereePin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Release_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Release;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_One;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Two_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Two;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NearThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Three_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Three;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSystemRefereePin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, Start), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, Loop), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Loop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Release_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Release = { "Release", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, Release), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Release_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Release_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_CountUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_CountUp = { "CountUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, CountUp), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_CountUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_CountUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_One_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, One), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_One_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Two_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Two = { "Two", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, Two), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Two_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Two_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_NearThree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_NearThree = { "NearThree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, NearThree), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_NearThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_NearThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Three_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereePin" },
		{ "ModuleRelativePath", "Public/StSystemRefereePin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Three = { "Three", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereePin, Three), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Three_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Three_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Release,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_CountUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_One,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Two,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_NearThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::NewProp_Three,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSystemRefereePin",
		sizeof(FStSystemRefereePin),
		alignof(FStSystemRefereePin),
		Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereePin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereePin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSystemRefereePin"), sizeof(FStSystemRefereePin), Get_Z_Construct_UScriptStruct_FStSystemRefereePin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSystemRefereePin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereePin_Hash() { return 2759346471U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
