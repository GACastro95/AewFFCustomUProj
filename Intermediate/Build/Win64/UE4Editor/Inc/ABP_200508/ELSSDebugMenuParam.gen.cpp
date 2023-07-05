// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDebugMenuParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDebugMenuParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSDebugMenuParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag();
// End Cross Module References

static_assert(std::is_polymorphic<FELSSDebugMenuParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELSSDebugMenuParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELSSDebugMenuParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSDebugMenuParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSDebugMenuParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSDebugMenuParam"), sizeof(FELSSDebugMenuParam), Get_Z_Construct_UScriptStruct_FELSSDebugMenuParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSDebugMenuParam>()
{
	return FELSSDebugMenuParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSDebugMenuParam(FELSSDebugMenuParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSDebugMenuParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSDebugMenuParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSDebugMenuParam()
	{
		UScriptStruct::DeferCppStructOps<FELSSDebugMenuParam>(FName(TEXT("ELSSDebugMenuParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSDebugMenuParam;
	struct Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerWrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerWrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpawnIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerSpawnIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShufflePlayerStart_MetaData[];
#endif
		static void NewProp_ShufflePlayerStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShufflePlayerStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableAIOnStart_MetaData[];
#endif
		static void NewProp_DisableAIOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableAIOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPlayersRequiredToStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPlayersRequiredToStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWrestlerNum_MetaData[];
#endif
		static void NewProp_OverrideWrestlerNum_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideWrestlerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDefaultSettingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerDefaultSettingId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipReadyState_MetaData[];
#endif
		static void NewProp_SkipReadyState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipReadyState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalDebugFlags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocalDebugFlags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalDebugFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalDebugFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSDebugMenuParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerWrestlerID = { "PlayerWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, PlayerWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerWrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerSpawnIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerSpawnIndex = { "PlayerSpawnIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, PlayerSpawnIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerSpawnIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerSpawnIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_ShufflePlayerStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_ShufflePlayerStart_SetBit(void* Obj)
	{
		((FELSSDebugMenuParam*)Obj)->ShufflePlayerStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_ShufflePlayerStart = { "ShufflePlayerStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSDebugMenuParam), &Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_ShufflePlayerStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_ShufflePlayerStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_ShufflePlayerStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_DisableAIOnStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_DisableAIOnStart_SetBit(void* Obj)
	{
		((FELSSDebugMenuParam*)Obj)->DisableAIOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_DisableAIOnStart = { "DisableAIOnStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSDebugMenuParam), &Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_DisableAIOnStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_DisableAIOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_DisableAIOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_NumberOfPlayersRequiredToStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_NumberOfPlayersRequiredToStart = { "NumberOfPlayersRequiredToStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, NumberOfPlayersRequiredToStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_NumberOfPlayersRequiredToStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_NumberOfPlayersRequiredToStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_OverrideWrestlerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_OverrideWrestlerNum_SetBit(void* Obj)
	{
		((FELSSDebugMenuParam*)Obj)->OverrideWrestlerNum = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_OverrideWrestlerNum = { "OverrideWrestlerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSDebugMenuParam), &Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_OverrideWrestlerNum_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_OverrideWrestlerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_OverrideWrestlerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_WrestlerNum = { "WrestlerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, WrestlerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_WrestlerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerDefaultSettingId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerDefaultSettingId = { "PlayerDefaultSettingId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, PlayerDefaultSettingId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerDefaultSettingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerDefaultSettingId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability1 = { "Ability1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, Ability1), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability2 = { "Ability2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, Ability2), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability3 = { "Ability3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, Ability3), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_SkipReadyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_SkipReadyState_SetBit(void* Obj)
	{
		((FELSSDebugMenuParam*)Obj)->SkipReadyState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_SkipReadyState = { "SkipReadyState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSDebugMenuParam), &Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_SkipReadyState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_SkipReadyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_SkipReadyState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags_Inner = { "LocalDebugFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuParam" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags = { "LocalDebugFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSDebugMenuParam, LocalDebugFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerSpawnIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_ShufflePlayerStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_DisableAIOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_NumberOfPlayersRequiredToStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_OverrideWrestlerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_WrestlerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_PlayerDefaultSettingId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_Ability3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_SkipReadyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::NewProp_LocalDebugFlags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELSSDebugMenuParam",
		sizeof(FELSSDebugMenuParam),
		alignof(FELSSDebugMenuParam),
		Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSDebugMenuParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSDebugMenuParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSDebugMenuParam"), sizeof(FELSSDebugMenuParam), Get_Z_Construct_UScriptStruct_FELSSDebugMenuParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSDebugMenuParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSDebugMenuParam_Hash() { return 846508796U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
