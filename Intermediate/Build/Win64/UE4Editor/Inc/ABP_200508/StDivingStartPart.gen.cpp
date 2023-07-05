// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StDivingStartPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStDivingStartPart() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStDivingStartPart();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStDivingStartPart>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStDivingStartPart cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStDivingStartPart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStDivingStartPart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStDivingStartPart, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StDivingStartPart"), sizeof(FStDivingStartPart), Get_Z_Construct_UScriptStruct_FStDivingStartPart_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStDivingStartPart>()
{
	return FStDivingStartPart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStDivingStartPart(FStDivingStartPart::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StDivingStartPart"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStDivingStartPart
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStDivingStartPart()
	{
		UScriptStruct::DeferCppStructOps<FStDivingStartPart>(FName(TEXT("StDivingStartPart")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStDivingStartPart;
	struct Z_Construct_UScriptStruct_FStDivingStartPart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mirror_MetaData[];
#endif
		static void NewProp_Mirror_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Mirror;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDivingStartPart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StDivingStartPart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStDivingStartPart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDivingStartPart" },
		{ "ModuleRelativePath", "Public/StDivingStartPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDivingStartPart, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Mirror_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDivingStartPart" },
		{ "ModuleRelativePath", "Public/StDivingStartPart.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Mirror_SetBit(void* Obj)
	{
		((FStDivingStartPart*)Obj)->Mirror = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Mirror = { "Mirror", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStDivingStartPart), &Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Mirror_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Mirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Mirror_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStDivingStartPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDivingStartPart_Statics::NewProp_Mirror,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStDivingStartPart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StDivingStartPart",
		sizeof(FStDivingStartPart),
		alignof(FStDivingStartPart),
		Z_Construct_UScriptStruct_FStDivingStartPart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDivingStartPart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStDivingStartPart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDivingStartPart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStDivingStartPart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStDivingStartPart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StDivingStartPart"), sizeof(FStDivingStartPart), Get_Z_Construct_UScriptStruct_FStDivingStartPart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStDivingStartPart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStDivingStartPart_Hash() { return 2977248096U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
