// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StMontageList_HandsInPocketPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMontageList_HandsInPocketPin() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStMontageList_HandsInPocketPin>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStMontageList_HandsInPocketPin cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStMontageList_HandsInPocketPin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StMontageList_HandsInPocketPin"), sizeof(FStMontageList_HandsInPocketPin), Get_Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStMontageList_HandsInPocketPin>()
{
	return FStMontageList_HandsInPocketPin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMontageList_HandsInPocketPin(FStMontageList_HandsInPocketPin::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StMontageList_HandsInPocketPin"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_HandsInPocketPin
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_HandsInPocketPin()
	{
		UScriptStruct::DeferCppStructOps<FStMontageList_HandsInPocketPin>(FName(TEXT("StMontageList_HandsInPocketPin")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_HandsInPocketPin;
	struct Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMontageList_HandsInPocketPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMontageList_HandsInPocketPin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_HandsInPocketPin" },
		{ "ModuleRelativePath", "Public/StMontageList_HandsInPocketPin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_HandsInPocketPin, Loop), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Loop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_KickOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_HandsInPocketPin" },
		{ "ModuleRelativePath", "Public/StMontageList_HandsInPocketPin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_KickOut = { "KickOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_HandsInPocketPin, KickOut), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_KickOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_KickOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Cancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_HandsInPocketPin" },
		{ "ModuleRelativePath", "Public/StMontageList_HandsInPocketPin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Cancel = { "Cancel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_HandsInPocketPin, Cancel), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Cancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Cancel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_KickOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::NewProp_Cancel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StMontageList_HandsInPocketPin",
		sizeof(FStMontageList_HandsInPocketPin),
		alignof(FStMontageList_HandsInPocketPin),
		Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMontageList_HandsInPocketPin"), sizeof(FStMontageList_HandsInPocketPin), Get_Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMontageList_HandsInPocketPin_Hash() { return 4119293391U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
