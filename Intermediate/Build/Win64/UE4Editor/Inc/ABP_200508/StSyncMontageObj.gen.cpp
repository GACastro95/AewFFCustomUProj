// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSyncMontageObj.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSyncMontageObj() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSyncMontageObj();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStSyncMontageObj>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSyncMontageObj cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSyncMontageObj::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSyncMontageObj_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSyncMontageObj, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSyncMontageObj"), sizeof(FStSyncMontageObj), Get_Z_Construct_UScriptStruct_FStSyncMontageObj_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSyncMontageObj>()
{
	return FStSyncMontageObj::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSyncMontageObj(FStSyncMontageObj::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSyncMontageObj"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSyncMontageObj
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSyncMontageObj()
	{
		UScriptStruct::DeferCppStructOps<FStSyncMontageObj>(FName(TEXT("StSyncMontageObj")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSyncMontageObj;
	struct Z_Construct_UScriptStruct_FStSyncMontageObj_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage_B;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSyncMontageObj.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSyncMontageObj>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSyncMontageObj" },
		{ "ModuleRelativePath", "Public/StSyncMontageObj.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_A = { "Montage_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSyncMontageObj, Montage_A), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSyncMontageObj" },
		{ "ModuleRelativePath", "Public/StSyncMontageObj.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_B = { "Montage_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSyncMontageObj, Montage_B), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_B_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::NewProp_Montage_B,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSyncMontageObj",
		sizeof(FStSyncMontageObj),
		alignof(FStSyncMontageObj),
		Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSyncMontageObj()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSyncMontageObj_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSyncMontageObj"), sizeof(FStSyncMontageObj), Get_Z_Construct_UScriptStruct_FStSyncMontageObj_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSyncMontageObj_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSyncMontageObj_Hash() { return 1204067817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
