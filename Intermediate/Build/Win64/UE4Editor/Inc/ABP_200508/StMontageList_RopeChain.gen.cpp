// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StMontageList_RopeChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMontageList_RopeChain() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_RopeChain();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStMontageList_RopeChain>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStMontageList_RopeChain cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStMontageList_RopeChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStMontageList_RopeChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMontageList_RopeChain, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StMontageList_RopeChain"), sizeof(FStMontageList_RopeChain), Get_Z_Construct_UScriptStruct_FStMontageList_RopeChain_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStMontageList_RopeChain>()
{
	return FStMontageList_RopeChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMontageList_RopeChain(FStMontageList_RopeChain::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StMontageList_RopeChain"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_RopeChain
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_RopeChain()
	{
		UScriptStruct::DeferCppStructOps<FStMontageList_RopeChain>(FName(TEXT("StMontageList_RopeChain")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_RopeChain;
	struct Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushRope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PushRope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMontageList_RopeChain.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMontageList_RopeChain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_PushRope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_RopeChain" },
		{ "ModuleRelativePath", "Public/StMontageList_RopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_PushRope = { "PushRope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_RopeChain, PushRope), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_PushRope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_PushRope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_RopeChain" },
		{ "ModuleRelativePath", "Public/StMontageList_RopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_RopeChain, Start), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_RopeChain" },
		{ "ModuleRelativePath", "Public/StMontageList_RopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_RopeChain, Loop), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Loop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_PushRope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::NewProp_Loop,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StMontageList_RopeChain",
		sizeof(FStMontageList_RopeChain),
		alignof(FStMontageList_RopeChain),
		Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_RopeChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMontageList_RopeChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMontageList_RopeChain"), sizeof(FStMontageList_RopeChain), Get_Z_Construct_UScriptStruct_FStMontageList_RopeChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMontageList_RopeChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMontageList_RopeChain_Hash() { return 4207669627U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
