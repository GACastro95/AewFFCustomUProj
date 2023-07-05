// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPartyChatPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPartyChatPlayerData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPlatformType();
// End Cross Module References
class UScriptStruct* FLobbyPartyChatPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("LobbyPartyChatPlayerData"), sizeof(FLobbyPartyChatPlayerData), Get_Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FLobbyPartyChatPlayerData>()
{
	return FLobbyPartyChatPlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyPartyChatPlayerData(FLobbyPartyChatPlayerData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("LobbyPartyChatPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPartyChatPlayerData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPartyChatPlayerData()
	{
		UScriptStruct::DeferCppStructOps<FLobbyPartyChatPlayerData>(FName(TEXT("LobbyPartyChatPlayerData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPartyChatPlayerData;
	struct Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Icons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Icons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatPlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPartyChatPlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPartyChatPlayerData" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPartyChatPlayerData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Icons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPartyChatPlayerData" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPartyChatPlayerData, Icons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Icons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Icons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPartyChatPlayerData" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPartyChatPlayerData, Platform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Icons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Icons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::NewProp_Platform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"LobbyPartyChatPlayerData",
		sizeof(FLobbyPartyChatPlayerData),
		alignof(FLobbyPartyChatPlayerData),
		Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyPartyChatPlayerData"), sizeof(FLobbyPartyChatPlayerData), Get_Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData_Hash() { return 1540397153U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
