// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELActivity_MatchPlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELActivity_MatchPlayerInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELActivity_MatchPlayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELActivity_MatchPlayerInfo"), sizeof(FELActivity_MatchPlayerInfo), Get_Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELActivity_MatchPlayerInfo>()
{
	return FELActivity_MatchPlayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELActivity_MatchPlayerInfo(FELActivity_MatchPlayerInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELActivity_MatchPlayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELActivity_MatchPlayerInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELActivity_MatchPlayerInfo()
	{
		UScriptStruct::DeferCppStructOps<FELActivity_MatchPlayerInfo>(FName(TEXT("ELActivity_MatchPlayerInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELActivity_MatchPlayerInfo;
	struct Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PosNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNPC_MetaData[];
#endif
		static void NewProp_bNPC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELActivity_MatchPlayerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELActivity_MatchPlayerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PosNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_MatchPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_MatchPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PosNo = { "PosNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELActivity_MatchPlayerInfo, PosNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PosNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PosNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_MatchPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_MatchPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELActivity_MatchPlayerInfo, PlayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_TeamNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_MatchPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_MatchPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_TeamNo = { "TeamNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELActivity_MatchPlayerInfo, TeamNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_TeamNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_TeamNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_bNPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_MatchPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_MatchPlayerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_bNPC_SetBit(void* Obj)
	{
		((FELActivity_MatchPlayerInfo*)Obj)->bNPC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_bNPC = { "bNPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELActivity_MatchPlayerInfo), &Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_bNPC_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_bNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_bNPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PosNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_TeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::NewProp_bNPC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELActivity_MatchPlayerInfo",
		sizeof(FELActivity_MatchPlayerInfo),
		alignof(FELActivity_MatchPlayerInfo),
		Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELActivity_MatchPlayerInfo"), sizeof(FELActivity_MatchPlayerInfo), Get_Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELActivity_MatchPlayerInfo_Hash() { return 3038205121U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
