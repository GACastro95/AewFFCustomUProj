// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPinchMovesReach.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPinchMovesReach() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesReach();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStPinchMovesReach>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPinchMovesReach cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPinchMovesReach::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesReach_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPinchMovesReach, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPinchMovesReach"), sizeof(FStPinchMovesReach), Get_Z_Construct_UScriptStruct_FStPinchMovesReach_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPinchMovesReach>()
{
	return FStPinchMovesReach::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPinchMovesReach(FStPinchMovesReach::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPinchMovesReach"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesReach
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesReach()
	{
		UScriptStruct::DeferCppStructOps<FStPinchMovesReach>(FName(TEXT("StPinchMovesReach")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesReach;
	struct Z_Construct_UScriptStruct_FStPinchMovesReach_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaceUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaceDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPinchMovesReach.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPinchMovesReach>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesReach" },
		{ "ModuleRelativePath", "Public/StPinchMovesReach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceUp = { "FaceUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesReach, FaceUp), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesReach" },
		{ "ModuleRelativePath", "Public/StPinchMovesReach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceDown = { "FaceDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesReach, FaceDown), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::NewProp_FaceDown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPinchMovesReach",
		sizeof(FStPinchMovesReach),
		alignof(FStPinchMovesReach),
		Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesReach()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesReach_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPinchMovesReach"), sizeof(FStPinchMovesReach), Get_Z_Construct_UScriptStruct_FStPinchMovesReach_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPinchMovesReach_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesReach_Hash() { return 3549826036U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
