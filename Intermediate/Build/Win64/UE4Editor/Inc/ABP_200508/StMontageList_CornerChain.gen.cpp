// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StMontageList_CornerChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMontageList_CornerChain() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_CornerChain();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStMontageList_CornerChain>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStMontageList_CornerChain cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStMontageList_CornerChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStMontageList_CornerChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMontageList_CornerChain, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StMontageList_CornerChain"), sizeof(FStMontageList_CornerChain), Get_Z_Construct_UScriptStruct_FStMontageList_CornerChain_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStMontageList_CornerChain>()
{
	return FStMontageList_CornerChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMontageList_CornerChain(FStMontageList_CornerChain::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StMontageList_CornerChain"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_CornerChain
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_CornerChain()
	{
		UScriptStruct::DeferCppStructOps<FStMontageList_CornerChain>(FName(TEXT("StMontageList_CornerChain")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_CornerChain;
	struct Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PushCorner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_ST_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Front_ST;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_LO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Front_LO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_ST_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Back_ST;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_LO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Back_LO;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMontageList_CornerChain.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMontageList_CornerChain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_PushCorner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_CornerChain" },
		{ "ModuleRelativePath", "Public/StMontageList_CornerChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_PushCorner = { "PushCorner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_CornerChain, PushCorner), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_PushCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_PushCorner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_ST_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_CornerChain" },
		{ "ModuleRelativePath", "Public/StMontageList_CornerChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_ST = { "Front_ST", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_CornerChain, Front_ST), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_ST_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_ST_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_LO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_CornerChain" },
		{ "ModuleRelativePath", "Public/StMontageList_CornerChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_LO = { "Front_LO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_CornerChain, Front_LO), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_LO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_LO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_ST_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_CornerChain" },
		{ "ModuleRelativePath", "Public/StMontageList_CornerChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_ST = { "Back_ST", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_CornerChain, Back_ST), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_ST_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_ST_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_LO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_CornerChain" },
		{ "ModuleRelativePath", "Public/StMontageList_CornerChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_LO = { "Back_LO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_CornerChain, Back_LO), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_LO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_LO_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_PushCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_ST,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Front_LO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_ST,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::NewProp_Back_LO,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StMontageList_CornerChain",
		sizeof(FStMontageList_CornerChain),
		alignof(FStMontageList_CornerChain),
		Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_CornerChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMontageList_CornerChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMontageList_CornerChain"), sizeof(FStMontageList_CornerChain), Get_Z_Construct_UScriptStruct_FStMontageList_CornerChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMontageList_CornerChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMontageList_CornerChain_Hash() { return 155630599U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
