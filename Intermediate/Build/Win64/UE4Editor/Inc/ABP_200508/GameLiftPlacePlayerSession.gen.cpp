// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftPlacePlayerSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftPlacePlayerSession() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FGameLiftPlacePlayerSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftPlacePlayerSession"), sizeof(FGameLiftPlacePlayerSession), Get_Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftPlacePlayerSession>()
{
	return FGameLiftPlacePlayerSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftPlacePlayerSession(FGameLiftPlacePlayerSession::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftPlacePlayerSession"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlacePlayerSession
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlacePlayerSession()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftPlacePlayerSession>(FName(TEXT("GameLiftPlacePlayerSession")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlacePlayerSession;
	struct Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftPlacePlayerSession.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftPlacePlayerSession>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlacePlayerSession" },
		{ "ModuleRelativePath", "Public/GameLiftPlacePlayerSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlacePlayerSession, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlacePlayerSession" },
		{ "ModuleRelativePath", "Public/GameLiftPlacePlayerSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerSessionId = { "playerSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlacePlayerSession, playerSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::NewProp_playerSessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftPlacePlayerSession",
		sizeof(FGameLiftPlacePlayerSession),
		alignof(FGameLiftPlacePlayerSession),
		Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftPlacePlayerSession"), sizeof(FGameLiftPlacePlayerSession), Get_Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession_Hash() { return 2711137124U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
