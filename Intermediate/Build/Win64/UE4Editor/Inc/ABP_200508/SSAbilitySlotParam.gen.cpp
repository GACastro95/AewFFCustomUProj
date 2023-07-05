// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAbilitySlotParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAbilitySlotParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilitySlotParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilitySlotType();
// End Cross Module References
class UScriptStruct* FSSAbilitySlotParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAbilitySlotParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAbilitySlotParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAbilitySlotParam"), sizeof(FSSAbilitySlotParam), Get_Z_Construct_UScriptStruct_FSSAbilitySlotParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAbilitySlotParam>()
{
	return FSSAbilitySlotParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAbilitySlotParam(FSSAbilitySlotParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAbilitySlotParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilitySlotParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilitySlotParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAbilitySlotParam>(FName(TEXT("SSAbilitySlotParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilitySlotParam;
	struct Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ESSAbilitySlotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ESSAbilitySlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ESSAbilitySlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveCost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAbilitySlotParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAbilitySlotParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_ESSAbilitySlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_ESSAbilitySlotType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilitySlotParam" },
		{ "ModuleRelativePath", "Public/SSAbilitySlotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_ESSAbilitySlotType = { "ESSAbilitySlotType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilitySlotParam, ESSAbilitySlotType), Z_Construct_UEnum_ABP_200508_ESSAbilitySlotType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_ESSAbilitySlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_ESSAbilitySlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_MoveCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilitySlotParam" },
		{ "ModuleRelativePath", "Public/SSAbilitySlotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_MoveCost = { "MoveCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilitySlotParam, MoveCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_MoveCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_MoveCost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_ESSAbilitySlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_ESSAbilitySlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::NewProp_MoveCost,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSAbilitySlotParam",
		sizeof(FSSAbilitySlotParam),
		alignof(FSSAbilitySlotParam),
		Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAbilitySlotParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAbilitySlotParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAbilitySlotParam"), sizeof(FSSAbilitySlotParam), Get_Z_Construct_UScriptStruct_FSSAbilitySlotParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAbilitySlotParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAbilitySlotParam_Hash() { return 181540930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
