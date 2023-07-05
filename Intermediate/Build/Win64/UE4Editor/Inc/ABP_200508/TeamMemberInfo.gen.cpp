// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TeamMemberInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamMemberInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTeamMemberInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FTeamMemberInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTeamMemberInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeamMemberInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TeamMemberInfo"), sizeof(FTeamMemberInfo), Get_Z_Construct_UScriptStruct_FTeamMemberInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTeamMemberInfo>()
{
	return FTeamMemberInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTeamMemberInfo(FTeamMemberInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TeamMemberInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTeamMemberInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTeamMemberInfo()
	{
		UScriptStruct::DeferCppStructOps<FTeamMemberInfo>(FName(TEXT("TeamMemberInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTeamMemberInfo;
	struct Z_Construct_UScriptStruct_FTeamMemberInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Wrestler_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Wrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TeamMemberInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeamMemberInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_Wrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_Wrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamMemberInfo" },
		{ "ModuleRelativePath", "Public/TeamMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_Wrestler = { "Wrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamMemberInfo, Wrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_Wrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_Wrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_PresetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamMemberInfo" },
		{ "ModuleRelativePath", "Public/TeamMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_PresetID = { "PresetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamMemberInfo, PresetID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_PresetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_PresetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_Wrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_Wrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::NewProp_PresetID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"TeamMemberInfo",
		sizeof(FTeamMemberInfo),
		alignof(FTeamMemberInfo),
		Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTeamMemberInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTeamMemberInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TeamMemberInfo"), sizeof(FTeamMemberInfo), Get_Z_Construct_UScriptStruct_FTeamMemberInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTeamMemberInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTeamMemberInfo_Hash() { return 3179456138U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
