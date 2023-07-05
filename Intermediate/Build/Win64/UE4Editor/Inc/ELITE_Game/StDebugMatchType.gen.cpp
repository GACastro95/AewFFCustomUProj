// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/StDebugMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStDebugMatchType() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FStDebugMatchType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELDebugMatchType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FStMatchTypeData();
// End Cross Module References
class UScriptStruct* FStDebugMatchType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FStDebugMatchType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStDebugMatchType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("StDebugMatchType"), sizeof(FStDebugMatchType), Get_Z_Construct_UScriptStruct_FStDebugMatchType_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FStDebugMatchType>()
{
	return FStDebugMatchType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStDebugMatchType(FStDebugMatchType::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("StDebugMatchType"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFStDebugMatchType
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFStDebugMatchType()
	{
		UScriptStruct::DeferCppStructOps<FStDebugMatchType>(FName(TEXT("StDebugMatchType")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFStDebugMatchType;
	struct Z_Construct_UScriptStruct_FStDebugMatchType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EDebugMatchRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EDebugMatchRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EDebugMatchRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EMatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EMatchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDebugMatchType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StDebugMatchType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStDebugMatchType>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EDebugMatchRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EDebugMatchRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDebugMatchType" },
		{ "ModuleRelativePath", "Public/StDebugMatchType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EDebugMatchRule = { "EDebugMatchRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDebugMatchType, EDebugMatchRule), Z_Construct_UEnum_ELITE_Game_EELDebugMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EDebugMatchRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EDebugMatchRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EMatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDebugMatchType" },
		{ "ModuleRelativePath", "Public/StDebugMatchType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EMatchType = { "EMatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDebugMatchType, EMatchType), Z_Construct_UScriptStruct_FStMatchTypeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EMatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EMatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_ComNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDebugMatchType" },
		{ "ModuleRelativePath", "Public/StDebugMatchType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_ComNum = { "ComNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDebugMatchType, ComNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_ComNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_ComNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_PlayerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDebugMatchType" },
		{ "ModuleRelativePath", "Public/StDebugMatchType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDebugMatchType, PlayerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_PlayerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_PlayerNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStDebugMatchType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EDebugMatchRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EDebugMatchRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_EMatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_ComNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDebugMatchType_Statics::NewProp_PlayerNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStDebugMatchType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"StDebugMatchType",
		sizeof(FStDebugMatchType),
		alignof(FStDebugMatchType),
		Z_Construct_UScriptStruct_FStDebugMatchType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDebugMatchType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStDebugMatchType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStDebugMatchType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StDebugMatchType"), sizeof(FStDebugMatchType), Get_Z_Construct_UScriptStruct_FStDebugMatchType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStDebugMatchType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStDebugMatchType_Hash() { return 442730335U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
