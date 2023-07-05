// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_ChipGather.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_ChipGather() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_ChipGather();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugChipType();
// End Cross Module References
class UScriptStruct* FMiniGame_ChipGather::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_ChipGather_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_ChipGather, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_ChipGather"), sizeof(FMiniGame_ChipGather), Get_Z_Construct_UScriptStruct_FMiniGame_ChipGather_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_ChipGather>()
{
	return FMiniGame_ChipGather::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_ChipGather(FMiniGame_ChipGather::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_ChipGather"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_ChipGather
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_ChipGather()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_ChipGather>(FName(TEXT("MiniGame_ChipGather")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_ChipGather;
	struct Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNobodyRing_MetaData[];
#endif
		static void NewProp_bIsNobodyRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNobodyRing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNotGenerateBomb_MetaData[];
#endif
		static void NewProp_bIsNotGenerateBomb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNotGenerateBomb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedSpawnCoinPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FixedSpawnCoinPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DropChipType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropChipType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DropChipType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_ChipGather.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_ChipGather>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNobodyRing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ChipGather" },
		{ "ModuleRelativePath", "Public/MiniGame_ChipGather.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNobodyRing_SetBit(void* Obj)
	{
		((FMiniGame_ChipGather*)Obj)->bIsNobodyRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNobodyRing = { "bIsNobodyRing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_ChipGather), &Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNobodyRing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNobodyRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNobodyRing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNotGenerateBomb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ChipGather" },
		{ "ModuleRelativePath", "Public/MiniGame_ChipGather.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNotGenerateBomb_SetBit(void* Obj)
	{
		((FMiniGame_ChipGather*)Obj)->bIsNotGenerateBomb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNotGenerateBomb = { "bIsNotGenerateBomb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_ChipGather), &Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNotGenerateBomb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNotGenerateBomb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNotGenerateBomb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_FixedSpawnCoinPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ChipGather" },
		{ "ModuleRelativePath", "Public/MiniGame_ChipGather.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_FixedSpawnCoinPosition = { "FixedSpawnCoinPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_ChipGather, FixedSpawnCoinPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_FixedSpawnCoinPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_FixedSpawnCoinPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_DropChipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_DropChipType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ChipGather" },
		{ "ModuleRelativePath", "Public/MiniGame_ChipGather.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_DropChipType = { "DropChipType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_ChipGather, DropChipType), Z_Construct_UEnum_ABP_200508_EMiniGameDebugChipType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_DropChipType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_DropChipType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNobodyRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_bIsNotGenerateBomb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_FixedSpawnCoinPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_DropChipType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::NewProp_DropChipType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_ChipGather",
		sizeof(FMiniGame_ChipGather),
		alignof(FMiniGame_ChipGather),
		Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_ChipGather()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_ChipGather_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_ChipGather"), sizeof(FMiniGame_ChipGather), Get_Z_Construct_UScriptStruct_FMiniGame_ChipGather_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_ChipGather_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_ChipGather_Hash() { return 2197995768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
