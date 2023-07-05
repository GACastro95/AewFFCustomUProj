// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSystemRefereeCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSystemRefereeCheck() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeCheck();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStSystemRefereeCheck>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSystemRefereeCheck cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSystemRefereeCheck::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeCheck_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSystemRefereeCheck, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSystemRefereeCheck"), sizeof(FStSystemRefereeCheck), Get_Z_Construct_UScriptStruct_FStSystemRefereeCheck_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSystemRefereeCheck>()
{
	return FStSystemRefereeCheck::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSystemRefereeCheck(FStSystemRefereeCheck::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSystemRefereeCheck"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeCheck
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeCheck()
	{
		UScriptStruct::DeferCppStructOps<FStSystemRefereeCheck>(FName(TEXT("StSystemRefereeCheck")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeCheck;
	struct Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreDQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreDQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSystemRefereeCheck.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSystemRefereeCheck>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeCheck" },
		{ "ModuleRelativePath", "Public/StSystemRefereeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeCheck, Normal), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Anger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeCheck" },
		{ "ModuleRelativePath", "Public/StSystemRefereeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Anger = { "Anger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeCheck, Anger), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Anger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Anger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_PreDQ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeCheck" },
		{ "ModuleRelativePath", "Public/StSystemRefereeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_PreDQ = { "PreDQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeCheck, PreDQ), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_PreDQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_PreDQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_DQ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeCheck" },
		{ "ModuleRelativePath", "Public/StSystemRefereeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_DQ = { "DQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeCheck, DQ), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_DQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_DQ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_Anger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_PreDQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::NewProp_DQ,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSystemRefereeCheck",
		sizeof(FStSystemRefereeCheck),
		alignof(FStSystemRefereeCheck),
		Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeCheck()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeCheck_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSystemRefereeCheck"), sizeof(FStSystemRefereeCheck), Get_Z_Construct_UScriptStruct_FStSystemRefereeCheck_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSystemRefereeCheck_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeCheck_Hash() { return 2425116301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
