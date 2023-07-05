// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSystemReferee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSystemReferee() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemReferee();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeMove();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeCheck();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereePin();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeSubmission();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeChain();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeRingout();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStSystemReferee>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSystemReferee cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSystemReferee::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSystemReferee_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSystemReferee, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSystemReferee"), sizeof(FStSystemReferee), Get_Z_Construct_UScriptStruct_FStSystemReferee_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSystemReferee>()
{
	return FStSystemReferee::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSystemReferee(FStSystemReferee::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSystemReferee"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemReferee
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemReferee()
	{
		UScriptStruct::DeferCppStructOps<FStSystemReferee>(FName(TEXT("StSystemReferee")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSystemReferee;
	struct Z_Construct_UScriptStruct_FStSystemReferee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Check_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Check;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Submission_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Submission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Chain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ringout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ringout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeBreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RopeBreak;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSystemReferee>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Move_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemReferee" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemReferee, Move), Z_Construct_UScriptStruct_FStSystemRefereeMove, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Check_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemReferee" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Check = { "Check", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemReferee, Check), Z_Construct_UScriptStruct_FStSystemRefereeCheck, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Check_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Check_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Pin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemReferee" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemReferee, Pin), Z_Construct_UScriptStruct_FStSystemRefereePin, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Pin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Submission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemReferee" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Submission = { "Submission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemReferee, Submission), Z_Construct_UScriptStruct_FStSystemRefereeSubmission, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Submission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Submission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Chain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemReferee" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemReferee, Chain), Z_Construct_UScriptStruct_FStSystemRefereeChain, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Chain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Ringout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemReferee" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Ringout = { "Ringout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemReferee, Ringout), Z_Construct_UScriptStruct_FStSystemRefereeRingout, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Ringout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Ringout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_RopeBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemReferee" },
		{ "ModuleRelativePath", "Public/StSystemReferee.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_RopeBreak = { "RopeBreak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemReferee, RopeBreak), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_RopeBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_RopeBreak_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSystemReferee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Check,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Submission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_Ringout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemReferee_Statics::NewProp_RopeBreak,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSystemReferee_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSystemReferee",
		sizeof(FStSystemReferee),
		alignof(FStSystemReferee),
		Z_Construct_UScriptStruct_FStSystemReferee_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemReferee_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemReferee_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSystemReferee()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSystemReferee_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSystemReferee"), sizeof(FStSystemReferee), Get_Z_Construct_UScriptStruct_FStSystemReferee_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSystemReferee_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSystemReferee_Hash() { return 1877202174U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
