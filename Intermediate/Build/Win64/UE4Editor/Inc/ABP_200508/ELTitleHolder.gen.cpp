// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTitleHolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTitleHolder() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolder();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FELTitleHolder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELTitleHolder_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELTitleHolder, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELTitleHolder"), sizeof(FELTitleHolder), Get_Z_Construct_UScriptStruct_FELTitleHolder_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELTitleHolder>()
{
	return FELTitleHolder::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELTitleHolder(FELTitleHolder::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELTitleHolder"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolder
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolder()
	{
		UScriptStruct::DeferCppStructOps<FELTitleHolder>(FName(TEXT("ELTitleHolder")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolder;
	struct Z_Construct_UScriptStruct_FELTitleHolder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELTitleHolder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELTitleHolder>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolder" },
		{ "ModuleRelativePath", "Public/ELTitleHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolder, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolder" },
		{ "ModuleRelativePath", "Public/ELTitleHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolder, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELTitleHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolder_Statics::NewProp_UID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELTitleHolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELTitleHolder",
		sizeof(FELTitleHolder),
		alignof(FELTitleHolder),
		Z_Construct_UScriptStruct_FELTitleHolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELTitleHolder_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELTitleHolder"), sizeof(FELTitleHolder), Get_Z_Construct_UScriptStruct_FELTitleHolder_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELTitleHolder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELTitleHolder_Hash() { return 233935332U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
