// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StMontageList_AutoTracking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMontageList_AutoTracking() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_AutoTracking();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStMontageList_AutoTracking>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStMontageList_AutoTracking cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStMontageList_AutoTracking::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMontageList_AutoTracking, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StMontageList_AutoTracking"), sizeof(FStMontageList_AutoTracking), Get_Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStMontageList_AutoTracking>()
{
	return FStMontageList_AutoTracking::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMontageList_AutoTracking(FStMontageList_AutoTracking::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StMontageList_AutoTracking"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_AutoTracking
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_AutoTracking()
	{
		UScriptStruct::DeferCppStructOps<FStMontageList_AutoTracking>(FName(TEXT("StMontageList_AutoTracking")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_AutoTracking;
	struct Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMontageList_AutoTracking.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMontageList_AutoTracking>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Right_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_AutoTracking" },
		{ "ModuleRelativePath", "Public/StMontageList_AutoTracking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_AutoTracking, Right), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Left_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_AutoTracking" },
		{ "ModuleRelativePath", "Public/StMontageList_AutoTracking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_AutoTracking, Left), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Left_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::NewProp_Left,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StMontageList_AutoTracking",
		sizeof(FStMontageList_AutoTracking),
		alignof(FStMontageList_AutoTracking),
		Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_AutoTracking()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMontageList_AutoTracking"), sizeof(FStMontageList_AutoTracking), Get_Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMontageList_AutoTracking_Hash() { return 640037625U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
