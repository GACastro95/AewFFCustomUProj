// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGameRuleParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGameRuleParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameRuleParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSGameRuleParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSGameRuleParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSGameRuleParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGameRuleParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGameRuleParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGameRuleParam"), sizeof(FSSGameRuleParam), Get_Z_Construct_UScriptStruct_FSSGameRuleParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGameRuleParam>()
{
	return FSSGameRuleParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGameRuleParam(FSSGameRuleParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGameRuleParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameRuleParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameRuleParam()
	{
		UScriptStruct::DeferCppStructOps<FSSGameRuleParam>(FName(TEXT("SSGameRuleParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGameRuleParam;
	struct Z_Construct_UScriptStruct_FSSGameRuleParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyStateDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReadyStateDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPlayerNameNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AIPlayerNameNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_Lobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConnectionTimeout_Lobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_GamePlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConnectionTimeout_GamePlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyWaitLoginTimeFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LobbyWaitLoginTimeFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyWaitLoginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LobbyWaitLoginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyWaitReadyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LobbyWaitReadyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyCountDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LobbyCountDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyKickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LobbyKickTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGameRuleParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_PlayerMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, PlayerMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_PlayerMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_PlayerMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ReadyStateDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ReadyStateDuration = { "ReadyStateDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, ReadyStateDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ReadyStateDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ReadyStateDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_AIPlayerNameNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_AIPlayerNameNum = { "AIPlayerNameNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, AIPlayerNameNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_AIPlayerNameNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_AIPlayerNameNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_Lobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_Lobby = { "ConnectionTimeout_Lobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, ConnectionTimeout_Lobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_Lobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_Lobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_GamePlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_GamePlay = { "ConnectionTimeout_GamePlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, ConnectionTimeout_GamePlay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_GamePlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_GamePlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTimeFirst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTimeFirst = { "LobbyWaitLoginTimeFirst", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, LobbyWaitLoginTimeFirst), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTimeFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTimeFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTime = { "LobbyWaitLoginTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, LobbyWaitLoginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitReadyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitReadyTime = { "LobbyWaitReadyTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, LobbyWaitReadyTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitReadyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitReadyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyCountDownTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyCountDownTime = { "LobbyCountDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, LobbyCountDownTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyCountDownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyCountDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyKickTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameRuleParam" },
		{ "ModuleRelativePath", "Public/SSGameRuleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyKickTime = { "LobbyKickTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameRuleParam, LobbyKickTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyKickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyKickTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_PlayerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ReadyStateDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_AIPlayerNameNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_Lobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_ConnectionTimeout_GamePlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTimeFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitLoginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyWaitReadyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyCountDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::NewProp_LobbyKickTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSGameRuleParam",
		sizeof(FSSGameRuleParam),
		alignof(FSSGameRuleParam),
		Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGameRuleParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGameRuleParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGameRuleParam"), sizeof(FSSGameRuleParam), Get_Z_Construct_UScriptStruct_FSSGameRuleParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGameRuleParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGameRuleParam_Hash() { return 4188169872U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
